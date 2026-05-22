/*
 * XREFs of ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x18016583C
 * Callers:
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180164A90 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013E3CC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015A51C (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18015BF9C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB28 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180162F30 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare.c)
 *     ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x180164504 (-HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ResizeProcessor::StartGestureRecognition(ResizeProcessor *this, struct HitTestResult *a2, int a3)
{
  float *v5; // rdi
  ResizeProcessor *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rbx
  _QWORD *v9; // rax
  _DWORD **v10; // rdi
  void *v11; // rbx
  struct InputSite *v12; // [rsp+30h] [rbp-20h] BYREF
  void *v13; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v14[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+70h] [rbp+20h] BYREF
  int v16; // [rsp+80h] [rbp+30h] BYREF
  struct BamoResizeControllerClientProxy *v17; // [rsp+88h] [rbp+38h] BYREF

  v16 = a3;
  v5 = (float *)((char *)this + 24);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 3,
    &v15,
    (const unsigned __int8 *)&v16);
  if ( v15 == *((_QWORD *)this + 4) )
  {
    v17 = 0LL;
    v12 = 0LL;
    LODWORD(v15) = 0;
    ResizeProcessor::HitTest(v6, a2, (enum Windows::UI::Internal::Input::InputResizeRegion *)&v15, &v17, &v12);
    v7 = std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
           v5,
           (__int64)v14,
           (unsigned __int8 *)&v16);
    if ( v17 )
    {
      v8 = *(_QWORD *)v7;
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
        (__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)v7 + 24LL),
        &v17);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v8 + 40), (__int64 *)&v12);
      *(_DWORD *)(v8 + 56) = v15;
      LOBYTE(v15) = 1;
      v9 = std::make_unique<DragGestureTracker,bool,0>(&v13, (bool *)&v15);
      v10 = (_DWORD **)(v8 + 48);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v8 + 48),
        v9);
      v11 = v13;
      if ( v13 )
      {
        if ( *((_QWORD *)v13 + 2) )
          DestroyInteractionContext();
        operator delete(v11);
      }
      **v10 = 2;
    }
    else
    {
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)(*(_QWORD *)v7 + 24LL));
    }
    if ( v12 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v12 + 16LL))(v12);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v17);
  }
}
