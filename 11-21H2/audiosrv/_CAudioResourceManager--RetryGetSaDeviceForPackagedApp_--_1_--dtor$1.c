/*
 * XREFs of _CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor$1 @ 0x180101B65
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<CAudioStream,wil::err_returncode_policy>>(a2 + 80);
}
