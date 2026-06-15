/*
 * XREFs of _CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters_::_1_::dtor$0 @ 0x180113CD4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  return std::unique_ptr<SaDeviceParams>::~unique_ptr<SaDeviceParams>((SaDeviceParams **)(a2 + 80), a2);
}
