/*
 * XREFs of PepNotifyFeedbackRead @ 0x1C000CEBC
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x1C000CCC0 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x1C000CD40 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x1C000CDC0 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x1C000CE40 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002630 (WPP_RECORDER_SF_D.c)
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
      (__int64)&WPP_57f963f740483ea9c1cd5ca523cbe67d_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
