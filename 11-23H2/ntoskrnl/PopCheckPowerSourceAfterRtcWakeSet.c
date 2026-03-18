/*
 * XREFs of PopCheckPowerSourceAfterRtcWakeSet @ 0x14059039C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA90F0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetTimer2 @ 0x140250150 (KeSetTimer2.c)
 *     KeResetEvent @ 0x1402AF940 (KeResetEvent.c)
 */

_BOOL8 PopCheckPowerSourceAfterRtcWakeSet()
{
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  KeResetEvent(&PopCheckPowerSourceAfterRtcWakeCompleted);
  v1[0] = 0LL;
  v1[1] = -1LL;
  return KeSetTimer2(
           (__int64)&PopCheckPowerSourceAfterRtcWakeTimer,
           -10000000LL * (unsigned int)PopCheckPowerSourceAfterRtcWakeTime,
           0LL,
           (__int64)v1);
}
