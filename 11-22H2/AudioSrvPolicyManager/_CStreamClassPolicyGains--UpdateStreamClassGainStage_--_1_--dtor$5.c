/*
 * XREFs of _CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor$5 @ 0x180049380
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStreamClassPolicyGains::UpdateStreamClassGainStage_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>((__int64 *)(a2 + 208));
}
