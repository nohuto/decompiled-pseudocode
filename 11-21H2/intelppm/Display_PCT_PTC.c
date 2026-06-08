/*
 * XREFs of Display_PCT_PTC @ 0x1C003C5B0
 * Callers:
 *     InitAcpiPerfStates @ 0x1C003FFA8 (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C004032C (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002544 (WPP_RECORDER_SF_s.c)
 *     WPP_RECORDER_SF_ @ 0x1C00026F0 (WPP_RECORDER_SF_.c)
 *     DisplayGenAddr @ 0x1C0025614 (DisplayGenAddr.c)
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
          0x5Fu,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x60u,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
          0x61u,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          5u,
          2u,
          0x62u,
          (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids,
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
                 0x63u,
                 (__int64)&WPP_ea9a346b7756351237689efb62ec9115_Traceguids);
    }
  }
  return result;
}
