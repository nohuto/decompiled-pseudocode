/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem_::_1_::catch$5 @ 0x18009ED41
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC5C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn Microsoft::BamoImpl::BaseBamoConnectionImpl::FreePrincipalItem_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 56),
    (void *)0x4B9,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    a4);
}
