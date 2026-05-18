/*
 * XREFs of ??$?4P6AMM@Z$0A@@?$function@$$A6AMM@Z@std@@QEAAAEAV01@$$QEAP6AMM@Z@Z @ 0x18009BCA8
 * Callers:
 *     ?CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV?$array@UVector4@Math@Utils@Spectre@@$0BA@@std@@0MM@Z @ 0x18009C688 (-CalculateBlurConstants@ImageProcessingEffectBlur@Engine@Spectre@@IEBAXAEAV-$array@UVector4@Math.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18002769C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??$_Test_callable@P6AMM@Z@std@@YA_NAEBQ6AMM@Z@Z @ 0x18009BD88 (--$_Test_callable@P6AMM@Z@std@@YA_NAEBQ6AMM@Z@Z.c)
 */

__int64 __fastcall std::function<float (float)>::operator=<float (*)(float),0>(__int64 a1, __int64 *a2)
{
  __int64 v2; // r8
  char v4; // al
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // [rsp+20h] [rbp-49h] BYREF
  _QWORD v11[7]; // [rsp+30h] [rbp-39h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp-1h]
  _BYTE v13[56]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+3Fh]

  v2 = *a2;
  v12 = 0LL;
  v10 = v2;
  v4 = std::_Test_callable<float (*)(float)>(&v10);
  if ( v4 )
  {
    v11[1] = v6;
    v11[0] = &std::_Func_impl_no_alloc<float (*)(float),float,float>::`vftable';
    v12 = v11;
  }
  v7 = (_QWORD *)((unsigned __int64)v11 & -(__int64)(v4 != 0));
  if ( v7 == v11 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v14 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v13, (__int64)v11);
    std::_Func_class<void,>::_Reset_move((__int64)v11, a1);
    std::_Func_class<void,>::_Reset_move(a1, (__int64)v13);
    std::_Func_class<void,>::_Tidy((__int64)v13, v8);
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v7;
  }
  std::_Func_class<void,>::_Tidy((__int64)v11, v5);
  return a1;
}
