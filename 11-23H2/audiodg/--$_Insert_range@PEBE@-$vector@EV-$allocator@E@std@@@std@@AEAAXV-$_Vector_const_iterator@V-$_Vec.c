/*
 * XREFs of ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400644C4
 * Callers:
 *     ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140064AA8 (--$insert@PEBE$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1400065C4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x140026294 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x14002F194 (memmove_0.c)
 *     ??$_Uninitialized_copy@PEBEV?$allocator@E@std@@@std@@YAPEAEQEBE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A38 (--$_Uninitialized_copy@PEBEV-$allocator@E@std@@@std@@YAPEAEQEBE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ??$_Uninitialized_move@PEAEV?$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV?$allocator@E@0@@Z @ 0x140064A70 (--$_Uninitialized_move@PEAEV-$allocator@E@std@@@std@@YAPEAEQEAE0PEAEAEAV-$allocator@E@0@@Z.c)
 *     ?_Xlength@?$vector@EV?$allocator@E@std@@@std@@CAXXZ @ 0x140065FA0 (-_Xlength@-$vector@EV-$allocator@E@std@@@std@@CAXXZ.c)
 */

unsigned __int64 __fastcall std::vector<unsigned char>::_Insert_range<unsigned char const *>(
        __int64 a1,
        char *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  unsigned __int64 v7; // r15
  _BYTE *v8; // r13
  char *v9; // rsi
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  signed __int64 v12; // rcx
  size_t v13; // rdi
  size_t v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  char *v17; // r14
  void *v18; // rcx
  unsigned __int64 v19; // [rsp+20h] [rbp-48h]

  v7 = a4 - a3;
  v8 = *(_BYTE **)a1;
  v9 = *(char **)(a1 + 8);
  v10 = *(_QWORD *)(a1 + 16);
  result = v10 - (_QWORD)v9;
  if ( a4 != a3 )
  {
    if ( v7 <= result )
    {
      if ( v7 >= v9 - a2 )
      {
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<unsigned char *>(a2);
        return std::_Uninitialized_copy<unsigned char const *>(a3);
      }
      else
      {
        *(_QWORD *)(a1 + 8) = std::_Uninitialized_move<unsigned char *>(&v9[-v7]);
        memmove_0(&a2[v7], a2, &v9[-v7] - a2);
        return std::_Uninitialized_copy<unsigned char const *>(a3);
      }
    }
    else
    {
      v12 = v9 - v8;
      v13 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 0x7FFFFFFFFFFFFFFFLL - (v9 - v8) )
        std::vector<unsigned char>::_Xlength(v12, v10);
      v14 = v12 + v7;
      v19 = v12 + v7;
      v15 = v10 - (_QWORD)v8;
      v16 = v15 >> 1;
      if ( v15 <= 0x7FFFFFFFFFFFFFFFLL - (v15 >> 1) )
      {
        v13 = v16 + v15;
        if ( v16 + v15 < v14 )
          v13 = v14;
      }
      v17 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
      std::_Uninitialized_copy<unsigned char const *>(a3);
      if ( v7 == 1 && a2 == v9 )
      {
        v18 = v8;
      }
      else
      {
        std::_Uninitialized_move<unsigned char *>(v8);
        v18 = a2;
      }
      std::_Uninitialized_move<unsigned char *>(v18);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
      *(_QWORD *)a1 = v17;
      *(_QWORD *)(a1 + 8) = &v17[v19];
      result = (unsigned __int64)&v17[v13];
      *(_QWORD *)(a1 + 16) = &v17[v13];
    }
  }
  return result;
}
