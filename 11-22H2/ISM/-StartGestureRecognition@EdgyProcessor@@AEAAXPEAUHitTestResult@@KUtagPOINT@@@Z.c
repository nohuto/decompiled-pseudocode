/*
 * XREFs of ?StartGestureRecognition@EdgyProcessor@@AEAAXPEAUHitTestResult@@KUtagPOINT@@@Z @ 0x180177EFC
 * Callers:
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176D20 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800E6314 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014C2FC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016ADA8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VEdgyRecognizer@@@std@@$0A@@?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180174530 (--$-4U-$default_delete@VEdgyRecognizer@@@std@@$0A@@-$unique_ptr@VEdgyRecognizer@@U-$default_dele.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180174948 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_c.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUEdgyNotificationMessageInfo@EdgyProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180174AC0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUEdgyNotificationMessageInfo@EdgyProcessor@@V-$.c)
 *     ??$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA?AV?$unique_ptr@VEdgyRecognizer@@U?$default_delete@VEdgyRecognizer@@@std@@@0@$$QEAPEAVBamoEdgyGestureRecognitionConfigurationProxy@@@Z @ 0x180174DCC (--$make_unique@VEdgyRecognizer@@PEAVBamoEdgyGestureRecognitionConfigurationProxy@@$0A@@std@@YA-A.c)
 *     ??_GEdgyRecognizer@@QEAAPEAXI@Z @ 0x18017585C (--_GEdgyRecognizer@@QEAAPEAXI@Z.c)
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@3@Z @ 0x1801766AC (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyDragSourceClientProxy@@PEAPEAVBam.c)
 *     ?HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801768F4 (-HitTest@EdgyProcessor@@AEAAXPEAUHitTestResult@@PEAPEAVBamoEdgyNotificationSourceClientProxy@@PE.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall EdgyProcessor::StartGestureRecognition(
        EdgyProcessor *this,
        struct HitTestResult *a2,
        int a3,
        struct tagPOINT a4)
{
  float *v7; // rbx
  EdgyProcessor *v8; // rcx
  __int64 v9; // rsi
  struct BamoEdgyDragSourceClientProxy *v10; // rbx
  __int64 v11; // rcx
  EdgyRecognizer **v12; // rax
  EdgyProcessor *v13; // rcx
  __int64 v14; // rdi
  struct BamoEdgyDragSourceClientProxy *v15; // rbx
  __int64 v16; // rcx
  EdgyRecognizer **v17; // rax
  struct InputSite *v18; // [rsp+30h] [rbp-40h] BYREF
  struct InputSite *v19; // [rsp+38h] [rbp-38h] BYREF
  struct BamoEdgyDragSourceClientProxy *v20; // [rsp+40h] [rbp-30h] BYREF
  EdgyRecognizer *v21; // [rsp+48h] [rbp-28h] BYREF
  EdgyRecognizer *v22; // [rsp+50h] [rbp-20h] BYREF
  _BYTE v23[24]; // [rsp+58h] [rbp-18h] BYREF
  struct BamoDragManagerClientProxy *v24; // [rsp+A0h] [rbp+30h] BYREF
  int v25; // [rsp+B0h] [rbp+40h] BYREF

  v25 = a3;
  v7 = (float *)((char *)this + 352);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 44,
    &v24,
    (const unsigned __int8 *)&v25);
  if ( v24 == *((struct BamoDragManagerClientProxy **)this + 45) )
  {
    v20 = 0LL;
    v24 = 0LL;
    v19 = 0LL;
    v18 = 0LL;
    EdgyProcessor::HitTest(v8, a2, &v20, &v24, &v19, &v18);
    v9 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                      v7,
                      (__int64)v23,
                      (unsigned __int8 *)&v25);
    v10 = v20;
    if ( v20 && v24 )
    {
      if ( *(struct BamoEdgyDragSourceClientProxy **)(v9 + 24) != v20 )
      {
        v21 = v20;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v21);
        v11 = *(_QWORD *)(v9 + 24);
        *(_QWORD *)(v9 + 24) = v10;
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      }
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v9 + 32), &v24);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v9 + 40), (__int64 *)&v19);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v9 + 48), (__int64 *)&v18);
      *(struct tagPOINT *)(v9 + 64) = a4;
      v21 = (EdgyRecognizer *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v10 + 1) + 40LL))((__int64)v10 + 8);
      v12 = (EdgyRecognizer **)std::make_unique<EdgyRecognizer,BamoEdgyGestureRecognitionConfigurationProxy *,0>(
                                 &v22,
                                 &v21);
      std::unique_ptr<EdgyRecognizer>::operator=<std::default_delete<EdgyRecognizer>,0>(
        (EdgyRecognizer **)(v9 + 56),
        v12);
      if ( v22 )
        EdgyRecognizer::`scalar deleting destructor'(v22);
    }
    if ( v18 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v19 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v19 + 16LL))(v19);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v24);
    if ( v10 )
      (*(void (__fastcall **)(struct BamoEdgyDragSourceClientProxy *))(*(_QWORD *)v10 + 8LL))(v10);
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 52,
    &v24,
    (const unsigned __int8 *)&v25);
  if ( v24 == *((struct BamoDragManagerClientProxy **)this + 53) )
  {
    v20 = 0LL;
    v24 = 0LL;
    EdgyProcessor::HitTest(v13, a2, &v20, &v24);
    v14 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyNotificationMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyNotificationMessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                       (float *)this + 104,
                       (__int64)v23,
                       (unsigned __int8 *)&v25);
    v15 = v20;
    if ( v20 )
    {
      if ( *(struct BamoEdgyDragSourceClientProxy **)(v14 + 24) != v20 )
      {
        v22 = v20;
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v22);
        v16 = *(_QWORD *)(v14 + 24);
        *(_QWORD *)(v14 + 24) = v15;
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
      }
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v14 + 32), (__int64 *)&v24);
      v22 = (EdgyRecognizer *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v15 + 1) + 40LL))((__int64)v15 + 8);
      v17 = (EdgyRecognizer **)std::make_unique<EdgyRecognizer,BamoEdgyGestureRecognitionConfigurationProxy *,0>(
                                 &v21,
                                 &v22);
      std::unique_ptr<EdgyRecognizer>::operator=<std::default_delete<EdgyRecognizer>,0>(
        (EdgyRecognizer **)(v14 + 40),
        v17);
      if ( v21 )
        EdgyRecognizer::`scalar deleting destructor'(v21);
    }
    if ( v24 )
      (*(void (__fastcall **)(struct BamoDragManagerClientProxy *))(*(_QWORD *)v24 + 16LL))(v24);
    if ( v15 )
      (*(void (__fastcall **)(struct BamoEdgyDragSourceClientProxy *))(*(_QWORD *)v15 + 8LL))(v15);
  }
}
