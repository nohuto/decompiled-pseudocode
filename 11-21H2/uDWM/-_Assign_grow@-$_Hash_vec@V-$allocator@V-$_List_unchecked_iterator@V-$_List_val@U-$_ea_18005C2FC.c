/*
 * XREFs of ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@std@@@std@@@2@@Z @ 0x18005C2FC
 * Callers:
 *     ??0TransitionManager@implementation@Transitions@Udwm@winrt@@QEAA@XZ @ 0x18005C220 (--0TransitionManager@implementation@Transitions@Udwm@winrt@@QEAA@XZ.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800FB8D4 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHa.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180037FCC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x1800441F4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

unsigned __int64 *__fastcall std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>>>>>::_Assign_grow(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rbp
  unsigned __int64 size_of; // rax
  unsigned __int64 *v9; // rdi
  unsigned __int64 *result; // rax
  unsigned __int64 v11; // rcx

  v5 = *(_QWORD *)(a1 + 8);
  v7 = (__int64)(v5 - *(_QWORD *)a1) >> 3;
  if ( v7 >= a2 )
  {
    result = 0LL;
    v11 = (v5 - *(_QWORD *)a1 + 7) >> 3;
    if ( *(_QWORD *)a1 > v5 )
      v11 = 0LL;
    if ( v11 )
    {
      result = (unsigned __int64 *)a3;
      memset64(*(void **)a1, a3, v11);
    }
  }
  else
  {
    size_of = std::_Get_size_of_n<8>(a2);
    v9 = (unsigned __int64 *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    if ( v7 )
      std::_Deallocate<16,0>(*(void **)a1, 8 * v7);
    result = &v9[a2];
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 16) = result;
    while ( v9 != result )
      *v9++ = a3;
  }
  return result;
}
