/*
 * XREFs of ??$_Emplace_reallocate@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAPEAV?$function@$$A6AX_N@Z@1@QEAV21@AEAV21@@Z @ 0x1800904A0
 * Callers:
 *     ??$emplace_back@AEAV?$function@$$A6AX_N@Z@std@@@?$vector@V?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@QEAAAEAV?$function@$$A6AX_N@Z@1@AEAV21@@Z @ 0x1800906D8 (--$emplace_back@AEAV-$function@$$A6AX_N@Z@std@@@-$vector@V-$function@$$A6AX_N@Z@std@@V-$allocato.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x18003BB70 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AX_N@Z@std@@V?$allocator@V?$function@$$A6AX_N@Z@std@@@2@@std@@YAPEAV?$function@$$A6AX_N@Z@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@@Z @ 0x180090668 (--$_Uninitialized_move@PEAV-$function@$$A6AX_N@Z@std@@V-$allocator@V-$function@$$A6AX_N@Z@std@@@.c)
 *     ??0?$function@$$A6AXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800907D4 (--0-$function@$$A6AXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal_to@K@2@V-$alloca.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@V?$allocator@V?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@2@_K1@Z @ 0x180090FA4 (-_Change_array@-$vector@V-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@.c)
 */

char *__fastcall std::vector<std::function<void (bool)>>::_Emplace_reallocate<std::function<void (bool)> &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  char *v12; // rsi
  char *v13; // r14
  __int64 v14; // rdx
  char *v15; // r8
  __int64 v16; // rcx
  __int64 v18; // [rsp+70h] [rbp+8h]

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
  size_of = std::_Get_size_of_n<64>(v7);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = &v12[v5 & 0xFFFFFFFFFFFFFFC0uLL];
  try
  {
    std::function<void (InputInfo *,std::unordered_set<unsigned long> &)>::function<void (InputInfo *,std::unordered_set<unsigned long> &)>(
      v13,
      a3);
    v18 = (__int64)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(v16, a2, v12);
      v18 = (__int64)v12;
      v15 = v13 + 64;
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<std::function<void (bool)> *,std::allocator<std::function<void (bool)>>>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>>(
      v18,
      (__int64)(v13 + 64));
    std::_Deallocate<16,0>(v12, v7 << 6);
    throw;
  }
  std::vector<std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>>::_Change_array(
    a1,
    v12,
    v8,
    v7,
    v12);
  return v13;
}
