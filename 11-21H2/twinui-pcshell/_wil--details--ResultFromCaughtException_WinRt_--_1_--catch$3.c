/*
 * XREFs of _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$3 @ 0x1802223EF
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1802D7FAC (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

_BOOL8 __fastcall wil::details::ResultFromCaughtException_WinRt_::_1_::catch_3(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v4; // eax

  v4 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 112),
         *(unsigned __int16 **)(a2 + 120),
         a3);
  *(_DWORD *)(a2 + 136) = v4;
  return v4 >= 0;
}
