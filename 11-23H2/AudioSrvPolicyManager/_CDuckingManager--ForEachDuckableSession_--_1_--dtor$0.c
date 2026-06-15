/*
 * XREFs of _CDuckingManager::ForEachDuckableSession_::_1_::dtor$0 @ 0x180048BF3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDuckingManager::ForEachDuckableSession_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::forward_list<IAudioSessionInfo *>::~forward_list<IAudioSessionInfo *>((_QWORD **)(a2 + 64));
}
