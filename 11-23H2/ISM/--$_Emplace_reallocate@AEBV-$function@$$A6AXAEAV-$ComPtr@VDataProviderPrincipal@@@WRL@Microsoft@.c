/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@1@QEAV21@AEBV21@@Z @ 0x18010E06C
 * Callers:
 *     ?DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@Z @ 0x180110490 (-DeferUntilBootstrapped@AnimationDataProvider@@UEAAXV-$function@$$A6AXAEAV-$ComPtr@VDataProvider.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x18003DA44 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@YAPEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@0@@Z @ 0x18010E200 (--$_Uninitialized_move@PEAV-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@_K1@Z @ 0x180114858 (-_Change_array@-$vector@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Emplace_reallocate<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rax
  char *v13; // r14
  char *v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, char *); // rcx
  __int64 v16; // rdx
  char *v17; // r8
  __int64 v18; // rcx
  char *result; // rax
  __int64 i; // rbx
  __int64 *v21; // rdx
  __int64 v22; // [rsp+0h] [rbp-68h] BYREF
  void *v23; // [rsp+20h] [rbp-48h]
  char *v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+70h] [rbp+8h]
  unsigned __int64 v27; // [rsp+88h] [rbp+20h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  v7 = 0x3FFFFFFFFFFFFFFLL;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 6;
  v10 = v9 >> 1;
  if ( v9 <= 0x3FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  v27 = v7;
  size_of = std::_Get_size_of_n<64>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = v12;
  v23 = v12;
  v14 = &v12[v5 & 0xFFFFFFFFFFFFFFC0uLL];
  try
  {
    v24 = v14;
    *((_QWORD *)v14 + 7) = 0LL;
    v15 = *(__int64 (__fastcall ****)(_QWORD, char *))(a3 + 56);
    if ( v15 )
      *((_QWORD *)v14 + 7) = (**v15)(v15, v14);
    v25 = (__int64)v14;
    v16 = a1[1];
    v17 = v13;
    v18 = *a1;
    if ( a2 != v16 )
    {
      std::_Uninitialized_move<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> *,std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
        v18,
        a2,
        v13);
      v25 = (__int64)v13;
      v17 = v14 + 64;
      v16 = a1[1];
      v18 = a2;
    }
    std::_Uninitialized_move<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)> *,std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v18,
      v16,
      v17);
    std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Change_array(
      a1,
      v13,
      v8,
      v7,
      v23,
      v24);
    result = v14;
  }
  catch ( ... )
  {
    v21 = &v22;
    for ( i = v25; (char *)i != v14 + 64; i += 64LL )
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(i, (__int64)v21);
    std::_Deallocate<16,0>(v23, v27 << 6);
    throw;
  }
  return result;
}
