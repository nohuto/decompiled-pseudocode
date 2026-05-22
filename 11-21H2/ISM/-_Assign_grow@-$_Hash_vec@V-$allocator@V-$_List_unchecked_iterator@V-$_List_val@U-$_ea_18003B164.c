/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@std@@@std@@@2@@Z @ 0x18003B164
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@KPEAVInputInfoValidator@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@1@@Z @ 0x18003B078 (--0-$_Hash@V-$_Umap_traits@KPEAVInputInfoValidator@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_t.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18003BDEC (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator *>>>>>>::_Assign_grow(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v6; // rbp
  size_t size_of; // rax
  unsigned __int64 *v8; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v10; // rcx

  v3 = *(_QWORD *)(a1 + 8);
  v6 = (__int64)(v3 - *(_QWORD *)a1) >> 3;
  if ( v6 >= 0x10 )
  {
    result = 0LL;
    v10 = (v3 - *(_QWORD *)a1 + 7) >> 3;
    if ( *(_QWORD *)a1 > v3 )
      v10 = 0LL;
    if ( v10 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v10);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(16LL);
    v8 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v6 )
      std::_Deallocate<16,0>(*(void **)a1, 8 * v6);
    result = v8 + 16;
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v8 + 16;
    *(_QWORD *)(a1 + 16) = v8 + 16;
    while ( v8 != result )
      *v8++ = a3;
  }
  return result;
}
