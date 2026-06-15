/*
 * XREFs of ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180147970
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145618 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800025BC (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800101C0 (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetAPOSupportedProcessingModes(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  __int64 v6; // rbp
  BOOL v7; // eax
  int v8; // r8d

  v6 = gsl::span<SystemEffectDescriptor,-1>::operator[]((unsigned __int64 *)this + 226, a2);
  v7 = CEndpointCharacteristics::AreEnhancementsEnabled(this);
  v8 = 0;
  if ( v7 || a2 == eKeywordDetectorConnector )
    v8 = 1;
  return SystemEffectDescriptor::GetSupportedProcessingModes(v6, (__int64 *)a3, v8);
}
