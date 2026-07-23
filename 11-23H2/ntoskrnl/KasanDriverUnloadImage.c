/*
 * XREFs of KasanDriverUnloadImage @ 0x14020B620
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KasanUnloadInfoCompare @ 0x140565A50 (KasanUnloadInfoCompare.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall KasanDriverUnloadImage(__int64 a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // rsi
  unsigned __int64 Root; // rbx
  int v4; // edi
  int v5; // eax
  unsigned __int64 v6; // rax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  _RTL_BALANCED_NODE *v12; // rcx
  unsigned __int64 v13; // rbp
  ULONG_PTR *v14; // r14
  ULONG_PTR v15; // rdi
  ULONG_PTR v16; // r9
  _BYTE *v17; // rsi
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !KasaniEnabled )
    return;
  v1 = *(_QWORD *)(a1 + 48);
  v2 = KeAcquireSpinLockRaiseToDpc(&KasanDriverUnloadInfosLock);
  if ( (*(_BYTE *)&KasanDriverUnloadInfos.0 & 1) != 0 )
  {
    if ( KasanDriverUnloadInfos.Root )
      Root = (unsigned __int64)KasanDriverUnloadInfos.Root ^ (unsigned __int64)&KasanDriverUnloadInfos;
    else
      Root = 0LL;
  }
  else
  {
    Root = (unsigned __int64)KasanDriverUnloadInfos.Root;
  }
  v4 = *(_BYTE *)&KasanDriverUnloadInfos.0 & 1;
  if ( !Root )
    goto LABEL_15;
  do
  {
    v5 = KasanUnloadInfoCompare(v1, Root);
    if ( v5 < 0 )
    {
      v6 = *(_QWORD *)Root;
      if ( v4 && v6 )
        goto LABEL_20;
      goto LABEL_11;
    }
    if ( v5 <= 0 )
      break;
    v6 = *(_QWORD *)(Root + 8);
    if ( v4 && v6 )
    {
LABEL_20:
      Root ^= v6;
      continue;
    }
LABEL_11:
    Root = v6;
  }
  while ( Root );
  if ( Root )
    RtlRbRemoveNode(&KasanDriverUnloadInfos, (PRTL_BALANCED_NODE)Root);
LABEL_15:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&KasanDriverUnloadInfosLock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&KasanDriverUnloadInfosLock, 0LL);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v2 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
      v11 = (v10 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v10;
      if ( v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v2);
  if ( Root )
  {
    v12 = *(_RTL_BALANCED_NODE **)(Root + 32);
    v13 = 0LL;
    if ( v12 )
    {
      v14 = (ULONG_PTR *)(Root + 40);
      do
      {
        v15 = v14[1];
        v16 = *v14;
        if ( KasaniEnabled )
        {
          if ( v16 < 0xFFFF800000000000uLL )
            KeBugCheckEx(0x1F1u, 2uLL, 1uLL, v16, 0LL);
          if ( (v16 & 7) != 0 )
            KeBugCheckEx(0x1F1u, 2uLL, 2uLL, v16, 8uLL);
          if ( v16 + v15 < v16 )
            KeBugCheckEx(0x1F1u, 2uLL, 3uLL, v16, v14[1]);
          v17 = (_BYTE *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3));
          if ( v15 >> 3 )
          {
            memset((void *)(KasaniShadow + ((v16 + 0x800000000000LL) >> 3)), 0, v15 >> 3);
            v12 = *(_RTL_BALANCED_NODE **)(Root + 32);
            v17 += v15 >> 3;
          }
          if ( (v15 & 7) != 0 )
          {
            *v17 = v15 & 7;
            v12 = *(_RTL_BALANCED_NODE **)(Root + 32);
          }
        }
        ++v13;
        v14 += 2;
      }
      while ( v13 < (unsigned __int64)v12 );
    }
    ExFreePoolWithTag((PVOID)Root, 0);
  }
}
