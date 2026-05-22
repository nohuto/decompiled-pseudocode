/*
 * XREFs of ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18016EC50
 * Callers:
 *     ?StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z @ 0x1801681A0 (-StartManualDrag@ManualDragAreaClientProxy@@MEAAJI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ @ 0x18005A98C (--1-$ComPtr@VNonBamoInputDeliveryServer@@@WRL@Microsoft@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x1800ADE0C (--1-$ComPtr@VInputInjectionClientProxy@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800E6314 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18014C2FC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18016879C (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180169394 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x180169CBC (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18016A21C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016ADA8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18016ADF8 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualDragAreaClientProxy@@@Z @ 0x18016AEB4 (--4-$ComPtr@VManualDragAreaClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVManualDragAreaClientProx.c)
 *     ?CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z @ 0x18016B32C (-CancelManualDrag@DragNDropProcessor@@AEAAXKPEAVManualDragAreaClientProxy@@@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18016C694 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18016D0C0 (-ManualDragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801C8F8C (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801C8FFC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall DragNDropProcessor::StartManualDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoManualDragAreaClientProxy *a3)
{
  __int64 v6; // rdi
  struct tagPOINT *v7; // r12
  unsigned int v8; // esi
  struct tagPOINT v9; // rbx
  _QWORD *v10; // rbx
  __int64 v11; // r15
  struct InputSite *v12; // r14
  struct InputSite *v13; // rsi
  unsigned int v14; // r12d
  unsigned int v15; // r13d
  __int64 v16; // rax
  int v17; // eax
  __int64 v18; // r15
  _QWORD *v19; // rax
  void *v20; // r13
  __int64 v21; // [rsp+50h] [rbp-B0h]
  char v22; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-88h] BYREF
  unsigned int InputType; // [rsp+80h] [rbp-80h]
  struct InputSite *v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  __int64 v27; // [rsp+98h] [rbp-68h] BYREF
  struct InputSite *v28; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD *v29; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v30; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-40h] BYREF
  void *v32; // [rsp+C8h] [rbp-38h] BYREF
  struct tagPOINT v33; // [rsp+D0h] [rbp-30h] BYREF
  int v34[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+E0h] [rbp-20h] BYREF
  float *v36; // [rsp+E8h] [rbp-18h]
  _QWORD *v37; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+10h]
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v32 = a3;
  v36 = (float *)this;
  v23 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 6,
    &v30,
    (const unsigned __int8 *)&v23);
  v6 = v30;
  if ( (_QWORD)v30 == *((_QWORD *)this + 7)
    || (v37 = (_QWORD *)((char *)this + 240),
        *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
           (_QWORD *)this + 30,
           &v30,
           (const unsigned __int8 *)&v23) != *((_QWORD *)this + 31)) )
  {
    DragNDropProcessor::CancelManualDrag(this, a2, a3);
  }
  else
  {
    v7 = (struct tagPOINT *)(v6 + 28);
    v33 = *(struct tagPOINT *)(v6 + 28);
    v27 = 0LL;
    v31 = 0LL;
    v29 = 0LL;
    v26 = 0LL;
    v28 = 0LL;
    v25 = 0LL;
    v8 = *(_DWORD *)(v6 + 36);
    v9 = *(struct tagPOINT *)(v6 + 20);
    v30 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a3 + 1) + 40LL))((char *)a3 + 8);
    if ( (int)DragNDropProcessor::HitTest(
                (__int64)this,
                v9,
                v8,
                &v30,
                1,
                0LL,
                &v33,
                &v27,
                &v31,
                0LL,
                &v29,
                &v26,
                (__int64 *)&v28,
                (__int64 *)&v25) >= 0
      && (v10 = v29) != 0LL
      && (v11 = v26) != 0 )
    {
      v12 = v25;
      PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v25, *v7);
      v13 = v28;
      *(struct tagPOINT *)v34 = PointerManipulationHelper::GetPositionRelativeToSite(v28, *v7);
      InputType = PointerManipulationHelper::GetInputType(*(unsigned int *)(v6 + 36));
      *(_QWORD *)&v30 = (*(__int64 (__fastcall **)(_QWORD *))(v10[1] + 32LL))(v10 + 1);
      v14 = *(_DWORD *)(v6 + 40);
      v15 = v23;
      v16 = (*(__int64 (__fastcall **)(float *))(*(_QWORD *)v36 + 48LL))(v36);
      InputETW::InputGesture::ManualDragStarted(
        v16,
        v15,
        (int *)&PositionRelativeToSite,
        (int *)&v33,
        v34,
        v27,
        v14,
        v31,
        InputType,
        v30,
        v21);
      v38 = 0LL;
      v39 = 0LL;
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct tagPOINT *, __int64))(*(_QWORD *)(v11 + 8) + 24LL))(
              v11 + 8,
              v23,
              &PositionRelativeToSite,
              v6 + 28);
      if ( v17 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x29F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\dragndrop\\system\\lib\\dragn"
               "dropprocessor.cpp",
          (const char *)(unsigned int)v17,
          (int)v34);
      v27 = 0LL;
      std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
        v37,
        (__int64)&v30,
        (unsigned __int8 *)&v23,
        &v27);
      v18 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         v36 + 28,
                         (__int64)&v37,
                         (unsigned __int8 *)&v23);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v18 + 32), &v26);
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v18 + 24), &v29);
      Microsoft::WRL::ComPtr<ManualDragAreaClientProxy>::operator=(
        (__int64 *)(v18 + 40),
        (void (__fastcall ***)(_QWORD))v32);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v18 + 56), (__int64 *)&v25);
      v22 = 1;
      v19 = std::make_unique<DragGestureTracker,bool,0>(&v32, (bool *)&v22);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v18 + 64),
        v19);
      v20 = v32;
      if ( v32 )
      {
        if ( *((_QWORD *)v32 + 2) )
          DestroyInteractionContext();
        operator delete(v20);
      }
      **(_DWORD **)(v18 + 64) = 4;
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v18 + 56), (__int64 *)&v25);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v18 + 48), (__int64 *)&v28);
      *(_QWORD *)(v18 + 72) = *(_QWORD *)(v6 + 20);
      if ( v12 )
        (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v12 + 16LL))(v12);
      if ( v13 )
        (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v13 + 16LL))(v13);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v26);
      (*(void (__fastcall **)(_QWORD *))(*v10 + 8LL))(v10);
    }
    else
    {
      DragNDropProcessor::CancelManualDrag(this, v23, a3);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v25);
      Microsoft::WRL::ComPtr<NonBamoInputDeliveryServer>::~ComPtr<NonBamoInputDeliveryServer>(&v28);
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<InputInjectionClientProxy>::~ComPtr<InputInjectionClientProxy>(&v29);
    }
  }
}
