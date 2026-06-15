/*
 * XREFs of _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$2 @ 0x180046518
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>(
           (__int64 *)(a2 + 320),
           a2);
}
