/*
 * XREFs of WPP_IFR_SF_ddLLdiDD @ 0x1C007FB04
 * Callers:
 *     ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C007E760 (-AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_ddLLdiDD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        int _a5,
        int _a6,
        unsigned int _a7,
        unsigned int _a8,
        int globals_0,
        __int64 level,
        unsigned int flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_InterruptObject_cpp_Traceguids,
      0x15u,
      &_a5,
      4LL,
      &_a6,
      4LL,
      &_a7,
      4LL,
      &_a8,
      4LL,
      &globals_0,
      4LL,
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
    (_GUID *)&WPP_InterruptObject_cpp_Traceguids,
    0x15u,
    &_a5,
    4LL,
    &_a6,
    4LL,
    &_a7,
    4LL,
    &_a8,
    4LL,
    &globals_0,
    4LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    4LL,
    0LL);
}
