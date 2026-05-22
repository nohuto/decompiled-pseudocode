/*
 * XREFs of ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@2@PEAU32@@Z @ 0x18013E998
 * Callers:
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18001F960 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Unchecked_erase(
        __int64 a1,
        unsigned __int8 *a2)
{
  unsigned __int64 appended; // rax
  _QWORD *v4; // r11
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rsi
  void *v9; // rcx
  __int64 v10; // rcx

  appended = std::_Fnv1a_append_bytes(a1, a2 + 16, 8uLL);
  v5 = 2 * (appended & v4[6]);
  v6 = v4[3];
  if ( *(unsigned __int8 **)(v6 + 16 * (appended & v4[6]) + 8) == a2 )
  {
    if ( *(unsigned __int8 **)(v6 + 16 * (appended & v4[6])) == a2 )
    {
      v7 = v4[1];
      *(_QWORD *)(v6 + 8 * v5) = v7;
    }
    else
    {
      v7 = *((_QWORD *)a2 + 1);
    }
    *(_QWORD *)(v6 + 8 * v5 + 8) = v7;
  }
  else if ( *(unsigned __int8 **)(v6 + 16 * (appended & v4[6])) == a2 )
  {
    *(_QWORD *)(v6 + 16 * (appended & v4[6])) = *(_QWORD *)a2;
  }
  v8 = *(_QWORD *)a2;
  --v4[2];
  **((_QWORD **)a2 + 1) = v8;
  *(_QWORD *)(v8 + 8) = *((_QWORD *)a2 + 1);
  v9 = (void *)*((_QWORD *)a2 + 5);
  if ( v9 )
  {
    std::_Deallocate<16,0>(v9, (*((_QWORD *)a2 + 7) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)a2 + 5) = 0LL;
    *((_QWORD *)a2 + 6) = 0LL;
    *((_QWORD *)a2 + 7) = 0LL;
  }
  v10 = *((_QWORD *)a2 + 3);
  if ( v10 )
  {
    *((_QWORD *)a2 + 3) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  std::_Deallocate<16,0>(a2, 0x40uLL);
  return v8;
}
