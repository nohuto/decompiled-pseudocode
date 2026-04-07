/*
 * XREFs of _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$5 @ 0x18009D5B2
 * Callers:
 *     <none>
 * Callees:
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x18009CB7C (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

_BOOL8 __fastcall wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch_5(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 144),
         *(unsigned __int16 **)(a2 + 152));
  *(_DWORD *)(a2 + 168) = v3;
  return v3 >= 0;
}
