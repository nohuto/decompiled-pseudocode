/*
 * XREFs of WPP_IFR_SF_qddq @ 0x1C00297F0
 * Callers:
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C0028EC0 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qddq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        int level,
        int flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxWmiInstance_cpp_Traceguids,
      0x15u,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      4LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_FxWmiInstance_cpp_Traceguids,
    0x15u,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    4LL,
    &id,
    8LL,
    0LL);
}
