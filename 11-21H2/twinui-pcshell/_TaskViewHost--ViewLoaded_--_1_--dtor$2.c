/*
 * XREFs of _TaskViewHost::ViewLoaded_::_1_::dtor$2 @ 0x180213BFC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall TaskViewHost::ViewLoaded_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)(a2 + 64));
}
