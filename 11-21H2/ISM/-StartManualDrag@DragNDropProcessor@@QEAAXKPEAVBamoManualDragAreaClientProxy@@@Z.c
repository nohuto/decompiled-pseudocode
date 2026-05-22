/*
 * XREFs of ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180141AC8
 * Callers:
 *     ?StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z @ 0x180139F50 (-StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013B154 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013BF44 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x18013C840 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18013CE08 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013D9B8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA08 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualDragAreaClientProxy@@@Z @ 0x18013DAD4 (--4-$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualDragAreaClientProx.c)
 *     ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z @ 0x18013DEDC (-CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18013F578 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x18013FFF0 (-ManualDragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Window.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x18019D4FC (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall DragNDropProcessor::StartManualDrag(
        DragNDropProcessor **this,
        unsigned int a2,
        struct BamoManualDragAreaClientProxy *a3)
{
  DragNDropProcessor *v6; // rcx
  DragNDropProcessor *v7; // rdi
  DragNDropProcessor **v8; // rax
  struct tagPOINT *v9; // r12
  unsigned int v10; // esi
  struct tagPOINT v11; // rbx
  int v12; // eax
  DragNDropProcessor *v13; // rcx
  struct InputSite *v14; // rsi
  struct InputSite *v15; // r14
  _QWORD *v16; // rbx
  __int64 v17; // r15
  unsigned int InputType; // r12d
  int v19; // eax
  __int64 v20; // r15
  _QWORD *v21; // rax
  void *v22; // r13
  __int64 v23; // [rsp+78h] [rbp-59h] BYREF
  struct InputSite *v24; // [rsp+80h] [rbp-51h] BYREF
  __int64 v25; // [rsp+88h] [rbp-49h] BYREF
  struct tagPOINT v26; // [rsp+90h] [rbp-41h] BYREF
  _QWORD *v27; // [rsp+98h] [rbp-39h] BYREF
  struct InputSite *v28; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-29h] BYREF
  int v30[2]; // [rsp+B0h] [rbp-21h] BYREF
  _QWORD v31[2]; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v32; // [rsp+C8h] [rbp-9h] BYREF
  float *v33; // [rsp+D8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  DragNDropProcessor *v35; // [rsp+138h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+140h] [rbp+6Fh] BYREF
  void *v37; // [rsp+148h] [rbp+77h] BYREF
  DragNDropProcessor *v38; // [rsp+150h] [rbp+7Fh] BYREF

  v37 = a3;
  v36 = a2;
  v35 = (DragNDropProcessor *)this;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    this + 6,
    &v38,
    (const unsigned __int8 *)&v36);
  v7 = v38;
  if ( v38 == this[7]
    || (v33 = (float *)(this + 30),
        v8 = (DragNDropProcessor **)std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
                                      this + 30,
                                      &v38,
                                      (const unsigned __int8 *)&v36),
        v6 = this[31],
        *v8 != v6) )
  {
    DragNDropProcessor::CancelManualDrag(v6, a2, a3);
  }
  else
  {
    v9 = (struct tagPOINT *)((char *)v7 + 28);
    v26 = *(struct tagPOINT *)((char *)v7 + 28);
    v23 = 0LL;
    v29 = 0LL;
    v27 = 0LL;
    v25 = 0LL;
    v28 = 0LL;
    v24 = 0LL;
    v10 = *((_DWORD *)v7 + 9);
    v11 = *(struct tagPOINT *)((char *)v7 + 20);
    v32 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 40LL))((char *)a3 + 8);
    v12 = DragNDropProcessor::HitTest(
            (__int64)this,
            v11,
            v10,
            &v32,
            1,
            0LL,
            &v26,
            &v23,
            &v29,
            0LL,
            (__int64 *)&v27,
            &v25,
            (__int64 *)&v28,
            (__int64 *)&v24);
    v14 = v28;
    v15 = v24;
    v16 = v27;
    if ( v12 >= 0 && v27 && (v17 = v25) != 0 )
    {
      v31[0] = PointerManipulationHelper::GetPositionRelativeToSite(v24, *v9);
      *(struct tagPOINT *)v30 = PointerManipulationHelper::GetPositionRelativeToSite(v14, *v9);
      InputType = PointerManipulationHelper::GetInputType(*((unsigned int *)v7 + 9));
      LODWORD(v38) = InputType;
      *(_QWORD *)&v32 = (*(__int64 (__fastcall **)(_QWORD *))(v16[1] + 32LL))(v16 + 1);
      InputETW::DragNDrop::ManualDragStarted(
        v36,
        (int *)v31,
        (int *)&v26,
        v30,
        v23,
        *((_DWORD *)v7 + 10),
        v29,
        InputType,
        v32);
      v26 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *, __int64))(*(_QWORD *)(v17 + 8) + 24LL))(
              v17 + 8,
              v36,
              v31,
              (__int64)v7 + 28);
      if ( v19 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x295,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
          (const char *)(unsigned int)v19,
          (int)v30);
      v23 = 0LL;
      std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
        v33,
        (__int64)&v32,
        (unsigned __int8 *)&v36,
        &v23);
      v20 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         (float *)v35 + 28,
                         (__int64)&v33,
                         (unsigned __int8 *)&v36);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v20 + 32), &v25);
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v20 + 24), &v27);
      Microsoft::WRL::ComPtr<ManualDragAreaClientProxy>::operator=(
        (__int64 *)(v20 + 40),
        (void (__fastcall ***)(_QWORD))v37);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v20 + 56), (__int64 *)&v24);
      LOBYTE(v35) = 1;
      v21 = std::make_unique<DragGestureTracker,bool,0>(&v37, (bool *)&v35);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v20 + 64),
        v21);
      v22 = v37;
      if ( v37 )
      {
        if ( *((_QWORD *)v37 + 2) )
          DestroyInteractionContext();
        operator delete(v22);
      }
      **(_DWORD **)(v20 + 64) = 4;
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v20 + 56), (__int64 *)&v24);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v20 + 48), (__int64 *)&v28);
      *(_QWORD *)(v20 + 72) = *(_QWORD *)((char *)v7 + 20);
    }
    else
    {
      DragNDropProcessor::CancelManualDrag(v13, v36, a3);
    }
    if ( v15 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v14 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v14 + 16LL))(v14);
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v25);
    if ( v16 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 8LL))(v16);
  }
}
