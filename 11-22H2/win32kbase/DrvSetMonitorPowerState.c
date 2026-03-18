/*
 * XREFs of DrvSetMonitorPowerState @ 0x1C00C4CB0
 * Callers:
 *     PowerOffMonitor @ 0x1C0133C60 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C0133F80 (PowerOnMonitor.c)
 * Callees:
 *     UserIsWddmConnectedSession @ 0x1C001EFF0 (UserIsWddmConnectedSession.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00CAA74 (DrvSetWddmDeviceMonitorPowerState.c)
 */

__int64 __fastcall DrvSetMonitorPowerState(__int64 a1, unsigned int a2, char a3, __int64 a4)
{
  __int64 v7; // r8

  if ( !(unsigned int)UserIsWddmConnectedSession() )
    return 3221225473LL;
  LOBYTE(v7) = a3;
  DrvSetWddmDeviceMonitorPowerState(0LL, a2, v7, a4);
  return 0LL;
}
