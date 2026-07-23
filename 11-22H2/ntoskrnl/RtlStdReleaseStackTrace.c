/*
 * XREFs of RtlStdReleaseStackTrace @ 0x1405A9610
 * Callers:
 *     ExInitializeResourceLite @ 0x140207480 (ExInitializeResourceLite.c)
 *     ExpInitializeResource @ 0x1403C4950 (ExpInitializeResource.c)
 *     ExInitializeFastResource2 @ 0x1404130C0 (ExInitializeFastResource2.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall RtlStdReleaseStackTrace(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  int v5; // ebp
  unsigned int v6; // eax
  _DWORD *v7; // rdx
  _QWORD *v8; // rdi
  volatile signed __int64 *v9; // r14
  __int16 v10; // cx
  __int16 v11; // ax
  _QWORD *i; // rax
  unsigned __int64 v13; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf

  v2 = *(unsigned __int16 *)(a2 + 14);
  v5 = 0;
  v6 = 0;
  if ( (_WORD)v2 )
  {
    v7 = (_DWORD *)(a2 + 16);
    do
    {
      v6 += *v7;
      v7 += 2;
      --v2;
    }
    while ( v2 );
  }
  v8 = (_QWORD *)(a1 + 8 * (v6 % *(_DWORD *)(a1 + 720) + 2LL * (v6 % *(_DWORD *)(a1 + 720)) + 91));
  v9 = v8 + 1;
  *((_BYTE *)v8 + 16) = KeAcquireSpinLockRaiseToDpc(v8 + 1);
  v10 = *(_WORD *)(a2 + 8);
  if ( (v10 & 0x7FF) != 0x7FF )
  {
    v11 = v10 ^ (v10 ^ (v10 - 1)) & 0x7FF;
    *(_WORD *)(a2 + 8) = v11;
    if ( (v11 & 0x7FF) == 0 )
    {
      for ( i = (_QWORD *)*v8; ; i = (_QWORD *)*i )
      {
        if ( !i )
        {
          __debugbreak();
          goto LABEL_11;
        }
        if ( i == (_QWORD *)a2 )
          break;
        v8 = i;
      }
      *v8 = *(_QWORD *)a2;
LABEL_11:
      v5 = 1;
    }
  }
  v13 = *((unsigned __int8 *)v9 + 8);
  KxReleaseSpinLock(v9);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v13 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
      v18 = (v17 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v13);
  if ( v5 )
  {
    RtlpInterlockedPushEntrySList(
      (PSLIST_HEADER)(a1 + 16 * (((unsigned __int64)*(unsigned __int16 *)(a2 + 8) >> 11) + 13)),
      (PSLIST_ENTRY)(a2 + 16));
    _InterlockedAdd((volatile signed __int32 *)(a1 + 196), 1u);
  }
}
