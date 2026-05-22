/*
 * XREFs of _HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch$29 @ 0x1800668F2
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E9DD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HidLampMultiUpdateReportParser::TryCreateAndInitialize_::_1_::catch_29(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 88) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x6D,
                           (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hi"
                                         "dlampmultiupdatereportparser.cpp",
                           a4);
  return 0LL;
}
