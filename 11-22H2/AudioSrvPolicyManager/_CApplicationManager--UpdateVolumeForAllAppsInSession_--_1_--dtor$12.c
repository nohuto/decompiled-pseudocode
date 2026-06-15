/*
 * XREFs of _CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor$12 @ 0x180049080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::UpdateVolumeForAllAppsInSession_::_1_::dtor_12(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 216));
}
