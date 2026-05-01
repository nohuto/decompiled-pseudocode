/*
 * XREFs of ??$_Emplace_reallocate@AEBUCRect@Geometry@@@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAPEAUCRect@Geometry@@QEAU23@AEBU23@@Z @ 0x1805A107C
 * Callers:
 *     std::for_each_std::reverse_iterator_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Geometry::CRect_________lambda_1325668b4ce184215da36fe3c3a9a86f___ @ 0x1805A1298 (std--for_each_std--reverse_iterator_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Ge.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18012166C (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ?_Xlength@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ @ 0x1801B1A04 (-_Xlength@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@CAXXZ.c)
 *     ?_Calculate_growth@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@AEBA_K_K@Z @ 0x1803A048C (-_Calculate_growth@-$vector@V-$shared_ptr@UPeoplePaneViewInfo@@@std@@V-$allocator@V-$shared_ptr@.c)
 *     ??$_Uninitialized_move@PEAUCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect@Geometry@@QEAU12@0PEAU12@AEAV?$allocator@UCRect@Geometry@@@0@@Z @ 0x1805A1274 (--$_Uninitialized_move@PEAUCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@YAPEAUCRect.c)
 *     ?_Change_array@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRect@Geometry@@_K1@Z @ 0x1805A765C (-_Change_array@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@AEAAXQEAUCRec.c)
 */

char *__fastcall std::vector<Geometry::CRect>::_Emplace_reallocate<Geometry::CRect const &>(
        __int64 *a1,
        __int64 a2,
        _OWORD *a3)
{
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r15
  unsigned __int64 v9; // r14
  size_t size_of; // rax
  char *v11; // rax
  char *v12; // rdi
  __int64 v13; // rdx
  _OWORD *v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r10
  char *result; // rax
  void *v18; // [rsp+58h] [rbp+10h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<Geometry::CRect>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<16>(v9);
  v11 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v18 = v11;
  try
  {
    v12 = &v11[v6 & 0xFFFFFFFFFFFFFFF0uLL];
    *(_OWORD *)v12 = *a3;
    v13 = a1[1];
    v14 = v11;
    v15 = *a1;
    if ( a2 != v13 )
    {
      std::_Uninitialized_move<Geometry::CRect *>(v15, a2, v11);
      v14 = v12 + 16;
      v13 = a1[1];
      v15 = a2;
    }
    std::_Uninitialized_move<Geometry::CRect *>(v15, v13, v14);
    std::vector<Geometry::CRect>::_Change_array(a1, v16, v8, v9);
    result = v12;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v18, 16 * v9);
    throw;
  }
  return result;
}
