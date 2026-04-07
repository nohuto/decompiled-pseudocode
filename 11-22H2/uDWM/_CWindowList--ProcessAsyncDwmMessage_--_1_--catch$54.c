/*
 * XREFs of _CWindowList::ProcessAsyncDwmMessage_::_1_::catch$54 @ 0x180067BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E7654 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::ProcessAsyncDwmMessage_::_1_::catch_54(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 680),
    (void *)0x21B,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    a4);
  return 0LL;
}
