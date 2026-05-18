/*
 * XREFs of ?SetCancelledCallback@SimpleCancellationToken@Internal@Utils@Spectre@@UEAAHV?$function@$$A6AXXZ@std@@@Z @ 0x1800E0380
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180011C7C (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x18001DD9C (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x180025D24 (--R-$_Func_class@X$$V@std@@QEBAXXZ.c)
 *     ?_Reset_move@?$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z @ 0x18002769C (-_Reset_move@-$_Func_class@X$$V@std@@IEAAX$$QEAV12@@Z.c)
 *     ??$_Try_emplace@AEBH$$V@?$map@HV?$function@$$A6AXXZ@std@@U?$less@H@2@V?$allocator@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@@2@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBHV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@_N@1@AEBH@Z @ 0x1800DFC90 (--$_Try_emplace@AEBH$$V@-$map@HV-$function@$$A6AXXZ@std@@U-$less@H@2@V-$allocator@U-$pair@$$CBHV.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Spectre::Utils::Internal::SimpleCancellationToken::SetCancelledCallback(__int64 a1, __int64 a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  char v5; // bp
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  _BYTE v14[16]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-28h]

  v15 = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 8);
  v13 = a1 + 8;
  std::_Mutex_base::lock((std::_Mutex_base *)(a1 + 8));
  v12 = ++*(_DWORD *)(a1 + 88);
  v5 = *(_BYTE *)(a1 + 112);
  if ( !v5 )
  {
    v6 = (_QWORD *)std::map<int,std::function<void (void)>>::_Try_emplace<int const &,>(
                     (__int64 *)(a1 + 96),
                     (__int64)v14,
                     (int *)&v12);
    v8 = *v6 + 40LL;
    if ( v8 != a2 )
    {
      std::_Func_class<void,>::_Tidy(*v6 + 40LL, v7);
      std::_Func_class<void,>::_Reset_move(v8, a2);
    }
  }
  _Mtx_unlock(v4);
  if ( v5 )
    std::_Func_class<void,>::operator()(a2);
  v10 = v12;
  std::_Func_class<void,>::_Tidy(a2, v9);
  return v10;
}
