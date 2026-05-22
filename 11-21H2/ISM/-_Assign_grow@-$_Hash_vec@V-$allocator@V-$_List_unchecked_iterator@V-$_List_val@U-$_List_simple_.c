/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@std@@@std@@@2@@Z @ 0x1800044EC
 * Callers:
 *     ??0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z @ 0x1800041E0 (--0ContextualProcessorMetadata@ContextualProcessorBuffer@@QEAA@AEBU01@@Z.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@1@@Z @ 0x1800DDB78 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@@U-$.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x1801420B8 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha.c)
 *     ??0?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@IEAA@$$QEAV01@@Z @ 0x1801A15A8 (--0-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$ha_ea_1801A15A8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004AF08 (--2@YAPEAX_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800804A0 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180080E10 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

char *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,enum ContextualProcessorDecision>>>>>>::_Assign_grow(
        void **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  char *result; // rax
  unsigned __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 *v8; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 v10; // rcx

  result = (char *)a1[1];
  v6 = (result - (_BYTE *)*a1) >> 3;
  if ( v6 < a2 )
  {
    if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Throw_bad_array_new_length();
    v7 = a2;
    if ( 8 * a2 >= 0x1000 )
    {
      v8 = (unsigned __int64 *)std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(8 * a2);
    }
    else
    {
      if ( !(v7 * 8) )
      {
        v9 = 0LL;
        goto LABEL_7;
      }
      v8 = (unsigned __int64 *)operator new(8 * a2);
    }
    v9 = v8;
LABEL_7:
    if ( v6 )
      std::_Deallocate<16,0>(*a1, 8 * v6);
    result = (char *)&v9[v7];
    *a1 = v9;
    a1[1] = &v9[v7];
    a1[2] = &v9[v7];
    while ( v9 != (unsigned __int64 *)result )
      *v9++ = a3;
    return result;
  }
  v10 = (unsigned __int64)(result - (_BYTE *)*a1 + 7) >> 3;
  if ( *a1 > result )
    v10 = 0LL;
  if ( v10 )
  {
    result = (char *)a3;
    memset64(*a1, a3, v10);
  }
  return result;
}
