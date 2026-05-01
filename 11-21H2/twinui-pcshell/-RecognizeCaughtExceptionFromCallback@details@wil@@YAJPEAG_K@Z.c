/*
 * XREFs of ?RecognizeCaughtExceptionFromCallback@details@wil@@YAJPEAG_K@Z @ 0x1802D7FAC
 * Callers:
 *     _wil::details::ResultFromCaughtException_WinRt_::_1_::catch$3 @ 0x1802223EF (_wil--details--ResultFromCaughtException_WinRt_--_1_--catch$3.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$2 @ 0x180223896 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$2.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$5 @ 0x180223ED8 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$5.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::RecognizeCaughtExceptionFromCallback(wil::details *this, unsigned __int16 *a2)
{
  __int64 result; // rax
  __int64 *v4; // rbp
  int v5; // eax
  int v6; // ecx
  __int64 *v7; // rdx
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  std::exception *v9; // [rsp+20h] [rbp-18h] BYREF
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
    catch ( std::exception *v9 )
    {
      v7 = &v8;
      v4 = v7;
      wil::details::MaybeGetExceptionString(
        (wil::details *)v7[4],
        (const struct std::exception *)v7[8],
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
