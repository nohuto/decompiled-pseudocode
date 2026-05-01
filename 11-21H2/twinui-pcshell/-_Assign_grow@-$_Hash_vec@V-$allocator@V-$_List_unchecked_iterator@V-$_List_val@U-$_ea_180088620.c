/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEBDI@std@@@std@@@std@@@2@@Z @ 0x180088620
 * Callers:
 *     ??0?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z @ 0x1800871B0 (--0-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONOutputArchive@1@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<char const * const,unsigned int>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *result; // rax
  unsigned __int64 *v5; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rdi
  unsigned __int64 v9; // rcx

  result = a1[1];
  v5 = *a1;
  v7 = result - *a1;
  if ( v7 >= 0x10 )
  {
    v9 = (unsigned __int64)((char *)result - (char *)v5 + 7) >> 3;
    if ( v5 > result )
      v9 = 0LL;
    if ( v9 )
    {
      result = (unsigned __int64 *)a3;
      memset64(v5, a3, v9);
    }
  }
  else
  {
    v8 = (unsigned __int64 *)operator new(0x80uLL);
    if ( v7 )
      std::_Deallocate<16,0>(*a1, 8 * v7);
    result = v8 + 16;
    *a1 = v8;
    a1[1] = v8 + 16;
    a1[2] = v8 + 16;
    do
      *v8++ = a3;
    while ( v8 != result );
  }
  return result;
}
