/*
 * XREFs of KeFreezeProcess @ 0x14036F208
 * Callers:
 *     MiReAcquireOutSwappedProcessCommit @ 0x140618F78 (MiReAcquireOutSwappedProcessCommit.c)
 *     PsFreezeProcess @ 0x1407EC200 (PsFreezeProcess.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CD50 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E7464 (KiQueryUnbiasedInterruptTime.c)
 *     KiFreezeSingleThread @ 0x14036F30C (KiFreezeSingleThread.c)
 */

__int64 __fastcall KeFreezeProcess(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r14
  volatile LONG *v6; // r12
  __int64 v7; // r8
  int v8; // ecx
  unsigned int v9; // ebp
  _QWORD *v10; // rdi
  _QWORD *i; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v14; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v14) = 4;
    if ( CurrentIrql != 2 )
      v14 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v14;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_DWORD *)(a1 + 888);
  v9 = v8 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    *(_QWORD *)(a1 + 72) = KiQueryUnbiasedInterruptTime();
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
  KiExitDispatcher((__int64)CurrentPrcb, 0, (_PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v9;
}
