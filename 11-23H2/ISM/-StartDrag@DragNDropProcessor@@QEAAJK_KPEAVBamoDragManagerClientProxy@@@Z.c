/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x1801604AC
 * Callers:
 *     ?StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClientProxy@@W4GestureProcessorType@@@Z @ 0x180061060 (-StartOperation@GestureServices@@MEAAJPEAVBamoGestureServicesStub@@I_N_K2PEAVBamoDragManagerClie.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A8DC (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800D74E8 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1801024F0 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013E3CC (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18015A51C (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18015B114 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x18015BA3C (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18015BF9C (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB28 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18015CB78 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2@Z @ 0x18015D228 (-DragCancelled@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Win.c)
 *     ?DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windows@@2I22@Z @ 0x18015D624 (-DragStarted@InputGesture@InputETW@@SAXPEBGKPEAUtagPOINT@@11_KW4VirtualKeyModifiers@System@Windo.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18015DDB0 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18015E04C (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18015E2DC (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18015E414 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180161398 (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x1801BB6EC (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801BB75C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        void *a3,
        struct BamoDragManagerClientProxy *a4)
{
  char v7; // r14
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // r14d
  struct InputSite *v13; // rdi
  int v14; // esi
  unsigned int InputType; // r12d
  unsigned int v16; // esi
  __int64 v17; // rax
  __int64 v18; // r15
  __int64 v19; // r14
  __int64 v20; // rsi
  _QWORD *v21; // rax
  void *v22; // r14
  struct InputSite *v23; // rcx
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  unsigned int v28; // [rsp+70h] [rbp-90h] BYREF
  char v29; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v30[2]; // [rsp+80h] [rbp-80h] BYREF
  struct tagPOINT v31; // [rsp+88h] [rbp-78h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+90h] [rbp-70h] BYREF
  unsigned int v33; // [rsp+98h] [rbp-68h]
  struct tagPOINT v34; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v35; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v36; // [rsp+B0h] [rbp-50h] BYREF
  struct InputSite *v37; // [rsp+B8h] [rbp-48h] BYREF
  __int64 (__fastcall ***v38)(_QWORD); // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v39; // [rsp+C8h] [rbp-38h]
  struct InputSite *v40; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-28h] BYREF
  void *v42; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v43; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v44; // [rsp+100h] [rbp+0h] BYREF
  __int64 v45; // [rsp+110h] [rbp+10h]

  v42 = a3;
  v28 = a2;
  v38 = (__int64 (__fastcall ***)(_QWORD))a4;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v38);
  v7 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 6,
    &v35,
    (const unsigned __int8 *)&v28);
  v8 = v35;
  if ( v35 == *((_QWORD *)this + 7) )
  {
    v39 = (_QWORD *)((char *)this + 240);
LABEL_4:
    v7 = 1;
    goto LABEL_6;
  }
  v39 = (_QWORD *)((char *)this + 240);
  if ( *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 30,
          &v35,
          (const unsigned __int8 *)&v28) != *((_QWORD *)this + 31) )
    goto LABEL_4;
  v39 = (_QWORD *)((char *)this + 240);
LABEL_6:
  *(_QWORD *)v30 = 0LL;
  v36 = 0LL;
  v35 = 0LL;
  v31 = 0LL;
  v34 = 0LL;
  PositionRelativeToSite = 0LL;
  v44 = 0LL;
  v45 = 0LL;
  if ( v7 )
  {
    v9 = v28;
    v10 = (*(__int64 (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 48LL))(this);
    InputETW::InputGesture::DragCancelled(
      v10,
      v9,
      (int *)&PositionRelativeToSite,
      (int *)&v34,
      (int *)&v31,
      0LL,
      v25,
      0LL);
    (*(void (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, _QWORD, _DWORD, _QWORD))(*((_QWORD *)a4 + 1) + 48LL))(
      (char *)a4 + 8,
      v28,
      &PositionRelativeToSite,
      &v34,
      &v31,
      &v44,
      0LL,
      0,
      0LL);
    std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
      (char *)this + 304,
      &v28);
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 28);
    *(_QWORD *)v30 = v11;
    v33 = *(_DWORD *)(v8 + 40);
    v12 = *(_DWORD *)(v8 + 36);
    DragNDropProcessor::GetDragManagerInputSite((__int64)this, (__int64 *)&v37, v11, v12, (__int64 *)a4, 0LL);
    if ( v37 )
      PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v37, (struct tagPOINT)v11);
    v40 = 0LL;
    v41 = 0LL;
    DragNDropProcessor::GetDragSourceInputSite((__int64)this, v11, v12, (__int64 *)a4, &v41, (__int64 *)&v40);
    v13 = v40;
    if ( v40 )
      v31 = PointerManipulationHelper::GetPositionRelativeToSite(v40, (struct tagPOINT)v11);
    *(float *)&v44 = (float)(int)v30[0];
    *((float *)&v44 + 1) = (float)(int)v30[1];
    v45 = **(_QWORD **)&DragNDropProcessor::GetVelocityForPointerId(this, v30, v28);
    *(_QWORD *)v30 = (char *)a4 + 8;
    v43 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a4 + 1) + 80LL))((char *)a4 + 8);
    v14 = DragNDropProcessor::HitTest(
            (__int64)this,
            (struct tagPOINT)v11,
            v12,
            &v43,
            0,
            0LL,
            &v34,
            &v36,
            &v35,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v14 >= 0 )
    {
      InputType = PointerManipulationHelper::GetInputType(v12);
      v16 = v28;
      v17 = (*(__int64 (__fastcall **)(DragNDropProcessor *))(*(_QWORD *)this + 48LL))(this);
      v26 = (__int64)a3;
      v18 = v35;
      v19 = v36;
      InputETW::InputGesture::DragStarted(
        v17,
        v16,
        (int *)&PositionRelativeToSite,
        (int *)&v34,
        (int *)&v31,
        v36,
        v33,
        v35,
        InputType,
        v26,
        v27);
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, __int64, unsigned int, __int64, unsigned int, void *, _QWORD, _DWORD))(**(_QWORD **)v30 + 24LL))(
              *(_QWORD *)v30,
              v28,
              &PositionRelativeToSite,
              &v34,
              &v31,
              &v44,
              v19,
              v33,
              v18,
              InputType,
              v42,
              0LL,
              0);
    }
    v36 = 0LL;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
      v39,
      (__int64)&v43,
      (unsigned __int8 *)&v28,
      &v36);
    if ( v14 >= 0 )
    {
      v20 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         (float *)this + 28,
                         (__int64)&v43,
                         (unsigned __int8 *)&v28);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v20 + 32), &v38);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v20 + 56), (__int64 *)&v37);
      v29 = 1;
      v21 = std::make_unique<DragGestureTracker,bool,0>(&v42, (bool *)&v29);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v20 + 64),
        v21);
      v22 = v42;
      if ( v42 )
      {
        if ( *((_QWORD *)v42 + 2) )
          DestroyInteractionContext();
        operator delete(v22);
      }
      **(_DWORD **)(v20 + 64) = 4;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v20 + 24), &v41);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v20 + 48), (__int64 *)&v40);
      *(_QWORD *)(v20 + 72) = v11;
    }
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 8LL))(v41);
    if ( v13 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v13 + 16LL))(v13);
    v23 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v38);
  return 0LL;
}
