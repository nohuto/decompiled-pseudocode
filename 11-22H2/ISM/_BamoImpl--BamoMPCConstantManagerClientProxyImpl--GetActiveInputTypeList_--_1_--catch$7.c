/*
 * XREFs of _BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetActiveInputTypeList_::_1_::catch$7 @ 0x1801870A7
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B11AC (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetActiveInputTypeList_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x269C,
    (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerBam"
         "o.MPCManagerBamo.bamo.h",
    a4);
}
