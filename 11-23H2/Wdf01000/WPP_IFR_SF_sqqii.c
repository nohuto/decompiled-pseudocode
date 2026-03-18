/*
 * XREFs of WPP_IFR_SF_sqqii @ 0x1C001E2C4
 * Callers:
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001CDA0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sqqii(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const char *_a5,
        const void *globals_0,
        const void *level,
        __int64 flags,
        __int64 id)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // rax
  __int64 v16; // rbx

  v10 = _a5;
  v11 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
  {
    if ( _a5 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( _a5[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = _a5;
    if ( !_a5 )
      v15 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionPacket_cpp_Traceguids,
      0x1Cu,
      v15,
      v14,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  }
  if ( _a5 )
  {
    do
      ++v11;
    while ( _a5[v11] );
    v16 = v11 + 1;
  }
  else
  {
    v16 = 5LL;
  }
  if ( !_a5 )
    v10 = "NULL";
  FxIFR(
    globals,
    5u,
    0xFu,
    WPP_FxDmaTransactionPacket_cpp_Traceguids,
    0x1Cu,
    v10,
    v16,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
