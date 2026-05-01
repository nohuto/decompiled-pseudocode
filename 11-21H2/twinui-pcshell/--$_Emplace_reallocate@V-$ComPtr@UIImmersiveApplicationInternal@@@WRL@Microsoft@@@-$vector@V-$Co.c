/*
 * XREFs of ??$_Emplace_reallocate@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x1802DE6FC
 * Callers:
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E7E60 (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@0@@Z @ 0x1802DEB64 (--$_Uninitialized_move@PEAV-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K1@Z @ 0x1802E9214 (-_Change_array@-$vector@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V-$allocator@V.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>(
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
  __int64 *v13; // rsi
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
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> *,std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal> *,std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>::_Change_array(a1, v13, v9, v8, v13);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>(v20, v14 + 1);
    std::_Deallocate<16,0>(v19, 8 * v8);
    throw;
  }
  return result;
}
