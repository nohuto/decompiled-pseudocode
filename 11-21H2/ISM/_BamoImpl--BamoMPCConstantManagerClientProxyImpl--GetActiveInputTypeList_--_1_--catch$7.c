/*
 * XREFs of _BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetActiveInputTypeList_::_1_::catch$7 @ 0x18015A004
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180087A64 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetActiveInputTypeList_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x261B,
    (int)"onecoreuap\\Windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerBam"
         "o.MPCManagerBamo.bamo.h",
    a4);
}
