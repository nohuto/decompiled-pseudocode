/*
 * XREFs of ??4?$function@$$A6AXXZ@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800519F0
 * Callers:
 *     ?DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z @ 0x1800524A4 (-DetectComboEndpoint@SpatialPolicy@@SAJPEBU_tlgProvider_t@@PEAUIMMDevice@@@Z.c)
 * Callees:
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x180051A98 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18005BA4C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18005BAA8 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 */

__int64 __fastcall std::function<void (void)>::operator=(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v5; // rax
  _BYTE v6[56]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v7; // [rsp+58h] [rbp-60h]
  _BYTE v8[64]; // [rsp+60h] [rbp-58h] BYREF

  v2 = std::function<void (void)>::function<void (void)>(v8);
  v3 = *(_QWORD *)(v2 + 56);
  if ( v3 == v2 || (v5 = *(_QWORD *)(a1 + 56), v5 == a1) )
  {
    v7 = 0LL;
    std::_Func_class<void,>::_Reset_move(v6, v2);
    std::_Func_class<void,>::_Reset_move(v2, a1);
    std::_Func_class<void,>::_Reset_move(a1, v6);
    std::_Func_class<void,>::_Tidy(v6);
  }
  else
  {
    *(_QWORD *)(v2 + 56) = v5;
    *(_QWORD *)(a1 + 56) = v3;
  }
  std::_Func_class<void,>::_Tidy(v8);
  return a1;
}
