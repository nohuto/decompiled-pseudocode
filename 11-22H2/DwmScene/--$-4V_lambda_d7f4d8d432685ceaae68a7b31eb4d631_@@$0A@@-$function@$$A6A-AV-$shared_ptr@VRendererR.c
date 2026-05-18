/*
 * XREFs of ??$?4V_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@$0A@@?$function@$$A6A?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@XZ@std@@QEAAAEAV01@$$QEAV_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@@Z @ 0x1800C2C2C
 * Callers:
 *     ?RegisterResources@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ @ 0x1800C6B70 (-RegisterResources@RenderDeviceD3D11@D3D11@Engine@Spectre@@MEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18002769C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??$_Test_callable@V_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@@std@@YA_NAEBV_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@@Z @ 0x1800C39D0 (--$_Test_callable@V_lambda_d7f4d8d432685ceaae68a7b31eb4d631_@@@std@@YA_NAEBV_lambda_d7f4d8d43268.c)
 */

__int64 __fastcall std::function<std::shared_ptr<Spectre::Engine::RendererResource> (void)>::operator=<_lambda_d7f4d8d432685ceaae68a7b31eb4d631_,0>(
        __int64 a1)
{
  char v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD v7[7]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD *v8; // [rsp+58h] [rbp-1h]
  _BYTE v9[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v10; // [rsp+98h] [rbp+3Fh]

  v8 = 0LL;
  v2 = std::_Test_callable<_lambda_d7f4d8d432685ceaae68a7b31eb4d631_>();
  if ( v2 )
  {
    v7[0] = &std::_Func_impl_no_alloc<_lambda_d7f4d8d432685ceaae68a7b31eb4d631_,std::shared_ptr<Spectre::Engine::RendererResource>,>::`vftable';
    v8 = v7;
  }
  v4 = (_QWORD *)((unsigned __int64)v7 & -(__int64)(v2 != 0));
  if ( v4 == v7 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v10 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v9, (__int64)v7);
    std::_Func_class<void,>::_Reset_move((__int64)v7, a1);
    std::_Func_class<void,>::_Reset_move(a1, (__int64)v9);
    std::_Func_class<void,>::_Tidy((__int64)v9, v5);
  }
  else
  {
    v8 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v4;
  }
  std::_Func_class<void,>::_Tidy((__int64)v7, v3);
  return a1;
}
