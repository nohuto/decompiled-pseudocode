/*
 * XREFs of _Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer_::_1_::catch$15 @ 0x1800B6061
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800B11AC (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall __noreturn Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer_::_1_::catch_15(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0xFD,
    (int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoBufferingMessageCallHost.inl",
    a4);
}
