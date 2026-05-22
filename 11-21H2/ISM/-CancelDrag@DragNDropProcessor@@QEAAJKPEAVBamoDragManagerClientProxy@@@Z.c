/*
 * XREFs of ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18013DC40
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientProxy@@W4DragProcessorType@@@Z @ 0x18013A6E0 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?OnManualDragEnded@ManualDragAreaClientProxy@@QEAAXI@Z @ 0x180139D68 (-OnManualDragEnded@ManualDragAreaClientProxy@@QEAAXI@Z.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18013CC84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x18013E1E4 (-DragEnded@DragNDrop@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@PEAUHitTestResult@@@Z @ 0x18013EE60 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetVelocityForPointerId@DragNDropProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x18013F3D0 (-GetVelocityForPointerId@DragNDropProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18013F578 (-HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DragNDropProcessor::CancelDrag(
        DragNDropProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  __int64 v6; // rbx
  struct BamoDragManagerClientProxy *v7; // rdi
  struct tagPOINT v8; // rsi
  unsigned int v9; // r14d
  __int64 v10; // rsi
  int v11; // r14d
  __int64 v12; // rdi
  ManualDragAreaClientProxy *v13; // rcx
  struct InputSite *v14; // rcx
  char v16; // [rsp+20h] [rbp-79h]
  struct tagPOINT v17; // [rsp+70h] [rbp-29h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+78h] [rbp-21h] BYREF
  struct InputSite *v19; // [rsp+80h] [rbp-19h] BYREF
  __int64 v20; // [rsp+88h] [rbp-11h] BYREF
  __int64 v21; // [rsp+90h] [rbp-9h] BYREF
  struct BamoDragManagerClientProxy *v22; // [rsp+98h] [rbp-1h] BYREF
  __int64 (__fastcall ***v23)(_QWORD); // [rsp+A0h] [rbp+7h]
  unsigned int v24; // [rsp+A8h] [rbp+Fh] BYREF
  _OWORD v25[4]; // [rsp+B0h] [rbp+17h] BYREF
  __int64 v26; // [rsp+100h] [rbp+67h] BYREF
  unsigned int v27; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+118h] [rbp+7Fh] BYREF

  v27 = a2;
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 14,
    &v26,
    (const unsigned __int8 *)&v27);
  v6 = v26;
  if ( v26 != *((_QWORD *)this + 15) )
  {
    v22 = *(struct BamoDragManagerClientProxy **)(v26 + 32);
    v7 = v22;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v22);
    if ( v7 == a3 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
        (_QWORD *)this + 6,
        &v26,
        (const unsigned __int8 *)&v27);
      if ( v26 != *((_QWORD *)this + 7) )
      {
        v8 = *(struct tagPOINT *)(v26 + 28);
        v9 = *(_DWORD *)(v26 + 36);
        LODWORD(v26) = *(_DWORD *)(v26 + 40);
        DragNDropProcessor::GetVelocityForPointerId(this, (unsigned int)&v24);
        v17 = v8;
        v21 = 0LL;
        v20 = 0LL;
        v23 = (__int64 (__fastcall ***)(_QWORD))((char *)v7 + 8);
        v25[0] = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*((_QWORD *)v7 + 1) + 72LL))((__int64)v7 + 8);
        v16 = 0;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _BYTE, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DragNDropProcessor::HitTest)(
          this,
          v8,
          v9,
          v25,
          v16,
          0LL,
          &v17,
          &v21,
          &v20,
          0LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v28 = 0LL;
        PositionRelativeToSite = v8;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))DragNDropProcessor::GetDragManagerInputSite)(
          this,
          &v19,
          v8,
          v9,
          v7,
          0LL);
        if ( v19 )
          PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v19, v8);
        v10 = v20;
        v11 = v26;
        v12 = v21;
        InputETW::DragNDrop::DragEnded(a2, &PositionRelativeToSite, &v17, &v28, v21, v26, v20);
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, unsigned int *, __int64, int, __int64))(*v23)[5])(
          v23,
          a2,
          &PositionRelativeToSite,
          &v17,
          &v28,
          &v24,
          v12,
          v11,
          v10);
        std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
          (_QWORD *)this + 38,
          (const unsigned __int8 *)&v27);
        Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)(v6 + 32));
        v13 = *(ManualDragAreaClientProxy **)(v6 + 40);
        if ( v13 )
        {
          ManualDragAreaClientProxy::OnManualDragEnded(v13);
          Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)(v6 + 40));
        }
        if ( v6 != *((_QWORD *)this + 15) && **(_DWORD **)(v6 + 64) != 1 )
          std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
            (float *)this + 108,
            (__int64)v25,
            (unsigned __int8 *)&v27);
        v14 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v14 + 16LL))(v14);
        }
      }
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v22);
  }
  return 0LL;
}
