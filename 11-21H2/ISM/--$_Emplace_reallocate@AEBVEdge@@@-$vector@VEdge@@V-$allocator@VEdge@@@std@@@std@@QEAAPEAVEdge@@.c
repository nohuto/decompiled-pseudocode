/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801AA8CC
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AB22C (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801AB324 (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801AAB4C (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801AAE00 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1801AC2E8 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 */

char *__fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(__int64 *a1, __int64 a2, const struct Edge *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  Edge *v11; // rsi
  char *v12; // r14
  __int64 v13; // rdx
  Edge *v14; // r8
  __int64 v15; // rcx
  Edge *v17; // [rsp+70h] [rbp+8h]
  __int64 v18; // [rsp+78h] [rbp+10h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 7;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 7;
  v9 = v8 >> 1;
  if ( v8 <= 0x1FFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v6 + 1;
    if ( v9 + v8 >= v7 )
      v10 = v9 + v8;
    v18 = v10;
    if ( v10 > 0x1FFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
  }
  else
  {
    v10 = 0x1FFFFFFFFFFFFFFLL;
    v18 = 0x1FFFFFFFFFFFFFFLL;
  }
  v11 = (Edge *)std::_Allocate<16,std::_Default_allocate_traits,0>(v10 << 7);
  v12 = (char *)v11 + (v5 & 0xFFFFFFFFFFFFFF80uLL);
  try
  {
    Edge::Edge((Edge *)v12, a3);
    v17 = (Edge *)v12;
    v13 = a1[1];
    v14 = v11;
    v15 = *a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<Edge *>(v15, a2, v11);
      v17 = v11;
      v14 = (Edge *)(v12 + 128);
      v13 = a1[1];
      v15 = a2;
    }
    std::_Uninitialized_move<Edge *>(v15, v13, v14);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Edge>>(v17, (Edge *)(v12 + 128));
    std::_Deallocate<16,0>(v11, v18 << 7);
    throw;
  }
  std::vector<Edge>::_Change_array(a1, v11, v7, v10, v11);
  return v12;
}
