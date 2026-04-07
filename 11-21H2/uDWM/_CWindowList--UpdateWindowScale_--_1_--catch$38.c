/*
 * XREFs of _CWindowList::UpdateWindowScale_::_1_::catch$38 @ 0x180065340
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800F1350 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::UpdateWindowScale_::_1_::catch_38(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 144) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 376),
                            (void *)0xFB9,
                            (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                            a4);
  return 0LL;
}
