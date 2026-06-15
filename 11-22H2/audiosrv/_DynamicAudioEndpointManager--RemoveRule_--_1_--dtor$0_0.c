/*
 * XREFs of _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$0_0 @ 0x1801402C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DynamicAudioEndpointManager::RemoveRule_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
