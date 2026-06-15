/*
 * XREFs of _CPlaybackManager::QueueStreamStartedWorkItem_::_1_::dtor$1 @ 0x18004AA9F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::QueueStreamStartedWorkItem_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>::~com_ptr_t<IAudioSessionPolicyControl,wil::err_returncode_policy>((__int64 *)(a2 + 168));
}
