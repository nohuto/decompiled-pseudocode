/*
 * XREFs of ??$_Emplace_reallocate@AEBV?$function@$$A6AXXZ@std@@@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@QEAAPEAV?$function@$$A6AXXZ@1@QEAV21@AEBV21@@Z @ 0x180024B9C
 * Callers:
 *     ?SubscribeTo_RenderTargetChanged@RenderOutput@Engine@Spectre@@UEAAXV?$function@$$A6AXXZ@std@@@Z @ 0x18002CC20 (-SubscribeTo_RenderTargetChanged@RenderOutput@Engine@Spectre@@UEAAXV-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001090C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x18001D074 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 *     ??$_Get_size_of_n@$0EA@@std@@YA_K_K@Z @ 0x180024DE0 (--$_Get_size_of_n@$0EA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAV?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@YAPEAV?$function@$$A6AXXZ@0@QEAV10@0PEAV10@AEAV?$allocator@V?$function@$$A6AXXZ@std@@@0@@Z @ 0x180025088 (--$_Uninitialized_move@PEAV-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@s.c)
 *     ?_Change_array@?$vector@V?$function@$$A6AXXZ@std@@V?$allocator@V?$function@$$A6AXXZ@std@@@2@@std@@AEAAXQEAV?$function@$$A6AXXZ@2@_K1@Z @ 0x1800274E8 (-_Change_array@-$vector@V-$function@$$A6AXXZ@std@@V-$allocator@V-$function@$$A6AXXZ@std@@@2@@std.c)
 */

__int64 __fastcall std::vector<std::function<void (void)>>::_Emplace_reallocate<std::function<void (void)> const &>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  unsigned __int64 size_of; // rax
  void *v13; // rax
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0x3FFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 6;
  if ( v6 == 0x3FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 6;
  v11 = v10 >> 1;
  if ( v10 <= 0x3FFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<64>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = (__int64)v13 + (v4 & 0xFFFFFFFFFFFFFFC0uLL);
  v15 = (__int64)v13;
  std::function<void (void)>::function<void (void)>(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 64;
    v18 = a2;
  }
  std::_Uninitialized_move<std::function<void (void)> *,std::allocator<std::function<void (void)>>>(v18, v16, v17);
  std::vector<std::function<void (void)>>::_Change_array(a1, v15, v9, v3);
  return v14;
}
