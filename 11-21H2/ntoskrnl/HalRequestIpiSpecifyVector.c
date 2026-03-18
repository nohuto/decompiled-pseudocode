/*
 * XREFs of HalRequestIpiSpecifyVector @ 0x140300100
 * Callers:
 *     HalRequestClockInterrupt @ 0x14022F2D0 (HalRequestClockInterrupt.c)
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KiIntRedirectQueueRequestOnProcessor @ 0x1402943C0 (KiIntRedirectQueueRequestOnProcessor.c)
 *     KiExitDispatcher @ 0x1402B0820 (KiExitDispatcher.c)
 *     KiIpiSendRequest @ 0x1402FFB70 (KiIpiSendRequest.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiProcessThreadWaitList @ 0x140340390 (KiProcessThreadWaitList.c)
 *     HalpInterruptResetAllProcessors @ 0x14051F9A8 (HalpInterruptResetAllProcessors.c)
 * Callees:
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 */

__int64 __fastcall HalRequestIpiSpecifyVector(int a1, _WORD *a2, unsigned int a3)
{
  int v4; // ecx
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+30h] [rbp-18h]

  v6 = 0;
  v5 = 0LL;
  if ( !a1 )
  {
    if ( a2 && *a2 )
    {
      while ( !*(_QWORD *)&a2[4 * (unsigned __int16)a1 + 4] )
      {
        LOWORD(a1) = a1 + 1;
        if ( (unsigned __int16)a1 >= *a2 )
          return 3221225485LL;
      }
      LODWORD(v5) = 2;
      *((_QWORD *)&v5 + 1) = a2;
      return HalpInterruptSendIpi((int *)&v5, a3);
    }
    return 3221225485LL;
  }
  if ( (unsigned int)(a1 - 1) > 1 )
    return 3221225485LL;
  v4 = a1 - 1;
  if ( v4 )
  {
    if ( v4 == 1 )
      LODWORD(v5) = 3;
    return HalpInterruptSendIpi((int *)&v5, a3);
  }
  LODWORD(v5) = 4;
  return HalpInterruptSendIpi((int *)&v5, a3);
}
