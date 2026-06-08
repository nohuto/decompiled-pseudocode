/*
 * XREFs of Display_PCT_PTC @ 0x1C002A598
 * Callers:
 *     InitAcpiPerfStates @ 0x1C003505C (InitAcpiPerfStates.c)
 *     InitAcpiThrottleStates @ 0x1C00353E0 (InitAcpiThrottleStates.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00029DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_s @ 0x1C000514C (WPP_RECORDER_SF_s.c)
 *     DisplayGenAddr @ 0x1C0029724 (DisplayGenAddr.c)
 */

__int64 __fastcall Display_PCT_PTC(unsigned __int8 *a1, const char *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
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
