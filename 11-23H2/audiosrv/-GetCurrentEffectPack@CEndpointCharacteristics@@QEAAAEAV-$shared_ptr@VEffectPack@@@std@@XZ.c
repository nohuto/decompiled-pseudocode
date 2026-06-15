/*
 * XREFs of ?GetCurrentEffectPack@CEndpointCharacteristics@@QEAAAEAV?$shared_ptr@VEffectPack@@@std@@XZ @ 0x18014C3FC
 * Callers:
 *     ?RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z @ 0x1800FBFD8 (-RefreshStreamsOnDevice@CBtLeAudioResourceManager@@IEAAJW4ReconnectSaDeviceOptions@1@@Z.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x1801159D4 (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::GetCurrentEffectPack(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi

  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 288);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 288));
  if ( v1 )
    LeaveCriticalSection(v1);
  return a1 + 352;
}
