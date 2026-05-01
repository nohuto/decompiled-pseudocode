/*
 * XREFs of _MiniSearchExperienceManager::LauncherDismissRequested$_ResumeCoro$1_::_1_::dtor$1 @ 0x1801A7925
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x18034164C (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall MiniSearchExperienceManager::LauncherDismissRequested__ResumeCoro_1_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 48) = *(_QWORD *)(a2 + 128) + 24LL;
  return winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(*(_QWORD *)(a2 + 48));
}
