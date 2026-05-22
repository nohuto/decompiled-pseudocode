/*
 * XREFs of ?UnregisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x18012E870
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@X@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@std@@@std@@@1@AEB_K@Z @ 0x1801234C4 (--$find@X@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V-$_Uhas.c)
 *     ?GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z @ 0x18012E588 (-GetClientId@@YA_KPEAVBamoInputObserverClientProxy@@@Z.c)
 *     ?SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ @ 0x18012E83C (-SafeIntOnOverflow@SafeIntErrorPolicy_SafeIntException@utilities@msl@@SAXXZ.c)
 *     ?UpdateObservationState@?$CBaseInputObserverServer@$0M@@@AEAAXXZ @ 0x18012E8F4 (-UpdateObservationState@-$CBaseInputObserverServer@$0M@@@AEAAXXZ.c)
 *     ?_Unchecked_erase@?$_Hash@V?$_Umap_traits@_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@@4@$0A@@std@@@std@@AEAAPEAU?$_List_node@U?$pair@$$CB_KUInputObserverClient@?$CBaseInputObserverServer@$0M@@@@std@@PEAX@2@PEAU32@@Z @ 0x18012EA04 (-_Unchecked_erase@-$_Hash@V-$_Umap_traits@_KUInputObserverClient@-$CBaseInputObserverServer@$0M@.c)
 */

__int64 __fastcall CBaseInputObserverServer<12>::UnregisterObserverClient(
        __int64 a1,
        __int64 a2,
        struct BamoInputObserverClientProxy *a3)
{
  _QWORD *v4; // rdi
  int v5; // eax
  __int64 ClientId; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+48h] [rbp+20h] BYREF

  v4 = (_QWORD *)(a1 + 160);
  ClientId = GetClientId(a3);
  std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::find<void>(
    v4,
    &v8,
    (const unsigned __int8 *)&ClientId);
  if ( v8 != *(_QWORD *)(a1 + 168) )
  {
    if ( *(_DWORD *)(v8 + 32) == 4 )
    {
      v5 = *(_DWORD *)(a1 + 224);
      if ( !v5 )
        msl::utilities::SafeIntErrorPolicy_SafeIntException::SafeIntOnOverflow();
      *(_DWORD *)(a1 + 224) = v5 - 1;
    }
    std::_Hash<std::_Umap_traits<unsigned __int64,CBaseInputObserverServer<12>::InputObserverClient,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,CBaseInputObserverServer<12>::InputObserverClient>>,0>>::_Unchecked_erase(a1 + 160);
    CBaseInputObserverServer<12>::UpdateObservationState(a1);
  }
  return 0LL;
}
