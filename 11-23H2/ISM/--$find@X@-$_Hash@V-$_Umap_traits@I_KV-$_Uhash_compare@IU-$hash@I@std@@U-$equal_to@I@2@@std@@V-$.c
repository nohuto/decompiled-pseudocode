/*
 * XREFs of ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800985C8
 * Callers:
 *     ?OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x180099270 (-OnWindowRemoved@ViewHierarchyWithWindowManager@@AEAAJUWindowWatcher@WindowManagement@Applicatio.c)
 *     ?OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E83B4 (-OnAttachDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     ?OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV?$vector@UTouchInjectionContact@Input@Internal@UI@Windows@@V?$allocator@UTouchInjectionContact@Input@Internal@UI@Windows@@@std@@@std@@@Z @ 0x1800E8538 (-OnInputReport@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@AEAV-$vector@UTouc.c)
 *     ?OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z @ 0x1800E86C0 (-OnRemoveDevice@InjectionRawInputProvider@@QEAAJPEAVInputInjectionClientProxy@@@Z.c)
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1801095F8 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 *     ?CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x1801531B0 (-CancelOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetClientProxy@@IPEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180153CB0 (-StartAnimation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@IPEBQEAVBamoAnimationTargetCl.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18015F030 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x180168BCC (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000E920 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@AEBI_K@Z @ 0x1800982E0 (--$_Find_last@I@-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
        _QWORD *a1,
        _QWORD *a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rax
  _DWORD *v6; // r11
  __int64 v7; // r8
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  appended = std::_Fnv1a_append_bytes((__int64)a1, a3, 4uLL);
  v7 = std::_Hash<std::_Umap_traits<unsigned int,PointerInputMediator::ContactData,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,PointerInputMediator::ContactData>>,0>>::_Find_last<unsigned int>(
         a1,
         v9,
         v6,
         appended)[1];
  if ( !v7 )
    v7 = a1[1];
  *a2 = v7;
  return a2;
}
