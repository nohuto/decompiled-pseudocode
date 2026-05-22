/*
 * XREFs of _BamoImpl::BamoSystemCursorControllerProxyImpl::EnsureServiceAndRegisterClient_::_1_::catch$7 @ 0x1801097E8
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180087A64 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::BamoSystemCursorControllerProxyImpl::EnsureServiceAndRegisterClient_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0xE1E7,
    (int)"onecoreuap\\Windows\\moderncore\\inputv2\\Bamos\\codegen\\system\\objfre\\amd64\\ISMBamos.ISMBamos.bamo.h",
    a4);
}
