/*
 * XREFs of _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x180223896
 * Callers:
 *     <none>
 * Callees:
 *     ?HrToNtStatus@details@wil@@YAJJ@Z @ 0x18012A330 (-HrToNtStatus@details@wil@@YAJJ@Z.c)
 *     ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1802D7FAC (-RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z.c)
 */

__int64 __fastcall wil::details::ResultFromCaughtExceptionInternal_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  int v4; // eax

  v4 = wil::details::RecognizeCaughtExceptionFromCallback(
         *(wil::details **)(a2 + 152),
         *(unsigned __int16 **)(a2 + 160),
         a3);
  if ( v4 >= 0 )
    return 1LL;
  *(_DWORD *)(a2 + 72) = v4;
  *(_DWORD *)(a2 + 76) = wil::details::HrToNtStatus((wil::details *)(unsigned int)v4);
  *(_BYTE *)(a2 + 80) = 0;
  return 0LL;
}
