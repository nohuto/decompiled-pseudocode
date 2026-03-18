/*
 * XREFs of WPP_IFR_SF_LqqLd @ 0x1C0018D40
 * Callers:
 *     imp_WdfDmaTransactionInitializeUsingRequest @ 0x1C0019C10 (imp_WdfDmaTransactionInitializeUsingRequest.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_LqqLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        unsigned int _a4,
        const void *globals_0,
        const void *level,
        unsigned int flags)
{
  int _a5[4]; // [rsp+80h] [rbp-18h] BYREF

  _a5[0] = -1073741808;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      _a2,
      &_a4,
      4LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      _a5,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionAPI_cpp_Traceguids,
    _a2,
    &_a4,
    4LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    _a5,
    4LL,
    0LL);
}
