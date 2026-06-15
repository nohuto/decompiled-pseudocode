/*
 * XREFs of _CVADServer::CreateBridgeSinkAudioClientForMicInjection_::_1_::dtor$0 @ 0x180073D17
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVADServer::CreateBridgeSinkAudioClientForMicInjection_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>::~com_ptr_t<IAudioClientInternal,wil::err_returncode_policy>((__int64 *)(a2 + 48));
}
