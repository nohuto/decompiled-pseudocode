/*
 * XREFs of Display_PCT_PTC @ 0x1C003DA90
 * Callers:
 *     InitAcpiPerfStates @ 0x1C00411D8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C004155C (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000316C (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C000331C (WPP_RECORDER_SF_.c)
 *     DisplayGenAddr @ 0x1C002C4C0 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_PCT_PTC(unsigned __int8 *a1, const char *a2, struct _DEVICE_OBJECT *a3, __int64 a4)
{
  struct _DEVICE_OBJECT *v6; // r8
  __int64 v7; // r9
  __int64 result; // rax

  if ( a1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x65u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x66u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
          a2);
    }
    DisplayGenAddr(a1, "  ", a3, a4);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x67u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x68u,
          (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids,
          a2);
    }
    result = DisplayGenAddr(a1 + 12, "  ", v6, v7);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        return WPP_RECORDER_SF_(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 5u,
                 2u,
                 0x69u,
                 (__int64)&WPP_8ce74bd36e8a3de55b0fe4d3e246537d_Traceguids);
    }
  }
  return result;
}
