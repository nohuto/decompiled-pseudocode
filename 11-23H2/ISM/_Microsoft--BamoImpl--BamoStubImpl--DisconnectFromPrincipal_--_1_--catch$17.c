/*
 * XREFs of _Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal_::_1_::catch$17 @ 0x18006BB02
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18009EC5C (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn Microsoft::BamoImpl::BamoStubImpl::DisconnectFromPrincipal_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x15C,
    (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoStub.inl",
    a4);
}
