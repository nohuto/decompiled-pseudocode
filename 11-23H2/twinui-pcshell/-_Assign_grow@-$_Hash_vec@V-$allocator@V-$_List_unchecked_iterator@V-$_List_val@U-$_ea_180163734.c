/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KI@std@@@std@@@std@@@2@@Z @ 0x180163734
 * Callers:
 *     ??0?$_Hash@V?$_Umap_traits@_KIV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KI@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@1@AEBV?$allocator@U?$pair@$$CB_KI@std@@@1@@Z @ 0x1801635A8 (--0-$_Hash@V-$_Umap_traits@_KIV-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@V-$allo.c)
 *     ??0?$_Hash@V?$_Umap_traits@IV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@1@AEBV?$allocator@U?$pair@$$CBIV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@1@@Z @ 0x18016361C (--0-$_Hash@V-$_Umap_traits@IV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$_Uh.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800BDA2C (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800C4204 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned int>>>>>>::_Assign_grow(
        unsigned __int64 **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 *v3; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  size_t size_of; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v3 = a1[1];
  v6 = (char *)v3 - (char *)*a1;
  v7 = v6 >> 3;
  if ( (unsigned __int64)(v6 >> 3) >= 0x10 )
  {
    result = 0LL;
    v11 = (unsigned __int64)(v6 + 7) >> 3;
    if ( *a1 > v3 )
      v11 = 0LL;
    if ( v11 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*a1, a3, v11);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(0x10uLL);
    v9 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v7 )
      std::_Deallocate<16,0>(*a1, 8 * v7);
    result = v9 + 16;
    *a1 = v9;
    a1[1] = v9 + 16;
    a1[2] = v9 + 16;
    while ( v9 != result )
      *v9++ = a3;
  }
  return result;
}
