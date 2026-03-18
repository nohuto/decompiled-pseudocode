/*
 * XREFs of WPP_IFR_SF_dddDqqd @ 0x1C0076D0C
 * Callers:
 *     ?SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z @ 0x1C0076064 (-SetUsageNotificationFlags@FxPkgPnp@@IEAAKW4_DEVICE_USAGE_NOTIFICATION_TYPE@@E@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dddDqqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        int _a5,
        int _a6,
        int _a7,
        unsigned int globals_0,
        const void *level,
        const void *flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      0x46u,
      &_a5,
      4LL,
      &_a6,
      4LL,
      &_a7,
      4LL,
      &globals_0,
      4LL,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xCu,
    (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    0x46u,
    &_a5,
    4LL,
    &_a6,
    4LL,
    &_a7,
    4LL,
    &globals_0,
    4LL,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}
