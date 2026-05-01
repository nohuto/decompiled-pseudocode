/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@@Z @ 0x180350A10
 * Callers:
 *     ??0?$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONInputArchive@1@@Z @ 0x18034BF98 (--0-$InputArchive@VJSONInputArchive@cereal@@$0A@@cereal@@QEAA@QEAVJSONInputArchive@1@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@1@@Z @ 0x18034C0F4 (--0-$_Hash@V-$_Umap_traits@IV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$_Uh.c)
 *     ??0?$_Hash@V?$_Umap_traits@_KIV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KI@std@@@1@@Z @ 0x18034C188 (--0-$_Hash@V-$_Umap_traits@_KIV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$allo.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x18009B6E0 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned int>>>>>>::_Assign_grow(
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
    size_of = std::_Get_size_of_n<8>(0x10uLL);
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
