/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x180095114
 * Callers:
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x1800956B1 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$5 @ 0x1800959C2 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$5.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 *v4; // rbp
  int v5; // eax
  int v6; // ecx
  __int64 *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  stdext::exception *v9; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v10; // [rsp+50h] [rbp+18h]

  result = wil::g_pfnResultFromCaughtException();
  if ( (int)result >= 0 )
    goto LABEL_14;
  while ( this )
  {
LABEL_14:
    try
    {
      throw;
    }
    catch ( stdext::exception *v9 )
    {
      v7 = &v8;
      v4 = v7;
      wil::details::MaybeGetExceptionString(
        (wil::details *)v7[4],
        (const struct stdext::exception *)v7[8],
        (unsigned __int16 *)v7[9]);
      v5 = *((_DWORD *)v4 + 20);
      v6 = -2147024322;
      if ( v5 >= 0 )
        v5 = v6;
      *((_DWORD *)v4 + 20) = v5;
      return v10;
    }
    catch ( ... )
    {
      return v10;
    }
  }
  return result;
}
