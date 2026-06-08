/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000E02C
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x1C000DE30 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x1C000DEB0 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x1C000DF30 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000DFB0 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000325C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  v2 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x24u,
      (__int64)&WPP_f9bd8d112b513185ab5e94a42bec474e_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
