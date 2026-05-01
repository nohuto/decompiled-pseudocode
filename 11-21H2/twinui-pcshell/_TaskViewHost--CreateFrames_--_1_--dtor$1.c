/*
 * XREFs of _TaskViewHost::CreateFrames_::_1_::dtor$1 @ 0x180213C62
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TaskViewHost::CreateFrames_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(a2 + 128);
}
