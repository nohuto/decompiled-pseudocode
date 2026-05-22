/*
 * XREFs of ?StartGestureRecognition@ResizeProcessor@@AEAAXPEAUHitTestResult@@K@Z @ 0x180146FA8
 * Callers:
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180145F90 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013B154 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18013CE08 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013D9B8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801441F8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare.c)
 *     ?HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windows@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801458E8 (-HitTest@ResizeProcessor@@AEAAXPEAUHitTestResult@@PEAW4InputResizeRegion@Input@Internal@UI@Windo.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall ResizeProcessor::StartGestureRecognition(ResizeProcessor *this, struct HitTestResult *a2, int a3)
{
  ResizeProcessor *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _DWORD **v9; // rdi
  void *v10; // rbx
  struct InputSite *v11; // [rsp+30h] [rbp-20h] BYREF
  void *v12; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v13[16]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+70h] [rbp+20h] BYREF
  int v15; // [rsp+80h] [rbp+30h] BYREF
  struct BamoResizeControllerClientProxy *v16; // [rsp+88h] [rbp+38h] BYREF

  v15 = a3;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 3,
    &v14,
    (const unsigned __int8 *)&v15);
  if ( v14 == *((_QWORD *)this + 4) )
  {
    v16 = 0LL;
    v11 = 0LL;
    LODWORD(v14) = 0;
    ResizeProcessor::HitTest(v5, a2, (enum Windows::UI::Internal::Input::InputResizeRegion *)&v14, &v16, &v11);
    v6 = std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
           (float *)this + 6,
           (__int64)v13,
           (unsigned __int8 *)&v15);
    if ( v16 )
    {
      v7 = *(_QWORD *)v6;
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
        (__int64 (__fastcall ****)(_QWORD))(*(_QWORD *)v6 + 24LL),
        &v16);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v7 + 40), (__int64 *)&v11);
      *(_DWORD *)(v7 + 56) = v14;
      LOBYTE(v14) = 1;
      v8 = std::make_unique<DragGestureTracker,bool,0>(&v12, (bool *)&v14);
      v9 = (_DWORD **)(v7 + 48);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v7 + 48),
        v8);
      v10 = v12;
      if ( v12 )
      {
        if ( *((_QWORD *)v12 + 2) )
          DestroyInteractionContext();
        operator delete(v10);
      }
      **v9 = 2;
    }
    else
    {
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)(*(_QWORD *)v6 + 24LL));
    }
    if ( v11 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v11 + 16LL))(v11);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v16);
  }
}
