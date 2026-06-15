/*
 * XREFs of _CAudioSession::AddDuckingManagerGainStage_::_1_::dtor$1 @ 0x1800DF076
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::AddDuckingManagerGainStage_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>::~com_ptr_t<CPBMStreamClassVolumeGainStage,wil::err_returncode_policy>((_QWORD *)(a2 + 72));
}
