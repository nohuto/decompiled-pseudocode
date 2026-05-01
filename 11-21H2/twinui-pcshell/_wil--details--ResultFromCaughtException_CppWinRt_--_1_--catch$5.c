/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$5 @ 0x180223ED8
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1802D7FAC (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

_BOOL8 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_5(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v4; // eax

  v4 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 144),
         *(unsigned __int16 **)(a2 + 152),
         a3);
  *(_DWORD *)(a2 + 168) = v4;
  return v4 >= 0;
}
