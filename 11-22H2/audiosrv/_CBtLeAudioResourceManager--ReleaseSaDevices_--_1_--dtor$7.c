/*
 * XREFs of _CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor$7 @ 0x1800FD022
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

SaDeviceParams *__fastcall CBtLeAudioResourceManager::ReleaseSaDevices_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<std::unique_ptr<SaDeviceParams>>::~out_param_t<std::unique_ptr<SaDeviceParams>>(a2 + 104);
}
