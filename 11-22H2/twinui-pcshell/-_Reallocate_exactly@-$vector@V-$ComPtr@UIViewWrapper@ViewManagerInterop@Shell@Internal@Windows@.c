/*
 * XREFs of ?_Reallocate_exactly@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@AEAAX_K@Z @ 0x1802D85F4
 * Callers:
 *     ?reserve@?$vector@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@QEAAX_K@Z @ 0x1802D877C (-reserve@-$vector@V-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Micros.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@0@@Z @ 0x1802D74A0 (--$_Uninitialized_move@PEAV-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WR.c)
 */

__int64 __fastcall std::vector<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>::_Reallocate_exactly(
        __int64 **a1,
        unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  __int64 *v6; // rax
  __int64 *v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v13; // [rsp+40h] [rbp+8h]

  v4 = a1[1] - *a1;
  size_of = std::_Get_size_of_n<8>(a2);
  v6 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v7 = v6;
  v13 = v6;
  try
  {
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper> *,std::allocator<Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>>>(
      *a1,
      a1[1],
      v6);
    v8 = a2;
    v9 = v4;
    v10 = (__int64)v7;
    v11 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v13, 8 * a2);
    throw;
  }
  return std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::_Change_array(v11, v10, v9, v8);
}
