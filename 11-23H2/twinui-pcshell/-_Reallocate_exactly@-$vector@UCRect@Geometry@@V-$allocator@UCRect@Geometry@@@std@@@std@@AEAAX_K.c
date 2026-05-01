/*
 * XREFs of ?_Reallocate_exactly@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@AEAAX_K@Z @ 0x180674400
 * Callers:
 *     ?reserve@?$vector@UCRect@Geometry@@V?$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z @ 0x1806747A4 (-reserve@-$vector@UCRect@Geometry@@V-$allocator@UCRect@Geometry@@@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800C4228 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 */

void __fastcall std::vector<Geometry::CRect>::_Reallocate_exactly(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  size_t size_of; // rax
  _OWORD *v6; // rax
  _OWORD *v7; // r9
  _OWORD *v8; // rdx
  _OWORD *i; // rcx
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx

  v4 = (__int64)(a1[1] - *a1) >> 4;
  size_of = std::_Get_size_of_n<16>(a2);
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  try
  {
    v7 = (_OWORD *)a1[1];
    v8 = v6;
    for ( i = (_OWORD *)*a1; i != v7; ++i )
      *v8++ = *i;
    v10 = a2;
    v11 = v4;
    v12 = (__int64)v6;
    v13 = (__int64)a1;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v6, 16 * a2);
    throw;
  }
  std::vector<Geometry::CRect>::_Change_array(v13, v12, v11, v10);
}
