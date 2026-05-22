/*
 * XREFs of _BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetConstantsForInputType_::_1_::catch$7 @ 0x1801797E1
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC5C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::BamoMPCConstantManagerClientProxyImpl::GetConstantsForInputType_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x26DA,
    (int)"onecoreuap\\windows\\moderncore\\Inputv2\\InputHost\\Components\\MPCManager\\bamo\\objfre\\amd64\\MPCManagerBam"
         "o.MPCManagerBamo.bamo.h",
    a4);
}
