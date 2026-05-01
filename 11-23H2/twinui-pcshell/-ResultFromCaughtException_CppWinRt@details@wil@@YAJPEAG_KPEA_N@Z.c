/*
 * XREFs of ?ResultFromCaughtException_CppWinRt@details@wil@@YAJPEAG_KPEA_N@Z @ 0x1801BD660
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_CppWinRt(
        wil::details *this,
        unsigned __int16 *a2,
        __int64 a3,
        bool *a4)
{
  if ( !wil::g_pfnResultFromCaughtException )
    throw;
  throw;
}
