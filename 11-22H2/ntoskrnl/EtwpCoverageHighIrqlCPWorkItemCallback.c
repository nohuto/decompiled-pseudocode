/*
 * XREFs of EtwpCoverageHighIrqlCPWorkItemCallback @ 0x1405FF820
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     TelemetryCoverageStringHashInternal @ 0x140364D7C (TelemetryCoverageStringHashInternal.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwpCoverageRecord @ 0x1407DDB00 (EtwpCoverageRecord.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpCoverageHighIrqlCPWorkItemCallback(_QWORD *a1)
{
  __int64 v1; // rdi
  __int64 **v2; // r14
  KIRQL v3; // al
  __int64 *v4; // rbx
  unsigned __int64 v5; // rsi
  int v6; // r13d
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  _BYTE *v9; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  int v17; // eax
  _DWORD *v18; // r8
  _QWORD v19[11]; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+88h] [rbp+10h] BYREF

  v1 = *a1 + 24LL;
  v21 = 0;
  memset(v19, 0, 24);
  v2 = (__int64 **)(v1 + 16);
  while ( 1 )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v1);
    v4 = *v2;
    v5 = v3;
    if ( *v2 == (__int64 *)v2 )
      break;
    v7 = *v4;
    if ( (__int64 **)v4[1] != v2 || *(__int64 **)(v7 + 8) != v4 )
      __fastfail(3u);
    *v2 = (__int64 *)v7;
    v6 = 1;
    *(_QWORD *)(v7 + 8) = v2;
LABEL_8:
    v8 = v4[3];
    v9 = (_BYTE *)v4[4];
    v4[4] = v8;
    KxReleaseSpinLock((volatile signed __int64 *)v1);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && (unsigned __int8)v5 <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v14 = (v13 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v13;
        if ( v14 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
    if ( (unsigned __int64)v9 < v8 )
    {
      do
      {
        *(_QWORD *)((char *)&v19[1] + 4) = 0LL;
        HIDWORD(v19[2]) = 0;
        v19[0] = v9;
        LODWORD(v19[1]) = TelemetryCoverageStringHashInternal(v9, &v21);
        EtwpCoverageRecord(a1, v19);
        v9 += (unsigned int)(v21 + 1);
      }
      while ( (unsigned __int64)v9 < v8 );
      v2 = (__int64 **)(v1 + 16);
    }
    if ( v6 )
      ExFreePoolWithTag(v4, 0x56777445u);
  }
  v4 = *(__int64 **)(v1 + 8);
  if ( v4[4] < (unsigned __int64)v4[3] )
  {
    v6 = 0;
    goto LABEL_8;
  }
  v4[3] = (__int64)(v4 + 5);
  v4[4] = (__int64)(v4 + 5);
  *(_DWORD *)(v1 + 72) = 0;
  KxReleaseSpinLock((volatile signed __int64 *)v1);
  if ( (_DWORD)KiIrqlFlags )
  {
    v15 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v15 <= 0xFu && (unsigned __int8)v5 <= 0xFu && v15 >= 2u )
    {
      v16 = KeGetCurrentPrcb();
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v18 = v16->SchedulerAssist;
      v14 = (v17 & v18[5]) == 0;
      v18[5] &= v17;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick((__int64)v16);
    }
  }
  __writecr8(v5);
}
