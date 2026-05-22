/*
 * XREFs of ??$_Resize_reallocate@I@?$vector@IV?$allocator@I@std@@@std@@AEAAX_KAEBI@Z @ 0x180044848
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x180043D6C (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 * Callees:
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18004490C (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_fill_n@V?$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV?$allocator@I@0@@Z @ 0x18004493C (--$_Uninitialized_fill_n@V-$allocator@I@std@@@std@@YAPEAIPEAI_KAEBIAEAV-$allocator@I@0@@Z.c)
 *     ?_Calculate_growth@?$vector@IV?$allocator@I@std@@@std@@AEBA_K_K@Z @ 0x18004497C (-_Calculate_growth@-$vector@IV-$allocator@I@std@@@std@@AEBA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

char *__fastcall std::vector<unsigned int>::_Resize_reallocate<unsigned int>(char *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  SIZE_T size_of; // rax
  char *v9; // rsi
  char *result; // rax

  if ( a2 > 0x3FFFFFFFFFFFFFFFLL )
    std::_Dwm_Xlength_error(a1);
  v6 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 2;
  v7 = std::vector<unsigned int>::_Calculate_growth(a1, a2);
  size_of = std::_Get_size_of_n<4>(v7);
  v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  std::_Uninitialized_fill_n<std::allocator<unsigned int>>(&v9[4 * v6], a2 - v6, a3);
  memmove_0(v9, *(const void **)a1, *((_QWORD *)a1 + 1) - *(_QWORD *)a1);
  if ( *(_QWORD *)a1 )
    std::_Deallocate<16,0>(*(_QWORD *)a1, (*((_QWORD *)a1 + 2) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFFCuLL);
  *(_QWORD *)a1 = v9;
  *((_QWORD *)a1 + 1) = &v9[4 * a2];
  result = &v9[4 * v7];
  *((_QWORD *)a1 + 2) = result;
  return result;
}
