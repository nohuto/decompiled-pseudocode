/*
 * XREFs of _CWindowList::Initialize_::_1_::catch$25 @ 0x180067F41
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800EE204 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CWindowList::Initialize_::_1_::catch_25(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 40),
                           (void *)0x6C1,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
                           a4);
  return 0LL;
}
