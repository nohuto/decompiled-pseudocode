/*
 * XREFs of _BamoImpl::BamoDataProviderRegistrarProxyImpl::Unregister_::_1_::catch$7 @ 0x1801144C4
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC5C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn BamoImpl::BamoDataProviderRegistrarProxyImpl::Unregister_::_1_::catch_7(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 136),
    (void *)0x2FFC,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
    a4);
}
