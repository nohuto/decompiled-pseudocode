/*
 * XREFs of WPP_IFR_SF_qqcqLd @ 0x1C0076FB4
 * Callers:
 *     ?Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z @ 0x1C00079C0 (-Dispatch@FxPkgPnp@@MEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqcqLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *_a6,
        char globals_0,
        const void *level,
        unsigned int flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      0x13u,
      &_a5,
      8LL,
      &_a6,
      8LL,
      &globals_0,
      1LL,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    4u,
    0xCu,
    (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    0x13u,
    &_a5,
    8LL,
    &_a6,
    8LL,
    &globals_0,
    1LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    4LL,
    0LL);
}
