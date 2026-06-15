/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1800FB3E0
 * Callers:
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_0e41d75607236968788bdd59460e85d3___ @ 0x1800FB774 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--WeakRef_.c)
 *     _lambda_44fd5c58d02accc22ae075b126dea950_::operator() @ 0x1800FBCF4 (_lambda_44fd5c58d02accc22ae075b126dea950_--operator().c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180025468 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800254C0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x18005D5D8 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Uninitialized_move@PEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@0@@Z @ 0x1800F6C5C (--$_Uninitialized_move@PEAV-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISa.c)
 *     ?_Change_array@?$vector@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@_K1@Z @ 0x1800FAE0C (-_Change_array@-$vector@V-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UISaDe.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<ISaDeviceProxy> const &>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  __int64 *v12; // rax
  __int64 *v13; // rdi
  __int64 *v14; // r14
  __int64 *v15; // rdx
  __int64 *v16; // r8
  __int64 *v17; // rcx
  __int64 *result; // rax
  __int64 *v19; // [rsp+20h] [rbp-48h]
  __int64 *v20; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = a1[1] - *a1;
  v7 = 0x1FFFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = a1[2] - *a1;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<8>(v7);
  v12 = (__int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v19 = v12;
  v14 = &v12[v5];
  try
  {
    *v14 = *a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v14);
    v20 = v14;
    v15 = a1[1];
    v16 = v13;
    v17 = *a1;
    if ( a2 != v15 )
    {
      std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
        v17,
        a2,
        v13);
      v20 = v13;
      v16 = v14 + 1;
      v15 = a1[1];
      v17 = a2;
    }
    std::_Uninitialized_move<Microsoft::WRL::ComPtr<ISaDeviceProxy> *,std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(
      v17,
      v15,
      v16);
    std::vector<Microsoft::WRL::ComPtr<ISaDeviceProxy>>::_Change_array((__int64)a1, (__int64)v13, v8, v7);
    result = v14;
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<ISaDeviceProxy>>>(v20, v14 + 1);
    std::_Deallocate<16,0>(v19, 8 * v7);
    throw;
  }
  return result;
}
