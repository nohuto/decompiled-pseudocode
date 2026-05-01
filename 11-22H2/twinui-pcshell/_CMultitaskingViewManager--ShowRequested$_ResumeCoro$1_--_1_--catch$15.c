/*
 * XREFs of _CMultitaskingViewManager::ShowRequested$_ResumeCoro$1_::_1_::catch$15 @ 0x18020F8FE
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802CED10 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CMultitaskingViewManager::ShowRequested__ResumeCoro_1_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 216),
    (void *)0x428,
    (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewmanager.cpp",
    a4);
  return 0LL;
}
