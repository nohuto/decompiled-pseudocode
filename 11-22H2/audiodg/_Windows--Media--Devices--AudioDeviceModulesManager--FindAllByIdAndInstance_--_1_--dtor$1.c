/*
 * XREFs of _Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance_::_1_::dtor$1 @ 0x140083666
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModulesManager::FindAllByIdAndInstance_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  return wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)(a2 + 40));
}
