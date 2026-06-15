/*
 * XREFs of _GetCompositeModuleInfo_::_1_::catch$55 @ 0x1400655BD
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x140065DA4 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall GetCompositeModuleInfo_::_1_::catch_55(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 248),
    (void *)0x12B,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodgtelemetry.cpp",
    a4);
  return 0LL;
}
