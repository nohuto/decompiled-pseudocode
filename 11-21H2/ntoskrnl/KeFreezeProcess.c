/*
 * XREFs of KeFreezeProcess @ 0x1402443D8
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140580DB8 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x1406C03F0 (PsFreezeProcess.c)
 * Callees:
 *     KiFreezeSingleThread @ 0x140244508 (KiFreezeSingleThread.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  char CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // r12
  __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // esi
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  _DWORD *SchedulerAssist; // r9

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 888);
  v9 = v8 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime(0LL);
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 3u);
  }
  else
  {
    *(_DWORD *)(a1 + 888) = v8 + 1;
    if ( v8 )
      goto LABEL_7;
  }
  v10 = (_QWORD *)(a1 + 48);
  for ( i = *(_QWORD **)(a1 + 48); i != v10; i = (_QWORD *)*i )
  {
    LOBYTE(v7) = a2;
    KiFreezeSingleThread(CurrentPrcb, i - 95, v7);
  }
LABEL_7:
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v9;
}
