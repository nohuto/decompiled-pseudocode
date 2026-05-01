/*
 * XREFs of _SnapFlyoutHost::XamlExplorerHostThreadProc_::_1_::catch$64 @ 0x18067D772
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapFlyoutHost::XamlExplorerHostThreadProc_::_1_::catch_64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 232),
    (void *)0x251,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyouthost.cpp",
    a4);
  return 0LL;
}
