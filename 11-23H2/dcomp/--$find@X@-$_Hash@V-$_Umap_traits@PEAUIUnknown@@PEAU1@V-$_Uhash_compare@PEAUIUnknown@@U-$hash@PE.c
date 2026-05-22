/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAUIUnknown@@PEAU1@@std@@@std@@@std@@@1@AEBQEAUIUnknown@@@Z @ 0x18008010C
 * Callers:
 *     ?Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUnknown@@1_N@Z @ 0x18008002C (-Configure@MapWeakPeerForWeakTargetBase@Composition@UI@Windows@@QEAAXAEAVCReadWriteLock@@PEAUIUn.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180078570 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@PEAUIUnknown@@@?$_Hash@V?$_Umap_traits@PEAUIUnknown@@PEAU1@V?$_Uhash_compare@PEAUIUnknown@@U?$hash@PEAUIUnknown@@@std@@U?$equal_to@PEAUIUnknown@@@3@@std@@V?$allocator@U?$pair@QEAUIUnknown@@PEAU1@@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAUIUnknown@@PEAU1@@std@@PEAX@std@@@1@AEBQEAUIUnknown@@_K@Z @ 0x180080168 (--$_Find_last@PEAUIUnknown@@@-$_Hash@V-$_Umap_traits@PEAUIUnknown@@PEAU1@V-$_Uhash_compare@PEAUI.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::find<void>(
        __int64 a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  __int64 appended; // rax
  __int64 v6; // r11
  __int64 v7; // r8
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  v7 = *(_QWORD *)(std::_Hash<std::_Umap_traits<IUnknown *,IUnknown *,std::_Uhash_compare<IUnknown *,std::hash<IUnknown *>,std::equal_to<IUnknown *>>,std::allocator<std::pair<IUnknown * const,IUnknown *>>,0>>::_Find_last<IUnknown *>(
                     a1,
                     v9,
                     v6,
                     appended)
                 + 8);
  if ( !v7 )
    v7 = *(_QWORD *)(a1 + 8);
  *a2 = v7;
  return a2;
}
