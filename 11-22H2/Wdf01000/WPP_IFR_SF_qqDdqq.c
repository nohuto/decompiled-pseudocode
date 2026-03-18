/*
 * XREFs of WPP_IFR_SF_qqDdqq @ 0x1C0050B54
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0005C48 (FxIoTargetFormatIoctl.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqDdqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *_a6,
        unsigned int globals_0,
        int level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      0x2Bu,
      &_a5,
      8LL,
      &_a6,
      8LL,
      &globals_0,
      4LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xEu,
    WPP_FxIoTargetAPI_cpp_Traceguids,
    0x2Bu,
    &_a5,
    8LL,
    &_a6,
    8LL,
    &globals_0,
    4LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
