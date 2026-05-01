/*
 * XREFs of _AppViewSwitchItemZOrderSort::SortItems_::_1_::catch$52 @ 0x18021AE11
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18022A4B2 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AppViewSwitchItemZOrderSort::SortItems_::_1_::catch_52(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x33,
    (unsigned int)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitemzordersort.cpp",
    a4);
  return 0LL;
}
