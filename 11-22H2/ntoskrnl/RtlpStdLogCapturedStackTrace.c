/*
 * XREFs of RtlpStdLogCapturedStackTrace @ 0x1405A9BF4
 * Callers:
 *     RtlStdLogStackTrace @ 0x1405A9584 (RtlStdLogStackTrace.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlCompareMemory @ 0x140429160 (RtlCompareMemory.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     RtlpStdGetSpaceForTrace @ 0x1405A9B34 (RtlpStdGetSpaceForTrace.c)
 */

PSLIST_ENTRY __fastcall RtlpStdLogCapturedStackTrace(__int64 a1, __int64 a2, unsigned int a3)
{
  SIZE_T v4; // rbp
  __int64 v6; // rdx
  __int64 v8; // rbx
  __int64 v9; // r14
  PSLIST_ENTRY i; // rbx
  PSLIST_ENTRY SpaceForTrace; // rax
  __int16 v12; // cx
  __int64 v13; // rdx
  __int16 v14; // cx
  unsigned __int64 v15; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v19; // eax
  bool v20; // zf

  v4 = 8LL * *(unsigned __int16 *)(a2 + 14);
  v6 = a3 % *(_DWORD *)(a1 + 720);
  v8 = 3 * v6;
  _InterlockedAdd((volatile signed __int32 *)(a1 + 176), 1u);
  v9 = a1 + 24LL * (unsigned int)v6;
  *(_BYTE *)(v9 + 744) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 736));
  for ( i = *(PSLIST_ENTRY *)(a1 + 8 * v8 + 728); i; i = i->Next )
  {
    if ( *((_WORD *)&i->Next + 7) == *(_WORD *)(a2 + 14) && RtlCompareMemory(&i[1], (const void *)(a2 + 16), v4) == v4 )
      goto LABEL_8;
  }
  SpaceForTrace = RtlpStdGetSpaceForTrace(a1, *(_WORD *)(a2 + 14));
  i = SpaceForTrace;
  if ( !SpaceForTrace )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 200), 1u);
    goto LABEL_11;
  }
  memmove(&SpaceForTrace[1], (const void *)(a2 + 16), v4);
  v12 = *(_WORD *)(a2 + 14);
  *((_WORD *)&i->Next + 4) &= 0xF800u;
  *((_WORD *)&i->Next + 7) = v12;
  v13 = 3LL * (a3 % *(_DWORD *)(a1 + 720));
  i->Next = *(_SLIST_ENTRY **)(a1 + 24LL * (a3 % *(_DWORD *)(a1 + 720)) + 728);
  *(_QWORD *)(a1 + 8 * v13 + 728) = i;
LABEL_8:
  v14 = *((_WORD *)&i->Next + 4);
  if ( (v14 & 0x7FF) != 0x7FF )
    *((_WORD *)&i->Next + 4) = v14 ^ (v14 ^ (v14 + 1)) & 0x7FF;
LABEL_11:
  v15 = *(unsigned __int8 *)(v9 + 744);
  KxReleaseSpinLock((volatile signed __int64 *)(v9 + 736));
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v15 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
      v20 = (v19 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v19;
      if ( v20 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v15);
  return i;
}
