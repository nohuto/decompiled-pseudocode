/*
 * XREFs of ??$_Insert_range@PEBE@?$vector@EV?$allocator@E@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1Uforward_iterator_tag@1@@Z @ 0x1400608F0
 * Callers:
 *     ??$insert@PEBE$0A@@?$vector@EV?$allocator@E@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@E@std@@@std@@@1@PEBE1@Z @ 0x140060C88 (--$insert@PEBE$0A@@-$vector@EV-$allocator@E@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x14001CBBC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     memmove_0 @ 0x1400321F7 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Insert_range<unsigned char const *>(
        __int64 a1,
        char *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  size_t v7; // rsi
  void **v8; // rdi
  _BYTE *v9; // rcx
  char *v10; // r14
  char *result; // rax
  signed __int64 v12; // r13
  size_t v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  char *v16; // r15
  signed __int64 v17; // rax
  size_t v18; // r8
  const void *v19; // rdx
  char *v20; // rcx
  char *v21; // r15
  char *v22; // [rsp+20h] [rbp-58h]
  _BYTE *v24; // [rsp+98h] [rbp+20h]

  v7 = a4 - a3;
  v8 = (void **)(a1 + 8);
  v9 = *(_BYTE **)a1;
  v24 = v9;
  v10 = (char *)*v8;
  result = (char *)(*(_QWORD *)(a1 + 16) - (_QWORD)*v8);
  if ( a4 != a3 )
  {
    if ( v7 <= (unsigned __int64)result )
    {
      v21 = &v10[v7];
      if ( v7 >= v10 - a2 )
      {
        memmove_0(&a2[v7], a2, v10 - a2);
        *v8 = v21;
      }
      else
      {
        memmove_0(v10, &v10[-v7], v7);
        *(_QWORD *)(a1 + 8) = v21;
        memmove_0(&a2[v7], a2, &v10[-v7] - a2);
      }
      return (char *)memmove_0(a2, a3, v7);
    }
    else
    {
      v12 = v10 - v9;
      v13 = 0x7FFFFFFFFFFFFFFFLL;
      if ( v7 > 0x7FFFFFFFFFFFFFFFLL - (v10 - v9) )
        std::_Xlength_error("vector too long");
      v14 = *(_QWORD *)(a1 + 16) - (_QWORD)v9;
      v15 = v14 >> 1;
      if ( v14 <= 0x7FFFFFFFFFFFFFFFLL - (v14 >> 1) )
      {
        v13 = v15 + v14;
        if ( v15 + v14 < v7 + v12 )
          v13 = v7 + v12;
      }
      v16 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v13);
      v17 = a2 - v24;
      try
      {
        v22 = &v16[v17];
        memmove_0(&v16[v17], a3, v7);
        if ( v7 == 1 && a2 == v10 )
        {
          v18 = v12;
          v19 = v24;
          v20 = v16;
        }
        else
        {
          memmove_0(v16, v24, a2 - v24);
          v20 = &v22[v7];
          v18 = v10 - a2;
          v19 = a2;
        }
        memmove_0(v20, v19, v18);
        if ( *(_QWORD *)a1 )
          std::_Deallocate<16,0>(*(void **)a1, *(_QWORD *)(a1 + 16) - *(_QWORD *)a1);
        *(_QWORD *)a1 = v16;
        *(_QWORD *)(a1 + 8) = &v16[v7 + v12];
        result = &v16[v13];
        *(_QWORD *)(a1 + 16) = &v16[v13];
      }
      catch ( ... )
      {
        std::_Deallocate<16,0>(v16, v13);
        throw;
      }
    }
  }
  return result;
}
