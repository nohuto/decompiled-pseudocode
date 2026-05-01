/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1803DD858
 * Callers:
 *     ?GetViews@UwpWindowEventDispatcher@@UEAAXAEAV?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18022D4A0 (-GetViews@UwpWindowEventDispatcher@@UEAAXAEAV-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1803DDC0C (--$_Uninitialized_move@PEAV-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WR.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@_K1@Z @ 0x1803E72C4 (-_Change_array@-$vector@V-$ComPtr@UIXamlExplorerHostWindow@@@WRL@Microsoft@@V-$allocator@V-$ComP.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>(
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
  __int64 *v13; // rax
  __int64 *v14; // rsi
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 *v17; // r8
  __int64 v18; // rcx
  __int64 *result; // rax
  char *v20; // [rsp+20h] [rbp-48h]
  void *v21; // [rsp+20h] [rbp-48h]
  __int64 *v22; // [rsp+70h] [rbp+8h]

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
  v14 = v13;
  v20 = (char *)v13;
  v15 = &v13[v6];
  try
  {
    *v15 = 0LL;
    if ( v15 != a3 )
    {
      *v15 = *a3;
      *a3 = 0LL;
    }
    v22 = v15;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
        v18,
        a2,
        v13);
      v22 = v14;
      v17 = v15 + 1;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      v18,
      v16,
      v17);
    std::vector<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>::_Change_array(a1, v14, v9, v8, v20);
    result = v15;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IXamlExplorerHostWindow>>>(v22, v15 + 1);
    std::_Deallocate<16,0>(v21, 8 * v8);
    throw;
  }
  return result;
}
