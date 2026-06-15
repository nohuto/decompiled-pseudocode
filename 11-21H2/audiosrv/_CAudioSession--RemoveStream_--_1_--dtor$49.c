/*
 * XREFs of _CAudioSession::RemoveStream_::_1_::dtor$49 @ 0x18006D610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSession::RemoveStream_::_1_::dtor_49(__int64 a1, __int64 a2)
{
  return std::unique_ptr<_WorkTask>::~unique_ptr<_WorkTask>(a2 + 48);
}
