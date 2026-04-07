/*
 * XREFs of _CWindowList::_CWindowList_::_1_::catch$36 @ 0x180101B09
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180100160 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::_CWindowList_::_1_::catch_36(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0x5D,
    (int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    a4);
  return 0LL;
}
