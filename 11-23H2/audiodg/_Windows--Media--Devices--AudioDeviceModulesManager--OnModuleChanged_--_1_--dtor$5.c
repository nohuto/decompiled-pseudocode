/*
 * XREFs of _Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor$5 @ 0x14008931B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::OnModuleChanged_::_1_::dtor_5(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 72));
}
