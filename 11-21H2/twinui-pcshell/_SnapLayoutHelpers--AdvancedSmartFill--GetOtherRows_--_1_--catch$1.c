/*
 * XREFs of _SnapLayoutHelpers::AdvancedSmartFill::GetOtherRows_::_1_::catch$1 @ 0x1805A4D07
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::GetOtherRows_::_1_::catch_1(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 72),
                           (void *)0xBA8,
                           (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
                           a4);
  return 0LL;
}
