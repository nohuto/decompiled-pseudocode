/*
 * XREFs of _CortanaAvailability::IsCortanaPackageInstalled_::_1_::catch$8 @ 0x180220B7E
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18012A46C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CortanaAvailability::IsCortanaPackageInstalled_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 56) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 120),
                           (void *)0x67,
                           (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanaavailability.cpp",
                           a4);
  return 0LL;
}
