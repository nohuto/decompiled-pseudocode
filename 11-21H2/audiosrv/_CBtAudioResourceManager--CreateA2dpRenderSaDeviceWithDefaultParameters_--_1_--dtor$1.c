/*
 * XREFs of _CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters_::_1_::dtor$1 @ 0x180113CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CBtAudioResourceManager::CreateA2dpRenderSaDeviceWithDefaultParameters_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 88);
}
