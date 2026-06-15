/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@2@@Z @ 0x180015060
 * Callers:
 *     ??0CDuckingManager@@QEAA@XZ @ 0x18001B9EC (--0CDuckingManager@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180023150 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ABD0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180015F60 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<std::wstring const,CRenderEndpointDuckingManagerContext>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  _QWORD *result; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdi
  SIZE_T size_of; // rax
  _QWORD *v11; // r14
  unsigned __int64 v12; // rcx
  void *v13; // rdi

  result = *(_QWORD **)a1;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = v7 - *(_QWORD *)a1;
  v9 = v8 >> 3;
  if ( v8 >> 3 >= a2 )
  {
    v12 = (unsigned __int64)(v8 + 7) >> 3;
    if ( (unsigned __int64)result > v7 )
      v12 = 0LL;
    if ( v12 )
    {
      v13 = result;
      result = (_QWORD *)a3;
      memset64(v13, a3, v12);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v11 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v9 )
      std::_Deallocate<16,0>(*(void **)a1, 8 * v9);
    result = &v11[a2];
    *(_QWORD *)a1 = v11;
    *(_QWORD *)(a1 + 8) = result;
    for ( *(_QWORD *)(a1 + 16) = result; v11 != result; ++v11 )
      *v11 = a3;
  }
  return result;
}
