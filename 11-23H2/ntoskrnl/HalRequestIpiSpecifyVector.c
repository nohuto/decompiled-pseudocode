/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x140254750
 * Callers:
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KiReadyDeferredReadyList @ 0x140249D60 (KiReadyDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessThreadWaitList @ 0x140253E80 (KiProcessThreadWaitList.c)
 *     KiIpiSendRequest @ 0x1402540E0 (KiIpiSendRequest.c)
 *     HalRequestIpi @ 0x14035C330 (HalRequestIpi.c)
 *     HalRequestClockInterrupt @ 0x1403652E0 (HalRequestClockInterrupt.c)
 *     HalpInterruptResetAllProcessors @ 0x1405052EC (HalpInterruptResetAllProcessors.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x140580DF0 (KiIntRedirectQueueRequestOnProcessor.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x140254E10 (HalpInterruptSendIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, __int64 a2, unsigned int a3)
{
  int v7; // ebx
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  int v9; // [rsp+30h] [rbp-18h]

  v9 = 0;
  v8 = 0LL;
  if ( a1 )
  {
    if ( (unsigned int)(a1 - 1) < 2 )
      goto LABEL_4;
    return 3221225485LL;
  }
  if ( !a2 || (unsigned int)KeIsEmptyAffinityEx(a2) )
    return 3221225485LL;
LABEL_4:
  if ( a1 )
  {
    v7 = a1 - 1;
    if ( v7 )
    {
      if ( v7 == 1 )
        LODWORD(v8) = 3;
    }
    else
    {
      LODWORD(v8) = 4;
    }
  }
  else
  {
    LODWORD(v8) = 2;
    *((_QWORD *)&v8 + 1) = a2;
  }
  return HalpInterruptSendIpi(&v8, a3);
}
