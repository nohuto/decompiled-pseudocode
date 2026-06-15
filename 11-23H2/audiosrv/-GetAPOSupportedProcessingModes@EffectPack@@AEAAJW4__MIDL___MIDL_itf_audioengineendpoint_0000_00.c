/*
 * XREFs of ?GetAPOSupportedProcessingModes@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x18000DDE8
 * Callers:
 *     ?CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4FXEnablementConsideration@@@Z @ 0x18000DD28 (-CanBuildProcessingModesOnRawConnector@EffectPack@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_.c)
 *     ?DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180056210 (-DeriveAndCacheMixFormatsForConnector@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 * Callees:
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18002D140 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??A?$span@VSystemEffectDescriptor@@$0?0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z @ 0x1800312FC (--A-$span@VSystemEffectDescriptor@@$0-0@gsl@@QEBAAEAVSystemEffectDescriptor@@_K@Z.c)
 */

__int64 __fastcall EffectPack::GetAPOSupportedProcessingModes(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // r8

  v8 = gsl::span<SystemEffectDescriptor,-1>::operator[](a1 + 1168, a2);
  if ( a3 == 1
    || (v9 = CEndpointCharacteristics::AreEnhancementsEnabled(*(CEndpointCharacteristics **)(a1 + 1288)), v10 = 0LL, v9)
    || a2 == 3 )
  {
    v10 = 1LL;
  }
  return SystemEffectDescriptor::GetSupportedProcessingModes(v8, a4, v10);
}
