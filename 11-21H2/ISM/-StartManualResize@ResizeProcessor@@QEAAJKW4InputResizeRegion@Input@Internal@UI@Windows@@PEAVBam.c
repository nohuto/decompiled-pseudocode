/*
 * XREFs of ?StartManualResize@ResizeProcessor@@QEAAJKW4InputResizeRegion@Input@Internal@UI@Windows@@PEAVBamoManualResizeAreaClientProxy@@@Z @ 0x1801471F0
 * Callers:
 *     ?StartManualResize@ManualResizeAreaClientProxy@@MEAAJIW4InputResizeRegion@Input@Internal@UI@Windows@@@Z @ 0x180142F90 (-StartManualResize@ManualResizeAreaClientProxy@@MEAAJIW4InputResizeRegion@Input@Internal@UI@Wind.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013B154 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C0B0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18013CE08 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013D9B8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x1801441F8 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@ResizeProcessor@@V-$_Uhash_compare.c)
 *     ??4?$ComPtr@VManualResizeAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualResizeAreaClientProxy@@@Z @ 0x180144BF4 (--4-$ComPtr@VManualResizeAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualResizeAreaClient.c)
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x1801450C4 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAVBamoResizeControllerClientProxy@@PEAPEAVInputSite@@@Z @ 0x1801455A4 (-GetControllerForManualResize@ResizeProcessor@@AEAAXPEAVBamoManualResizeAreaClientProxy@@PEAPEAV.c)
 *     ?ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180145CA8 (-ManualResizeCancelled@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z @ 0x180145E14 (-ManualResizeStarted@Resize@InputETW@@SAXKIIPEAUtagPOINT@@0@Z.c)
 *     ?StartManualResize@Resize@InputETW@@SAXKI@Z @ 0x1801470FC (-StartManualResize@Resize@InputETW@@SAXKI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ResizeProcessor::StartManualResize(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  struct BamoResizeControllerClientProxy *v7; // rsi
  struct InputSite *v8; // rdi
  ResizeProcessor *v9; // rcx
  WINBOOL v10; // r8d
  struct tagPOINT *v11; // rbx
  bool v12; // cl
  int v13; // eax
  unsigned int x; // r14d
  struct tagPOINT v15; // rbx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _DWORD **v18; // rsi
  void *v19; // rbx
  int v21; // [rsp+20h] [rbp-60h]
  struct tagPOINT v22; // [rsp+40h] [rbp-40h] BYREF
  struct BamoResizeControllerClientProxy *v23; // [rsp+48h] [rbp-38h] BYREF
  struct InputSite *v24; // [rsp+50h] [rbp-30h] BYREF
  void *v25[2]; // [rsp+58h] [rbp-28h] BYREF
  char v26[24]; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]
  struct tagPOINT *v28; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+48h] BYREF
  struct tagPOINT v30; // [rsp+D8h] [rbp+58h] BYREF

  v29 = a2;
  InputETW::Resize::StartManualResize(a2, a3);
  v7 = 0LL;
  v23 = 0LL;
  v8 = 0LL;
  v24 = 0LL;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)(a1 + 88),
    &v28,
    (const unsigned __int8 *)&v29);
  v11 = v28;
  if ( v28 == *(struct tagPOINT **)(a1 + 96) )
  {
    v12 = 1;
  }
  else
  {
    ResizeProcessor::GetControllerForManualResize(v9, (struct BamoManualResizeAreaClientProxy *)a4, &v23, &v24);
    v8 = v24;
    v12 = v24 == 0LL;
    v7 = v23;
  }
  v22 = 0LL;
  v30 = 0LL;
  if ( v12 )
  {
    InputETW::Resize::ManualResizeCancelled(v29, a3, v10, &v22, &v30);
    *(_BYTE *)(a4 + 64) = 0;
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a4 + 8) + 24LL))(a4 + 8, v29);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\resize\\system\\lib\\resizeareaclientproxy.cpp",
        (const char *)(unsigned int)v13,
        v21);
  }
  else
  {
    x = v11[4].x;
    v15 = v11[3];
    *(struct tagPOINT *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                                      (float *)(a1 + 232),
                                      (__int64)v25,
                                      (unsigned __int8 *)&v29)
                       + 20LL) = v15;
    ResizeProcessor::CreatePointerInfoAndUpdatePositionData((ResizeProcessor *)a1, v29, v15, v8, &v22, &v30);
    InputETW::Resize::ManualResizeStarted(v29, a3, x, &v22, &v30);
    if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *))(*((_QWORD *)v7 + 1) + 24LL))(
           (__int64)v7 + 8,
           v29,
           a3,
           x,
           &v22,
           &v30) >= 0 )
    {
      v16 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,ResizeProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         (float *)(a1 + 24),
                         (__int64)v26,
                         (unsigned __int8 *)&v29);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v16 + 24), &v23);
      Microsoft::WRL::ComPtr<ManualResizeAreaClientProxy>::operator=(
        (__int64 *)(v16 + 32),
        (void (__fastcall ***)(_QWORD))a4);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v16 + 40), (__int64 *)&v24);
      LOBYTE(v28) = 0;
      v17 = std::make_unique<DragGestureTracker,bool,0>(v25, (bool *)&v28);
      v18 = (_DWORD **)(v16 + 48);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v16 + 48),
        v17);
      v19 = v25[0];
      if ( v25[0] )
      {
        if ( *((_QWORD *)v25[0] + 2) )
          DestroyInteractionContext();
        operator delete(v19);
      }
      **v18 = 4;
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v23);
  return 0LL;
}
