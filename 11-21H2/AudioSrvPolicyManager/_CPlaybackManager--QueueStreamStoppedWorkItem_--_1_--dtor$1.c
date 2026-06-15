/*
 * XREFs of _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$1 @ 0x180045C4D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 176));
}
