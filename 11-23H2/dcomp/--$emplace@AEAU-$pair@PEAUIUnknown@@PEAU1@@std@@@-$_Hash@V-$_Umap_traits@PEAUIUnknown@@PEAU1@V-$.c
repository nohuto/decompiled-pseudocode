/*
 * XREFs of ??$emplace@AEAU?$pair@PEAUIUnknown@@PEAU1@@std@@@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@PEAUIUnknown@@PEAU1@@1@@Z @ 0x18007FC54
 * Callers:
 *     ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C (-Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUn.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180078570 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@2@_KQEAU32@1@Z @ 0x18007FFD4 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$_Uhash_compare@PEAUIUnkn.c)
 *     ??$_Find_last@PEAUIUnknown@@@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@1@AEBQEAUIUnknown@@_K@Z @ 0x180080168 (--$_Find_last@PEAUIUnknown@@@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$_Uhash_compare@PEAUI.c)
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@@V?$_Uhash_compare@PEBVCompositionBrush@Composition@UI@Windows@@U?$hash@PEBVCompositionBrush@Composition@UI@Windows@@@std@@U?$equal_to@PEBVCompositionBrush@Composition@UI@Windows@@@6@@std@@V?$allocator@PEBVCompositionBrush@Composition@UI@Windows@@@6@$0A@@std@@@std@@IEBA_K_K@Z @ 0x1800A68C0 (-_Desired_grow_bucket_count@-$_Hash@V-$_Uset_traits@PEBVCompositionBrush@Composition@UI@Windows@.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x180160128 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$_Uhash_compare@PEAUIUnknown@@U-$h.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::emplace<std::pair<IUnknown *,IUnknown *> &>(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 appended; // rbp
  const char *v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdx
  float v10; // xmm0_4
  __int64 v11; // rcx
  float v12; // xmm1_4
  __int64 v14; // rax
  __int64 v15; // rax
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, (const unsigned __int8 *const)a3, 8uLL);
  std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::_Find_last<IUnknown *>(
    a1,
    v16,
    a3,
    appended);
  if ( *((_QWORD *)&v16[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v16[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Dwm_Xlength_error(v7);
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v16[0]) + 32));
    *(_QWORD *)(v8 + 16) = *(_QWORD *)a3;
    *(_QWORD *)(v8 + 24) = *(_QWORD *)(a3 + 8);
    v9 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v9 < 0 )
      v10 = (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1))
          + (float)(v9 & 1 | (unsigned int)((unsigned __int64)v9 >> 1));
    else
      v10 = (float)(int)v9;
    v11 = *(_QWORD *)(a1 + 56);
    if ( v11 < 0 )
    {
      v14 = *(_QWORD *)(a1 + 56) & 1LL | (*(_QWORD *)(a1 + 56) >> 1);
      v12 = (float)(int)v14 + (float)(int)v14;
    }
    else
    {
      v12 = (float)(int)v11;
    }
    if ( (float)(v10 / v12) > *(float *)a1 )
    {
      v15 = std::_Hash<std::_Uset_traits<Windows::UI::Composition::CompositionBrush const *,std::_Uhash_compare<Windows::UI::Composition::CompositionBrush const *,std::hash<Windows::UI::Composition::CompositionBrush const *>,std::equal_to<Windows::UI::Composition::CompositionBrush const *>>,std::allocator<Windows::UI::Composition::CompositionBrush const *>,0>>::_Desired_grow_bucket_count(a1);
      std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::_Forced_rehash(
        a1,
        v15);
      v16[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::_Find_last<IUnknown *>(
                            a1,
                            v16,
                            v8 + 16,
                            appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      *(_QWORD *)&v16[0],
                      v8);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
