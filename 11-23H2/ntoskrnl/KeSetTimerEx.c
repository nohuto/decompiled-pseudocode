/*
 * XREFs of KeSetTimerEx @ 0x140253650
 * Callers:
 *     <none>
 * Callees:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiTimerWaitTest @ 0x140252FB0 (KiTimerWaitTest.c)
 *     KiComputeDueTime @ 0x140253830 (KiComputeDueTime.c)
 *     KiInsertTimerTable @ 0x1402538F0 (KiInsertTimerTable.c)
 *     KiCancelTimer @ 0x140253B60 (KiCancelTimer.c)
 *     PsTimerResolutionActive @ 0x1402552C0 (PsTimerResolutionActive.c)
 *     KiTraceSetTimer @ 0x140462E80 (KiTraceSetTimer.c)
 */

BOOLEAN __stdcall KeSetTimerEx(PKTIMER Timer, LARGE_INTEGER DueTime, LONG Period, PKDPC Dpc)
{
  _KDPC *v7; // rsi
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rbp
  __int64 v11; // r8
  BOOLEAN v12; // r15
  unsigned __int16 v13; // dx
  __int64 v14; // r11
  int v15; // r9d
  _DWORD *SchedulerAssist; // r8
  __int64 v18; // r9
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v19 = 0;
  v7 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)Dpc),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v18) = 4;
    else
      v18 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v18;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = KiCancelTimer(Timer, 0LL);
  v13 = 1;
  if ( KiGlobalTimerResolutionRequests
    || !CurrentPrcb->NestingLevel
    && (unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process, 1LL, v11) )
  {
    v13 = 0;
  }
  Timer->TimerType = v13;
  Timer->Dpc = v7;
  Timer->Period = Period;
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))KiComputeDueTime)(
                       Timer,
                       (LARGE_INTEGER)DueTime.QuadPart,
                       0LL,
                       &v19)
    && (v15 = v19,
        Timer->Header.SignalState = v14,
        (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)Dpc, v15, v14)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(Timer, Dpc, 0LL);
    else
      _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest((__int64)CurrentPrcb, (__int64)Timer, 0LL);
  }
  KiExitDispatcher((__int64)CurrentPrcb, 0, (_PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return v12;
}
