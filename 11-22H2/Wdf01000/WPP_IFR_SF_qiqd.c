/*
 * XREFs of WPP_IFR_SF_qiqd @ 0x1C0019368
 * Callers:
 *     imp_WdfDmaTransactionInitialize @ 0x1C000C080 (imp_WdfDmaTransactionInitialize.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qiqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        __int64 flags,
        const void *id)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      0x17u,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      _a4,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionAPI_cpp_Traceguids,
    0x17u,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    8LL,
    _a4,
    4LL,
    0LL);
}
