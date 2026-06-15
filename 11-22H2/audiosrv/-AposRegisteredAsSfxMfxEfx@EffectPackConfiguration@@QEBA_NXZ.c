/*
 * XREFs of ?AposRegisteredAsSfxMfxEfx@EffectPackConfiguration@@QEBA_NXZ @ 0x18004864C
 * Callers:
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointResourceManagerProvider@@@Z @ 0x18002A104 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGPEBU_tlgProvider_t@@PEAUIEndpointReso.c)
 *     ?DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ @ 0x18002FFF0 (-DeriveEffectiveConnectorAndEffectPackCapabilities@EffectPack@@QEAAJXZ.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180154620 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 * Callees:
 *     <none>
 */

char __fastcall EffectPackConfiguration::AposRegisteredAsSfxMfxEfx(EffectPackConfiguration *this)
{
  char result; // al

  result = 0;
  if ( *((_DWORD *)this + 328)
    || *((_DWORD *)this + 336)
    || *((_DWORD *)this + 344)
    || *((_DWORD *)this + 352)
    || *((_DWORD *)this + 360) )
  {
    return 1;
  }
  return result;
}
