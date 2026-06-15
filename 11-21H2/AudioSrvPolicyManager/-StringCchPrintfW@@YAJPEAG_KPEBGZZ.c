/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800073B4
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800051DC (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180007FD4 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z @ 0x180030428 (-TsSessionRefreshUserSid@@YAJPEAVTSSession@@@Z.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x180044654 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x18004474F (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x18004488C (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x18004490A (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     _vsnwprintf @ 0x1800034F4 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rsi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      v4 = -2147024774;
    }
    else if ( v6 != v5 )
    {
      return v4;
    }
    a1[v5] = 0;
    return v4;
  }
  v4 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v4;
}
