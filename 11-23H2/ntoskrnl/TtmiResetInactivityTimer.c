/*
 * XREFs of TtmiResetInactivityTimer @ 0x1409AB16C
 * Callers:
 *     TtmiResetTerminalTimeouts @ 0x1409AB20C (TtmiResetTerminalTimeouts.c)
 *     TtmpUpdateTerminalState @ 0x1409ABC98 (TtmpUpdateTerminalState.c)
 *     TtmpWnfInactivityTimeoutCallback @ 0x1409ABE50 (TtmpWnfInactivityTimeoutCallback.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     KiSetTimerEx @ 0x140252820 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x140252AA0 (KeCancelTimer.c)
 *     TtmiLogInactivityTimerReset @ 0x1409A85B0 (TtmiLogInactivityTimerReset.c)
 */

void __fastcall TtmiResetInactivityTimer(int a1)
{
  __int64 v2; // rbx

  ExAcquireResourceExclusiveLite(&TtmpTerminalInactivityLock, 1u);
  if ( TtmpTerminalInactivityTimeout )
    KiSetTimerEx(
      (__int64)&TtmpTerminalInactivityTimer,
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
      TtmiLogInactivityTimerReset(4);
    TtmpLastInputInactivityResetTime = v2;
  }
  else
  {
    TtmiLogInactivityTimerReset(a1);
  }
  ExReleaseResourceLite(&TtmpTerminalInactivityLock);
}
