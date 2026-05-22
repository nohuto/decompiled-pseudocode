/*
 * XREFs of ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668
 * Callers:
 *     ?StartDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@I_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18013AF30 (-StartDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@I_KPEAVBamoDragManagerClientP.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180123724 (--4-$ComPtr@VInputSite@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?4U?$default_delete@VDragGestureTracker@@@std@@$0A@@?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18013B154 (--$-4U-$default_delete@VDragGestureTracker@@@std@@$0A@@-$unique_ptr@VDragGestureTracker@@U-$defa.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013BF44 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUMessageInfo@DragNDropProcessor@@V-$_Uhash_comp.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x18013C840 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ??$make_unique@VDragGestureTracker@@_N$0A@@std@@YA?AV?$unique_ptr@VDragGestureTracker@@U?$default_delete@VDragGestureTracker@@@std@@@0@$$QEA_N@Z @ 0x18013CE08 (--$make_unique@VDragGestureTracker@@_N$0A@@std@@YA-AV-$unique_ptr@VDragGestureTracker@@U-$defaul.c)
 *     ??4?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013D9B8 (--4-$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18013DA08 (--4-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x18013E03C (-DragCancelled@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1.c)
 *     ?DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x18013E53C (-DragStarted@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAPEAVBamoDragSourceClientProxy@@PEAPEAVInputSite@@@Z @ 0x18013F140 (-GetDragSourceInputSite@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@PEAVBamoDragManagerClie.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18013F3D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18013F578 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x18019D4FC (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall DragNDropProcessor::StartDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        __int64 a3,
        struct BamoDragManagerClientProxy *a4)
{
  char v6; // di
  __int64 v7; // rbx
  __int64 v8; // rdi
  unsigned int v9; // r14d
  struct InputSite *v10; // rbx
  char *v11; // r12
  int v12; // esi
  unsigned int InputType; // r15d
  void *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rsi
  _QWORD *v17; // rax
  void *v18; // r14
  struct InputSite *v19; // rcx
  WINBOOL v21; // [rsp+28h] [rbp-91h]
  struct tagPOINT PositionRelativeToSite; // [rsp+70h] [rbp-49h] BYREF
  struct tagPOINT v23; // [rsp+78h] [rbp-41h] BYREF
  __int128 v24; // [rsp+80h] [rbp-39h] BYREF
  struct InputSite *v25; // [rsp+90h] [rbp-29h] BYREF
  void *v26; // [rsp+98h] [rbp-21h] BYREF
  struct InputSite *v27; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-11h] BYREF
  __int64 (__fastcall ***v29[2])(_QWORD); // [rsp+B0h] [rbp-9h] BYREF
  unsigned int v30[4]; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v31; // [rsp+120h] [rbp+67h] BYREF
  unsigned int v32; // [rsp+128h] [rbp+6Fh] BYREF
  __int64 v33; // [rsp+130h] [rbp+77h]
  struct tagPOINT v34; // [rsp+138h] [rbp+7Fh] BYREF

  v33 = a3;
  v32 = a2;
  v29[0] = (__int64 (__fastcall ***)(_QWORD))a4;
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(v29);
  v6 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 6,
    &v31,
    (const unsigned __int8 *)&v32);
  v7 = v31;
  if ( v31 == *((_QWORD *)this + 7)
    || *std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 30,
          &v31,
          (const unsigned __int8 *)&v32) != *((_QWORD *)this + 31) )
  {
    v6 = 1;
  }
  v31 = 0LL;
  v24 = 0uLL;
  v26 = 0LL;
  v34 = 0LL;
  v23 = 0LL;
  PositionRelativeToSite = 0LL;
  if ( v6 )
  {
    InputETW::DragNDrop::DragCancelled(v32, (int *)&PositionRelativeToSite, (int *)&v23, (int *)&v34, 0LL, v21, 0LL);
    (*(void (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, _QWORD, _DWORD, _QWORD))(*((_QWORD *)a4 + 1) + 48LL))(
      (char *)a4 + 8,
      v32,
      &PositionRelativeToSite,
      &v23,
      &v34,
      &v24,
      0LL,
      0,
      0LL);
    std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
      (_QWORD *)this + 38,
      (const unsigned __int8 *)&v32);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 28);
    LODWORD(v31) = *(_DWORD *)(v7 + 40);
    v9 = *(_DWORD *)(v7 + 36);
    DragNDropProcessor::GetDragManagerInputSite((__int64)this, (__int64 *)&v25, v8, v9, (__int64 *)a4, 0LL);
    if ( v25 )
      PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v25, (struct tagPOINT)v8);
    v27 = 0LL;
    v28 = 0LL;
    DragNDropProcessor::GetDragSourceInputSite((__int64)this, v8, v9, (__int64 *)a4, &v28, (__int64 *)&v27);
    v10 = v27;
    if ( v27 )
      v34 = PointerManipulationHelper::GetPositionRelativeToSite(v27, (struct tagPOINT)v8);
    *(_QWORD *)&v24 = **(_QWORD **)&DragNDropProcessor::GetVelocityForPointerId(this, v30, v32);
    v11 = (char *)a4 + 8;
    *(_OWORD *)v30 = *(_OWORD *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a4 + 1) + 72LL))((char *)a4 + 8);
    v12 = DragNDropProcessor::HitTest(
            (__int64)this,
            (struct tagPOINT)v8,
            v9,
            v30,
            0,
            0LL,
            &v23,
            (__int64 *)&v24 + 1,
            &v26,
            0LL,
            0LL,
            0LL,
            0LL,
            0LL);
    if ( v12 >= 0 )
    {
      InputType = PointerManipulationHelper::GetInputType(v9);
      v14 = v26;
      v15 = *((_QWORD *)&v24 + 1);
      InputETW::DragNDrop::DragStarted(
        v32,
        (int *)&PositionRelativeToSite,
        (int *)&v23,
        (int *)&v34,
        *((__int64 *)&v24 + 1),
        v31,
        (__int64)v26,
        InputType,
        v33);
      v12 = (*(__int64 (__fastcall **)(char *, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, __int128 *, __int64, _DWORD, void *, unsigned int, __int64, _DWORD))(*(_QWORD *)v11 + 24LL))(
              v11,
              v32,
              &PositionRelativeToSite,
              &v23,
              &v34,
              &v24,
              v15,
              v31,
              v14,
              InputType,
              v33,
              0);
    }
    *((_QWORD *)&v24 + 1) = 0LL;
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
      (float *)this + 60,
      (__int64)v30,
      (unsigned __int8 *)&v32,
      (_QWORD *)&v24 + 1);
    if ( v12 >= 0 )
    {
      v16 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::_Try_emplace<unsigned long const &,>(
                         (float *)this + 28,
                         (__int64)v30,
                         (unsigned __int8 *)&v32);
      Microsoft::WRL::ComPtr<BamoDragManagerClientProxy>::operator=((__int64 (__fastcall ****)(_QWORD))(v16 + 32), v29);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v16 + 56), (__int64 *)&v25);
      LOBYTE(v31) = 1;
      v17 = std::make_unique<DragGestureTracker,bool,0>(&v26, (bool *)&v31);
      std::unique_ptr<DragGestureTracker>::operator=<std::default_delete<DragGestureTracker>,0>(
        (_QWORD **)(v16 + 64),
        v17);
      v18 = v26;
      if ( v26 )
      {
        if ( *((_QWORD *)v26 + 2) )
          DestroyInteractionContext();
        operator delete(v18);
      }
      **(_DWORD **)(v16 + 64) = 4;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::operator=((__int64 *)(v16 + 24), &v28);
      Microsoft::WRL::ComPtr<InputSite>::operator=((__int64 *)(v16 + 48), (__int64 *)&v27);
      *(_QWORD *)(v16 + 72) = v8;
    }
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    if ( v10 )
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v10 + 16LL))(v10);
    v19 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v19 + 16LL))(v19);
    }
  }
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)v29);
  return 0LL;
}
