/*
 * XREFs of TtmiResetInactivityTimer @ 0x1409A332C
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x1409A33CC (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x1409A3E48 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409A4000 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A8894 (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(unsigned int a1)
{
  __int64 v2; // rbx

  ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
  if ( TtmpTerminalInactivityTimeout )
    KiSetTimerEx(
      (unsigned __int64)&TtmpTerminalInactivityTimer,
      TtmpTerminalInactivityTimeout,
      0,
      0,
      (__int64)&TtmpTerminalInactivityTimerDpc);
  else
    KeCancelTimer(&TtmpTerminalInactivityTimer);
  if ( a1 == 4 )
  {
    v2 = MEMORY[0xFFFFF78000000008];
    if ( (unsigned __int64)(MEMORY[0xFFFFF78000000008] - TtmpLastInputInactivityResetTime) > 0x1312D00 )
      TtmiLogInactivityTimerReset(4LL);
    TtmpLastInputInactivityResetTime = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite(&TtmpTerminalInactivityLock);
}
