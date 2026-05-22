/*
 * XREFs of _HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch$51 @ 0x180100072
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800E9DD4 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall HidLampArrayDevice::ExtractReportDescriptorsFromPreparsedData_::_1_::catch_51(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 272) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 264),
                            (void *)0x2D0,
                            (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
                            a4);
  return 0LL;
}
