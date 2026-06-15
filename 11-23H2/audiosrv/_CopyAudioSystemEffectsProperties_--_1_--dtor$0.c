/*
 * XREFs of _CopyAudioSystemEffectsProperties_::_1_::dtor$0 @ 0x180168D77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyAudioSystemEffectsProperties_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
