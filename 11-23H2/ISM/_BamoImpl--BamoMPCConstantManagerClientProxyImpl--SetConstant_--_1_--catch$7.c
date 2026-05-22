/*
 * XREFs of _BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstant_::_1_::catch$7 @ 0x18017D2BB
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC5C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::BamoMPCConstantManagerClientProxyImpl::SetConstant_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 168),
    (void *)0x25A3,
    (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerBam"
         "o.MPCManagerBamo.bamo.h",
    a4);
}
