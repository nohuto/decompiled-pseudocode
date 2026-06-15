/*
 * XREFs of ?AposRegisteredAsLfxGfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004A09C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     ?FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180030CE0 (-FixupProcessingModeSupport@EffectPack@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0.c)
 * Callees:
 *     <none>
 */

char __fastcall EffectPackConfiguration::AposRegisteredAsLfxGfx(EffectPackConfiguration *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 424) || *((_DWORD *)this + 428) )
    return 1;
  return result;
}
