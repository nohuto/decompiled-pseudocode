/*
 * XREFs of ??$_Emplace_reallocate@AEBVEdge@@@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAAPEAVEdge@@QEAV2@AEBV2@@Z @ 0x1801C8CB8
 * Callers:
 *     ?AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801C9604 (-AddOrUpdate@Edges@@QEAAJPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 *     ?AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x1801C96FC (-AddOrUpdate@Edges@@QEAAJPEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18001DBCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0IA@@std@@YA_K_K@Z @ 0x180040F28 (--$_Get_size_of_n@$0IA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801C8F9C (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 *     ??0Edge@@QEAA@AEBV0@@Z @ 0x1801C9198 (--0Edge@@QEAA@AEBV0@@Z.c)
 *     ?_Change_array@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z @ 0x1801CA6D8 (-_Change_array@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@AEAAXQEAVEdge@@_K1@Z.c)
 */

char *__fastcall std::vector<Edge>::_Emplace_reallocate<Edge const &>(__int64 *a1, __int64 a2, const struct Edge *a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t size_of; // rax
  Edge *v12; // rsi
  char *v13; // r14
  __int64 v14; // rdx
  Edge *v15; // r8
  __int64 v16; // rcx
  Edge *v18; // [rsp+70h] [rbp+8h]

  v5 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 7;
  v7 = 0x1FFFFFFFFFFFFFFLL;
  if ( v6 == 0x1FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v8 = v6 + 1;
  v9 = (a1[2] - *a1) >> 7;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v7 = v10 + v9;
    if ( v10 + v9 < v8 )
      v7 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<128>(v7);
  v12 = (Edge *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13 = (char *)v12 + (v5 & 0xFFFFFFFFFFFFFF80uLL);
  try
  {
    Edge::Edge((Edge *)v13, a3);
    v18 = (Edge *)v13;
    v14 = a1[1];
    v15 = v12;
    v16 = *a1;
    if ( a2 != v14 )
    {
      std::_Uninitialized_move<Edge *>(v16, a2, v12);
      v18 = v12;
      v15 = (Edge *)(v13 + 128);
      v14 = a1[1];
      v16 = a2;
    }
    std::_Uninitialized_move<Edge *>(v16, v14, v15);
  }
  catch ( ... )
  {
    std::_Destroy_range<std::allocator<Edge>>(v18, (Edge *)(v13 + 128));
    std::_Deallocate<16,0>(v12, v7 << 7);
    throw;
  }
  std::vector<Edge>::_Change_array(a1, v12, v8, v7, v12);
  return v13;
}
