/*
 * XREFs of std::function_void___cdecl(std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int)_::operator___lambda_5efd0f16faa6f6439fdb99826dc3e8ab__0_ @ 0x1800D573C
 * Callers:
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18002769C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     std::_Test_callable__lambda_5efd0f16faa6f6439fdb99826dc3e8ab___ @ 0x1800D5814 (std--_Test_callable__lambda_5efd0f16faa6f6439fdb99826dc3e8ab___.c)
 */

__int64 __fastcall std::function_void___cdecl_std::shared_ptr_Spectre::Engine::Texture__enum_Spectre::Engine::Format_unsigned_int__::operator___lambda_5efd0f16faa6f6439fdb99826dc3e8ab__0_(
        __int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rdx
  void **v8; // [rsp+20h] [rbp-39h] BYREF
  __int128 v9; // [rsp+28h] [rbp-31h]
  __int128 v10; // [rsp+38h] [rbp-21h]
  __int64 v11; // [rsp+48h] [rbp-11h]
  void ***v12; // [rsp+58h] [rbp-1h]
  _BYTE v13[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v14; // [rsp+98h] [rbp+3Fh]

  v12 = 0LL;
  if ( (unsigned __int8)std::_Test_callable__lambda_5efd0f16faa6f6439fdb99826dc3e8ab___() )
  {
    v4 = *(_OWORD *)v2;
    v5 = *(_OWORD *)(v2 + 16);
    v8 = &std::_Func_impl_no_alloc<_lambda_5efd0f16faa6f6439fdb99826dc3e8ab_,void,std::shared_ptr<Spectre::Engine::Texture>,enum Spectre::Engine::Format,unsigned int>::`vftable';
    v9 = v4;
    v12 = &v8;
    v11 = *(_QWORD *)(v2 + 32);
    v10 = v5;
  }
  else if ( *(_QWORD *)(a1 + 56) != a1 )
  {
    v12 = *(void ****)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v3;
    goto LABEL_4;
  }
  v14 = v3;
  std::_Func_class<void,>::_Reset_move((__int64)v13, (__int64)&v8);
  std::_Func_class<void,>::_Reset_move((__int64)&v8, a1);
  std::_Func_class<void,>::_Reset_move(a1, (__int64)v13);
  std::_Func_class<void,>::_Tidy((__int64)v13, v6);
LABEL_4:
  std::_Func_class<void,>::_Tidy((__int64)&v8, v2);
  return a1;
}
