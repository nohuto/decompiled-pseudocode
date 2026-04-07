/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800FB8D4
 * Callers:
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@V?$_Uhash_compare@W4ShellTransition@Transitions@Udwm@winrt@@U?$hash@W4ShellTransition@Transitions@Udwm@winrt@@@std@@U?$equal_to@W4ShellTransition@Transitions@Udwm@winrt@@@6@@std@@V?$allocator@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@7@$0A@@std@@@std@@IEAAXXZ @ 0x1800FBA64 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@W4ShellTransition@Transitions@Udwm@winrt@@UITransitionHan.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4ShellTransition@Transitions@Udwm@winrt@@UITransitionHandler@234@@std@@@std@@@std@@@2@@Z @ 0x18005C2FC (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18005C2FC.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x180107A14 (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<enum winrt::Udwm::Transitions::ShellTransition,winrt::Udwm::Transitions::ITransitionHandler,std::_Uhash_compare<enum winrt::Udwm::Transitions::ShellTransition,std::hash<enum winrt::Udwm::Transitions::ShellTransition>,std::equal_to<enum winrt::Udwm::Transitions::ShellTransition>>,std::allocator<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>,0>>::_Forced_rehash(
        const char *a1,
        unsigned __int64 a2)
{
  const char *v2; // rsi
  char v3; // cl
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  _QWORD *result; // rax
  _QWORD *v8; // rcx
  __int64 v9; // r8
  unsigned __int64 i; // r9
  __int64 v11; // rdx
  __int64 v12; // r11
  __int64 v13; // r10
  __int64 *v14; // rdx
  int v15; // r8d
  _QWORD *v16; // rdi
  _QWORD *v17; // r9
  _QWORD *v18; // r8
  _QWORD *v19; // rdx
  __int64 **v20; // rdi
  __int64 v21; // r10
  _QWORD *v22; // r9
  _QWORD *v23; // r8
  _QWORD *v24; // rdx
  _QWORD *v25; // r9
  __int64 **v26; // r8
  __int64 *v27; // rdx

  v2 = a1;
  _BitScanReverse64((unsigned __int64 *)&a1, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Dwm_Xlength_error(a1);
  v4 = *((_QWORD *)v2 + 1);
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Udwm::Transitions::ShellTransition const,winrt::Udwm::Transitions::ITransitionHandler>>>>>>::_Assign_grow(
    (__int64)(v2 + 24),
    2 * v6,
    v4);
  *((_QWORD *)v2 + 7) = v6;
  *((_QWORD *)v2 + 6) = v6 - 1;
  result = (_QWORD *)**((_QWORD **)v2 + 1);
  v8 = result;
  while ( result != (_QWORD *)v4 )
  {
    v8 = (_QWORD *)*v8;
    v9 = 0xCBF29CE484222325uLL;
    for ( i = 0LL; i < 4; ++i )
    {
      v11 = *((unsigned __int8 *)result + i + 16);
      v9 = 0x100000001B3LL * (v11 ^ v9);
    }
    v12 = *((_QWORD *)v2 + 3);
    v13 = 2 * (v9 & *((_QWORD *)v2 + 6));
    if ( *(_QWORD *)(v12 + 16 * (v9 & *((_QWORD *)v2 + 6))) == v4 )
    {
      *(_QWORD *)(v12 + 16 * (v9 & *((_QWORD *)v2 + 6))) = result;
LABEL_9:
      *(_QWORD *)(v12 + 8 * v13 + 8) = result;
      goto LABEL_17;
    }
    v14 = *(__int64 **)(v12 + 16 * (v9 & *((_QWORD *)v2 + 6)) + 8);
    v15 = *((_DWORD *)result + 4);
    if ( v15 == *((_DWORD *)v14 + 4) )
    {
      v16 = (_QWORD *)*v14;
      if ( (_QWORD *)*v14 != result )
      {
        v17 = (_QWORD *)result[1];
        *v17 = v8;
        v18 = (_QWORD *)v8[1];
        *v18 = v16;
        v19 = (_QWORD *)v16[1];
        *v19 = result;
        v16[1] = v18;
        v8[1] = v17;
        result[1] = v19;
      }
      goto LABEL_9;
    }
    while ( 1 )
    {
      v20 = (__int64 **)(v14 + 1);
      if ( *(__int64 **)(v12 + 8 * v13) == v14 )
        break;
      v14 = *v20;
      if ( v15 == *((_DWORD *)*v20 + 4) )
      {
        v21 = *v14;
        v22 = (_QWORD *)result[1];
        *v22 = v8;
        v23 = (_QWORD *)v8[1];
        *v23 = v21;
        v24 = *(_QWORD **)(v21 + 8);
        *v24 = result;
        *(_QWORD *)(v21 + 8) = v23;
        v8[1] = v22;
        result[1] = v24;
        goto LABEL_17;
      }
    }
    v25 = (_QWORD *)result[1];
    *v25 = v8;
    v26 = (__int64 **)v8[1];
    *v26 = v14;
    v27 = *v20;
    *v27 = (__int64)result;
    *v20 = (__int64 *)v26;
    v8[1] = v25;
    result[1] = v27;
    *(_QWORD *)(v12 + 8 * v13) = result;
LABEL_17:
    result = v8;
  }
  return result;
}
