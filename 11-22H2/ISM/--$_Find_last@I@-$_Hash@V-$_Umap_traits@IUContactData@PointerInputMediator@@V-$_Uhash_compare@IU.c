/*
 * XREFs of ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1800AA8C0
 * Callers:
 *     ?OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z @ 0x18001D11C (-OnActivationObjectNotification@ForegroundManager@@AEAAXPEBU_tagActivationObjectNotification@@@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18001E5E4 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@.c)
 *     ?StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z @ 0x180074B34 (-StartOperation@ShellGesturesProcessor@@QEAA_NI_N_K1PEAVDragManagerClientProxy@@@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800AABA8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800AC6D8 (-erase@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1800B3010 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_com.c)
 *     ??$count@X@?$_Hash@V?$_Umap_traits@IV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@@2@$0A@@std@@@std@@QEBA_KAEBI@Z @ 0x1800B31A8 (--$count@X@-$_Hash@V-$_Umap_traits@IV-$unordered_set@_KU-$hash@_K@std@@U-$equal_to@_K@2@V-$alloc.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUTargetingInfo@ForegroundManager@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUTargetingInfo@ForegroundManager@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1800B68C0 (-erase@-$_Hash@V-$_Umap_traits@IUTargetingInfo@ForegroundManager@@V-$_Uhash_compare@IU-$hash@I@s.c)
 *     ??$emplace@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@?$_Hash@V?$_Umap_traits@IV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAI$$QEAV?$unique_ptr@ULegacyDeviceInfo@@U?$default_delete@ULegacyDeviceInfo@@@std@@@1@@Z @ 0x1800F67A4 (--$emplace@IV-$unique_ptr@ULegacyDeviceInfo@@U-$default_delete@ULegacyDeviceInfo@@@std@@@std@@@-.c)
 *     ??$emplace@AEAIUContactData@PointerInputMediator@@@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAUContactData@PointerInputMediator@@@Z @ 0x18010AFB0 (--$emplace@AEAIUContactData@PointerInputMediator@@@-$_Hash@V-$_Umap_traits@IUContactData@Pointer.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x18010C058 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VCustomCursorApplication2@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VCustomCursorApplication2@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18010F6CC (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VCustomCursorApplication2@@@std@@.c)
 *     ?IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z @ 0x180111068 (-IsApplicationPeer@SystemCursorController2@@AEAA_NI@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180111B74 (-erase@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@IU-$hash@.c)
 *     ??$emplace@U?$pair@II@std@@@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@II@1@@Z @ 0x180116BEC (--$emplace@U-$pair@II@std@@@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180160AD0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_.c)
 *     ??$emplace@AEAIV?$shared_ptr@VGestureHandler@@@std@@@?$_Hash@V?$_Umap_traits@IV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAI$$QEAV?$shared_ptr@VGestureHandler@@@1@@Z @ 0x180160D80 (--$emplace@AEAIV-$shared_ptr@VGestureHandler@@@std@@@-$_Hash@V-$_Umap_traits@IV-$shared_ptr@VGes.c)
 *     ??$_Insert_or_assign@AEBIAEA_K@?$unordered_map@I_KU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEBIAEA_K@Z @ 0x180169150 (--$_Insert_or_assign@AEBIAEA_K@-$unordered_map@I_KU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBI_K@std@@PEAX@std@@_N@1@AEBI@Z @ 0x180169280 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to.c)
 *     ??$emplace@AEAIAEA_K@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEAIAEA_K@Z @ 0x180169B94 (--$emplace@AEAIAEA_K@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUActiveContactData@ShellGesturesProcessor@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18017C574 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUActiveContactData@ShellGesturesProcessor@@V-$_.c)
 *     ?OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017D310 (-OnInput@ShellGesturesProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRe.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Find_last<unsigned int>(
        _QWORD *a1,
        _QWORD *a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r9

  v4 = a1[3];
  v5 = a1[1];
  v6 = 2 * (a4 & a1[6]);
  v7 = *(_QWORD *)(v4 + 16 * (a4 & a1[6]) + 8);
  if ( v7 == v5 )
  {
    *a2 = v5;
LABEL_3:
    a2[1] = 0LL;
  }
  else
  {
    while ( *a3 != *(_DWORD *)(v7 + 16) )
    {
      if ( v7 == *(_QWORD *)(v4 + 8 * v6) )
      {
        *a2 = v7;
        goto LABEL_3;
      }
      v7 = *(_QWORD *)(v7 + 8);
    }
    *a2 = *(_QWORD *)v7;
    a2[1] = v7;
  }
  return a2;
}
