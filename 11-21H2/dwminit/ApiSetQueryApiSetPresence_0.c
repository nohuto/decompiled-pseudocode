/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x180003350
 * Callers:
 *     IsWaitForInputIdlePresent @ 0x1800027C4 (IsWaitForInputIdlePresent.c)
 *     IsEnumDisplayDevicesWPresent @ 0x1800028A4 (IsEnumDisplayDevicesWPresent.c)
 *     IsDwmLockScreenUpdatesPresent @ 0x180002984 (IsDwmLockScreenUpdatesPresent.c)
 *     IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180002AF0 (IsDwmMonitorExtDwmProcessCreatedPresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
