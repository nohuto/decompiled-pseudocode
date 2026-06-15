/*
 * XREFs of _CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor$8 @ 0x1800FC9D4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBtLeAudioResourceManager::RefreshStreamsOnDevice_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)(a2 + 280));
}
