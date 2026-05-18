/*
 * XREFs of std::function_void___cdecl(void)_::operator___lambda_ea41cd23b26e0611689875f9c09e5ed7__0_ @ 0x180091554
 * Callers:
 *     ?StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ @ 0x180093290 (-StartReturnToDefaultElevation@ViewerCamera@Engine@Spectre@@UEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18002769C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     std::_Test_callable__lambda_ea41cd23b26e0611689875f9c09e5ed7___ @ 0x180091998 (std--_Test_callable__lambda_ea41cd23b26e0611689875f9c09e5ed7___.c)
 */

__int64 __fastcall std::function_void___cdecl_void__::operator___lambda_ea41cd23b26e0611689875f9c09e5ed7__0_(
        __int64 a1,
        _QWORD *a2)
{
  char v3; // al
  void **v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD v9[7]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD *v10; // [rsp+58h] [rbp-1h]
  _BYTE v11[56]; // [rsp+60h] [rbp+7h] BYREF
  __int64 v12; // [rsp+98h] [rbp+3Fh]

  v10 = 0LL;
  v3 = std::_Test_callable__lambda_ea41cd23b26e0611689875f9c09e5ed7___(*a2);
  if ( v3 )
  {
    v9[1] = v5;
    v4 = &std::_Func_impl_no_alloc<_lambda_ea41cd23b26e0611689875f9c09e5ed7_,void,>::`vftable';
    v9[0] = &std::_Func_impl_no_alloc<_lambda_ea41cd23b26e0611689875f9c09e5ed7_,void,>::`vftable';
    v10 = v9;
  }
  v6 = (_QWORD *)((unsigned __int64)v9 & -(__int64)(v3 != 0));
  if ( v6 == v9 || *(_QWORD *)(a1 + 56) == a1 )
  {
    v12 = 0LL;
    std::_Func_class<void,>::_Reset_move((__int64)v11, (__int64)v9);
    std::_Func_class<void,>::_Reset_move((__int64)v9, a1);
    std::_Func_class<void,>::_Reset_move(a1, (__int64)v11);
    std::_Func_class<void,>::_Tidy((__int64)v11, v7);
  }
  else
  {
    v10 = *(_QWORD **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = v6;
  }
  std::_Func_class<void,>::_Tidy((__int64)v9, (__int64)v4);
  return a1;
}
