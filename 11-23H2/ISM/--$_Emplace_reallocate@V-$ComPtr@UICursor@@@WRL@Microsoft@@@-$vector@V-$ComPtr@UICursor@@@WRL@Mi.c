/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UICursor@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1801B76D4
 * Callers:
 *     ?GetCursors@DWMCursorBroker@@UEAA?AV?$vector@V?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@XZ @ 0x180053450 (-GetCursors@DWMCursorBroker@@UEAA-AV-$vector@V-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-.c)
 *     ?GetTargetListFromHitTestResult@DWMInputRouter@@AEAA?AV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@W4InputType@@AEBUHitTestResult@@AEAV?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Z @ 0x1801B9114 (-GetTargetListFromHitTestResult@DWMInputRouter@@AEAA-AV-$vector@V-$ComPtr@UIInputTarget@@@WRL@Mi.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003E448 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UICursor@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UICursor@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UICursor@@@WRL@Microsoft@@@0@@Z @ 0x1801B7B54 (--$_Uninitialized_move@PEAV-$ComPtr@UICursor@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UICursor@@@.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@_K1@Z @ 0x1801BA428 (-_Change_array@-$vector@V-$ComPtr@UIInputTarget@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIInputT.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<ICursor>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ICursor>>(
        __int64 *a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  size_t size_of; // rax
  __int64 *v13; // r14
  __int64 *v14; // rdi
  __int64 v15; // rdx
  __int64 *v16; // r8
  __int64 v17; // rcx
  __int64 *result; // rax
  void *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v6 = (a2 - *a1) >> 3;
  v7 = (a1[1] - *a1) >> 3;
  v8 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v7 + 1;
  v10 = (a1[2] - *a1) >> 3;
  v11 = v10 >> 1;
  if ( v10 <= 0x1FFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v8 = v11 + v10;
    if ( v11 + v10 < v9 )
      v8 = v7 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v8);
  v13 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = &v13[v6];
  try
  {
    *v14 = 0LL;
    if ( v14 != a3 )
    {
      *v14 = *a3;
      *a3 = 0LL;
    }
    v20 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ICursor> *,std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::ComPtr<IInputTarget>>::_Change_array(a1, v13, v9, v8, v13);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ICursor>>>(v20, v14 + 1);
    std::_Deallocate<16,0>(v19, 8 * v8);
    throw;
  }
  return result;
}
