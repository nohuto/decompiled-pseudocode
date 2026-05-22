/*
 * XREFs of _Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown_::_1_::catch$4 @ 0x18009876A
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180087A64 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn Microsoft::BamoImpl::BaseBamoConnectionImpl::DisconnectProxyAtShutdown_::_1_::catch_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 40),
    (void *)0x7F9,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
    a4);
}
