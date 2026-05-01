/*
 * XREFs of ?_Tidy@?$vector@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1802D29C0
 * Callers:
 *     ??1?$vector@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1803E9848 (--1-$vector@_KV-$allocator@_K@std@@@std@@QEAA@XZ.c)
 *     ??1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ @ 0x1803E98E8 (--1SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@XZ.c)
 *     ?CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x1803E9D1C (-CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA.c)
 *     ?EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V?$vector@_KV?$allocator@_K@std@@@std@@@Z @ 0x18066AB0C (-EndGuidedSnapAssist@CSnapAssistControllerBase@@IEAAXW4GuidedSnapAssistResult@1@V-$vector@_KV-$a.c)
 *     ?SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Internal@Windows@@IPEA_K@Z @ 0x18066B9B0 (-SnapAssistCompleted@CSnapAssistControllerBase@@UEAAJW4SnapAssistUsage@WindowSnapping@Shell@Inte.c)
 *     ?v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ @ 0x18076F9B0 (-v_DismissView@XamlSnapAssistViewHost@@MEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned __int64>::_Tidy(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
