/*
 * XREFs of ?IsProcessIDInSameCompositeAppAsView@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B4AB8
 * Callers:
 *     ?IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@IIIII@Z @ 0x18005EB90 (-IsDelegationSourceInForeground@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@III.c)
 *     ?AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B3AAC (-AreProcessIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II.c)
 *     ?SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z @ 0x1800B56B0 (-SetInputDelegation@ForegroundManager@@QEAAXPEAVInputSite@@III@Z.c)
 * Callees:
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18001BA80 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18001E5E4 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@.c)
 *     ??$count@X@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800B31A8 (--$count@X@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$alloc.c)
 *     ?AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z @ 0x1800B3B50 (-AreViewIdsInSameCompositeApp@ForegroundManager@@AEAA_NAEAVViewHierarchyWithWindowManager@@II@Z.c)
 */

char __fastcall ForegroundManager::IsProcessIDInSameCompositeAppAsView(
        ForegroundManager *this,
        struct ViewHierarchyWithWindowManager *a2,
        unsigned int a3,
        int a4)
{
  char *v4; // rbx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  unsigned int ViewIdFromWindowId; // eax
  ForegroundManager *v10; // rcx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF
  int v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = a4;
  v4 = (char *)this + 24;
  if ( std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::count<void>(
         (__int64)this + 24,
         (const unsigned __int8 *)&v13) )
  {
    v7 = *(_QWORD **)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,std::unordered_set<unsigned __int64>,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,std::unordered_set<unsigned __int64>>>,0>>::_Try_emplace<unsigned int const &,>(
                                   (__int64)v4,
                                   (__int64)v12,
                                   &v13)
                    + 32LL);
    for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
    {
      ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(a2, i[2]);
      if ( ViewIdFromWindowId && ForegroundManager::AreViewIdsInSameCompositeApp(v10, a2, a3, ViewIdFromWindowId) )
        return 1;
    }
  }
  return 0;
}
