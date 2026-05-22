/*
 * XREFs of ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1801475AC
 * Callers:
 *     ?StartResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeControllerClientProxy@@@Z @ 0x180143B90 (-StartResize@ResizeControllerHost@@MEAAJPEAVBamoResizeContextualProcessorStub@@IPEAVBamoResizeCo.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013B154 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C0B0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18013CE08 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013D9B8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801441F8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare.c)
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x1801450C4 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?GetResizeControllerInputSite@ResizeProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVBamoResizeControllerClientProxy@@@Z @ 0x180145810 (-GetResizeControllerInputSite@ResizeProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@PEAVB.c)
 *     ?ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801465C0 (-ResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x1801469A4 (-ResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?StartResize@Resize@InputETW@@SAXK@Z @ 0x18014747C (-StartResize@Resize@InputETW@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ResizeProcessor::StartResize(
        ResizeProcessor *this,
        unsigned int a2,
        struct BamoResizeControllerClientProxy *a3)
{
  struct tagPOINT *v5; // rbx
  bool v6; // di
  __int64 v7; // rcx
  __int64 v8; // rdx
  WINBOOL v9; // r8d
  char v10; // cl
  unsigned int x; // edi
  struct tagPOINT v12; // rbx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  _DWORD **v15; // rdi
  void *v16; // rbx
  struct InputSite *v17; // rcx
  struct InputSite *v19; // [rsp+40h] [rbp-30h] BYREF
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+48h] [rbp-28h] BYREF
  void *v21[2]; // [rsp+50h] [rbp-20h] BYREF
  char v22[16]; // [rsp+60h] [rbp-10h] BYREF
  struct tagPOINT *v23; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+38h] BYREF
  struct tagPOINT v25; // [rsp+B0h] [rbp+40h] BYREF
  struct tagPOINT v26; // [rsp+B8h] [rbp+48h] BYREF

  v24 = a2;
  InputETW::Resize::StartResize(a2);
  v20 = (__int64 (__fastcall ***)(_QWORD))a3;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v20);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 11,
    &v23,
    (const unsigned __int8 *)&v24);
  v5 = v23;
  v6 = v23 == *((struct tagPOINT **)this + 12);
  ResizeProcessor::GetResizeControllerInputSite(v7, (__int64 *)&v19, (__int64 *)a3);
  v10 = 1;
  if ( v19 )
    v10 = v6;
  v26.x = 0;
  v26.y = 0;
  v25.x = 0;
  v25.y = 0;
  if ( v10 )
  {
    InputETW::Resize::ResizeCancelled(v24, v8, v9, &v26, &v25);
    (*(void (__fastcall **)(char *, _QWORD, _QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *))(*((_QWORD *)a3 + 1)
                                                                                                 + 48LL))(
      (char *)a3 + 8,
      v24,
      0LL,
      0LL,
      &v26,
      &v25);
  }
  else
  {
    x = v5[4].x;
    v12 = v5[3];
    *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                                      (float *)this + 58,
                                      (__int64)v21,
                                      (unsigned __int8 *)&v24)
                       + 20LL) = v12;
    ResizeProcessor::CreatePointerInfoAndUpdatePositionData(this, v24, v12, v19, &v26, &v25);
    InputETW::Resize::ResizeStarted(v24, 0, x, &v26, &v25);
    if ( (*(int (__fastcall **)(char *, _QWORD, _QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *))(*((_QWORD *)a3 + 1) + 24LL))(
           (char *)a3 + 8,
           v24,
           0LL,
           x,
           &v26,
           &v25) >= 0 )
    {
      v13 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         (float *)this + 6,
                         (__int64)v22,
                         (unsigned __int8 *)&v24);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v13 + 24), &v20);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v13 + 40), (__int64 *)&v19);
      LOBYTE(v23) = 0;
      v14 = std::make_unique<DragGestureTracker,bool,0>(v21, (bool *)&v23);
      v15 = (_DWORD **)(v13 + 48);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v13 + 48),
        v14);
      v16 = v21[0];
      if ( v21[0] )
      {
        if ( *((_QWORD *)v21[0] + 2) )
          DestroyInteractionContext();
        operator delete(v16);
      }
      **v15 = 4;
    }
  }
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v20);
  return 0LL;
}
