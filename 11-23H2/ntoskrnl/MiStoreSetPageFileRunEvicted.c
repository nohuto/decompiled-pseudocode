/*
 * XREFs of MiStoreSetPageFileRunEvicted @ 0x14065CF1C
 * Callers:
 *     MiStoreEvictThread @ 0x1403A8830 (MiStoreEvictThread.c)
 * Callees:
 *     RtlClearBits @ 0x14022DB10 (RtlClearBits.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlSetBits @ 0x1402E07C0 (RtlSetBits.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiStoreSetPageFileRunEvicted(__int64 a1, ULONG a2, unsigned int a3)
{
  volatile LONG *v3; // r14
  __int64 v4; // rbp
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rcx
  BOOL v10; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf

  v3 = (volatile LONG *)(a1 + 232);
  v4 = a3;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  RtlSetBits((PRTL_BITMAP)(*(_QWORD *)(a1 + 112) + 24LL), a2, v4);
  v8 = *(_QWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 200) -= v4;
  RtlClearBits((PRTL_BITMAP)(v8 + 8), a2, v4);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  if ( !v9 )
    v10 = (*(_BYTE *)(a1 + 206) & 1) != 0;
  *(_QWORD *)(a1 + 24) = v9 + v4;
  ExReleaseSpinLockExclusiveFromDpcLevel(v3);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
      v15 = (v14 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v14;
      if ( v15 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v7);
  if ( v10 )
    KeSetEvent((PRKEVENT)(*(_QWORD *)(a1 + 248) + 920LL), 0, 0);
}
