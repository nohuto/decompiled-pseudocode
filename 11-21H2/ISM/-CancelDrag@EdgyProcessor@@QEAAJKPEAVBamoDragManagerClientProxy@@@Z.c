/*
 * XREFs of ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24
 * Callers:
 *     ?CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientProxy@@W4DragProcessorType@@@Z @ 0x18013A6E0 (-CancelDrag@DragManagerHost@@MEAAJPEAVBamoDragProcessorManagerStub@@IPEAVBamoDragManagerClientPr.c)
 *     ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C (-OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResp.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$emplace@AEBK@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@AEBK@Z @ 0x18013CC84 (--$emplace@AEBK@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180148E28 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180149A84 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180149FAC (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessor::CancelDrag(
        EdgyProcessor *this,
        unsigned int a2,
        struct BamoDragManagerClientProxy *a3)
{
  _QWORD *v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // rdi
  struct BamoDragManagerClientProxy *v10; // rbx
  struct tagPOINT v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD); // r13
  struct InputSite *v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v17; // [rsp+50h] [rbp-29h] BYREF
  struct tagPOINT v18; // [rsp+58h] [rbp-21h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+60h] [rbp-19h] BYREF
  __int64 v20; // [rsp+68h] [rbp-11h] BYREF
  __int64 v21; // [rsp+70h] [rbp-9h] BYREF
  struct BamoDragManagerClientProxy *v22; // [rsp+78h] [rbp-1h] BYREF
  struct InputSite *v23; // [rsp+80h] [rbp+7h] BYREF
  unsigned int v24; // [rsp+88h] [rbp+Fh] BYREF
  _OWORD v25[4]; // [rsp+90h] [rbp+17h] BYREF
  __int64 v26; // [rsp+E0h] [rbp+67h] BYREF
  unsigned int v27; // [rsp+E8h] [rbp+6Fh] BYREF
  unsigned int v28; // [rsp+F8h] [rbp+7Fh]

  v27 = a2;
  v6 = (_QWORD *)((char *)this + 352);
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 44,
    &v26,
    (const unsigned __int8 *)&v27);
  v7 = *((_QWORD *)this + 45);
  v8 = v26;
  if ( v26 != v7 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      v6,
      &v26,
      (const unsigned __int8 *)&v27);
    v9 = v26;
    if ( v26 != v7 )
    {
      v22 = *(struct BamoDragManagerClientProxy **)(v26 + 32);
      v10 = v22;
      Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v22);
      if ( v10 == a3 )
      {
        std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
          (_QWORD *)this + 3,
          &v26,
          (const unsigned __int8 *)&v27);
        if ( v26 != *((_QWORD *)this + 4) )
        {
          v11 = *(struct tagPOINT *)(v26 + 20);
          v28 = *(_DWORD *)(v26 + 28);
          LODWORD(v26) = *(_DWORD *)(v26 + 32);
          EdgyProcessor::GetVelocityForPointerId(this, (unsigned int)&v24);
          v18 = v11;
          v12 = (__int64 (__fastcall ***)(_QWORD))((char *)v10 + 8);
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v10 + 1) + 72LL))((__int64)v10 + 8);
          v17 = 0LL;
          PositionRelativeToSite = v11;
          v21 = 0LL;
          v20 = 0LL;
          v23 = *(struct InputSite **)(v8 + 48);
          v13 = v23;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v23);
          if ( v13 )
            PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(v13, v11);
          v25[0] = *(_OWORD *)(*v12)[9](v12);
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))EdgyProcessor::HitTestForTarget)(
            this,
            v11,
            v28,
            v25,
            &v18,
            &v21,
            &v20);
          v14 = v20;
          v15 = v21;
          InputETW::Edgy::DragEnded(a2, &PositionRelativeToSite, &v18, &v17, v21, v26, v20);
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD), _QWORD, struct tagPOINT *, struct tagPOINT *, __int64 *, unsigned int *, __int64, _DWORD, __int64))(*v12)[5])(
            v12,
            a2,
            &PositionRelativeToSite,
            &v18,
            &v17,
            &v24,
            v15,
            v26,
            v14);
          std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
            (_QWORD *)this + 11,
            (const unsigned __int8 *)&v27);
          Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)(v9 + 32));
          if ( *(_DWORD *)(*(_QWORD *)(v9 + 56) + 8LL) != 1 )
            std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long const &>(
              (float *)this + 70,
              (__int64)v25,
              (unsigned __int8 *)&v27);
          if ( v13 )
            (*(void (__fastcall **)(struct InputSite *))(*(_QWORD *)v13 + 16LL))(v13);
        }
      }
      Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v22);
    }
  }
  return 0LL;
}
