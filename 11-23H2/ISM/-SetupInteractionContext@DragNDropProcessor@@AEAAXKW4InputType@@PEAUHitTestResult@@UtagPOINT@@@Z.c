/*
 * XREFs of ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18015FEC0
 * Callers:
 *     ?OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18015EFD0 (-OnHitTest@DragNDropProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIn.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013E3CC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015A51C (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B114 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18015BF9C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB28 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB78 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18015E414 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DragNDropProcessor::SetupInteractionContext(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int8 *a4,
        __int64 a5)
{
  float *v8; // rsi
  __int64 result; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  _QWORD *v13; // rax
  void *v14; // r14
  __int64 v15; // [rsp+78h] [rbp-1h] BYREF
  __int64 v16; // [rsp+80h] [rbp+7h] BYREF
  __int64 v17; // [rsp+88h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+90h] [rbp+17h] BYREF
  void *v19[2]; // [rsp+98h] [rbp+1Fh] BYREF
  _BYTE v20[16]; // [rsp+A8h] [rbp+2Fh] BYREF
  __int64 v21; // [rsp+D8h] [rbp+5Fh] BYREF
  int v22; // [rsp+E0h] [rbp+67h] BYREF

  v22 = a2;
  v8 = (float *)(a1 + 112);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)(a1 + 112),
    &v21,
    (const unsigned __int8 *)&v22);
  result = *(_QWORD *)(a1 + 120);
  if ( v21 == result )
  {
    v16 = 0LL;
    v15 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    *(GUID *)v19 = GUID_NULL;
    v10 = DragNDropProcessor::HitTest(a1, 0LL, a3, v19, 0, a4, 0LL, 0LL, 0LL, 0LL, &v16, &v15, &v18, &v17);
    v11 = v16;
    if ( v10 >= 0 )
    {
      v12 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         v8,
                         (__int64)v20,
                         (unsigned __int8 *)&v22);
      LOBYTE(v21) = 1;
      v13 = std::make_unique<DragGestureTracker,bool,0>(v19, (bool *)&v21);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v12 + 64),
        v13);
      v14 = v19[0];
      if ( v19[0] )
      {
        if ( *((_QWORD *)v19[0] + 2) )
          DestroyInteractionContext();
        operator delete(v14);
      }
      if ( v11 && v15 )
      {
        Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v12 + 24), &v16);
        Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=(
          (__int64 (__fastcall ****)(_QWORD))(v12 + 32),
          &v15);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v12 + 48), &v18);
        Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v12 + 56), &v17);
        **(_DWORD **)(v12 + 64) = 2;
        *(_QWORD *)(v12 + 72) = a5;
      }
    }
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    result = Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v15);
    if ( v11 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  }
  return result;
}
