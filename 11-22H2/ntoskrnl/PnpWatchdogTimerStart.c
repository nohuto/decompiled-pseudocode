/*
 * XREFs of PnpWatchdogTimerStart @ 0x140785B20
 * Callers:
 *     PiUEventNotifyUserMode @ 0x140783EFC (PiUEventNotifyUserMode.c)
 *     PnpEnableWatchdog @ 0x14078652C (PnpEnableWatchdog.c)
 * Callees:
 *     WdtpArmTimer @ 0x14031D894 (WdtpArmTimer.c)
 */

__int64 __fastcall PnpWatchdogTimerStart(__int64 a1)
{
  int v1; // edx

  if ( *(_BYTE *)(a1 + 140) )
  {
    v1 = *(_DWORD *)(a1 + 132);
    *(_BYTE *)(a1 + 140) = 0;
  }
  else
  {
    v1 = *(_DWORD *)(a1 + 32);
  }
  return WdtpArmTimer(a1, v1);
}
