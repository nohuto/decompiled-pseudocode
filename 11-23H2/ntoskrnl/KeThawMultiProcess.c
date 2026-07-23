/*
 * XREFs of KeThawMultiProcess @ 0x140204688
 * Callers:
 *     PsThawMultiProcess @ 0x1402044E4 (PsThawMultiProcess.c)
 * Callees:
 *     KiThawSingleThread @ 0x140205004 (KiThawSingleThread.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028ABC0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402E76F4 (KiQueryUnbiasedInterruptTime.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeThawMultiProcess(__int64 a1, char a2, unsigned int a3)
{
  _QWORD **v4; // rsi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r12
  volatile LONG *v8; // r15
  __int64 v9; // r9
  unsigned int v10; // edx
  unsigned int v11; // ebp
  __int64 v12; // rdx
  char v13; // r11
  _QWORD *i; // rax
  _QWORD *j; // rbx
  _DWORD *SchedulerAssist; // r9
  __int64 v18; // rax
  unsigned int v19; // ecx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  _DWORD *v22; // r8
  int v23; // eax
  bool v24; // zf

  v4 = (_QWORD **)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v18) = 4;
    if ( CurrentIrql != 2 )
      v18 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v18;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v10 = *(_DWORD *)(a1 + 888);
  v11 = v10 + ((*(_DWORD *)(a1 + 632) >> 3) & 1);
  if ( a2 )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 632), 3u);
    v12 = KiQueryUnbiasedInterruptTime(0LL) - *(_QWORD *)(a1 + 72);
    if ( (*(_DWORD *)(a1 + 632) & 0x10) != 0 )
    {
      for ( i = *v4; i != v4; i = (_QWORD *)*i )
        *(i - 64) += v12;
    }
    if ( !v13 )
    {
LABEL_8:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
      if ( (_DWORD)KiIrqlFlags )
      {
        v20 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
        {
          v21 = KeGetCurrentPrcb();
          v22 = v21->SchedulerAssist;
          v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v24 = (v23 & v22[5]) == 0;
          v22[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(v21);
        }
      }
      __writecr8(CurrentIrql);
      return v11;
    }
  }
  else
  {
    v19 = 0;
    if ( a3 <= v10 )
      v19 = v10 - a3;
    *(_DWORD *)(a1 + 888) = v19;
    if ( !v10 || v19 )
      goto LABEL_8;
  }
  for ( j = *v4; j != v4; j = (_QWORD *)*j )
  {
    LOBYTE(v9) = a2;
    KiThawSingleThread(CurrentPrcb, j - 95, 0LL, v9);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, CurrentIrql);
  return v11;
}
