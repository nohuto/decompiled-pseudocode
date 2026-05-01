/*
 * XREFs of ?_Reallocate_exactly@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x1805A7708
 * Callers:
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1805A7DA8 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAUCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geometry@@QEAU12@0PEAU12@AEAV?$allocator@UCRect@Geometry@@@0@@Z @ 0x1805A1274 (--$_Uninitialized_move@PEAUCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect.c)
 */

void __fastcall std::vector<Geometry::CRect>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  _OWORD *v6; // rax
  __int64 v7; // r9
  __int64 v8; // r8
  __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // [rsp+30h] [rbp+8h]

  v4 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v12 = v6;
  try
  {
    std::_Uninitialized_move<Geometry::CRect *>(*(_OWORD **)a1, *(_OWORD **)(a1 + 8), v6);
    v7 = a2;
    v8 = v4;
    v10 = v9;
    v11 = a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, 16 * a2);
    throw;
  }
  std::vector<Geometry::CRect>::_Change_array(v11, v10, v8, v7);
}
