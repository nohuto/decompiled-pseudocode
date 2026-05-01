/*
 * XREFs of ?ResultFromCaughtException_WinRt@details@wil@@YAJPEA_W_KPEA_N@Z @ 0x18018AE30
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn wil::details::ResultFromCaughtException_WinRt(
        wil::details *this,
        wchar_t *a2,
        __int64 a3,
        bool *a4)
{
  if ( !wil::g_pfnResultFromCaughtException )
    throw;
  throw;
}
