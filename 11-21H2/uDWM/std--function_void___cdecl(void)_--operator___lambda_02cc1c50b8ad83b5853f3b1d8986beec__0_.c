/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_ @ 0x180099568
 * Callers:
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18009BC08 (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18009BCFC (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::operator___lambda_02cc1c50b8ad83b5853f3b1d8986beec__0_(
        __int64 a1)
{
  _QWORD v3[8]; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v4[56]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v5; // [rsp+98h] [rbp-20h]

  v5 = 0LL;
  v3[0] = off_180110180;
  v3[7] = v3;
  std::_Func_class<void,>::_Reset_move(v4, v3);
  std::_Func_class<void,>::_Reset_move(v3, a1);
  std::_Func_class<void,>::_Reset_move(a1, v4);
  std::_Func_class<void,>::_Tidy(v4);
  std::_Func_class<void,>::_Tidy(v3);
  return a1;
}
