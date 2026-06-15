/*
 * XREFs of _CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters_::_1_::dtor$2 @ 0x1801142A3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CBtAudioResourceManager::CreateHfpRenderSaDeviceWithDefaultParameters_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 96);
}
