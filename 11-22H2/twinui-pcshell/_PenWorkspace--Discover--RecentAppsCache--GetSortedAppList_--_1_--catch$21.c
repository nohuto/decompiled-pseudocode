/*
 * XREFs of _PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::catch$21 @ 0x1802C5B5A
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::GetSortedAppList_::_1_::catch_21(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0xEA,
    (unsigned int)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    a4);
  return 0LL;
}
