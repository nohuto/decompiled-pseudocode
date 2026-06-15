/*
 * XREFs of _CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor$2 @ 0x180045A0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPlaybackManager::QueueStreamStoppedWorkItem_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<CProcess,wil::err_returncode_policy>::~com_ptr_t<CProcess,wil::err_returncode_policy>((_QWORD *)(a2 + 184));
}
