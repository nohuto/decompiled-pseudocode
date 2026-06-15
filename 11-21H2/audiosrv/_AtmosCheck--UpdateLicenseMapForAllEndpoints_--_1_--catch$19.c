/*
 * XREFs of _AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::catch$19 @ 0x180157283
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800C76BC (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall AtmosCheck::UpdateLicenseMapForAllEndpoints_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 48) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 184),
                           (void *)0x3E7,
                           (int)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
                           a4);
  return 0LL;
}
