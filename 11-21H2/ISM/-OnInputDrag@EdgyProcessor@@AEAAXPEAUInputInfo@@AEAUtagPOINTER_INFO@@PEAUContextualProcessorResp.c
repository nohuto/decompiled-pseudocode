/*
 * XREFs of ?OnInputDrag@EdgyProcessor@@AEAAXPEAUInputInfo@@AEAUtagPOINTER_INFO@@PEAUContextualProcessorResponse@@@Z @ 0x18014A30C
 * Callers:
 *     ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18014A270 (-OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@I_KV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBI_K@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@1@AEBI@Z @ 0x1800812D8 (--$find@X@-$_Hash@V-$_Umap_traits@I_KV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@V-$.c)
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18008D4B8 (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x18008D604 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUtagPOINT@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800B367C (-erase@-$_Hash@V-$_Umap_traits@KUtagPOINT@@V-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@st.c)
 *     ??$find@X@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@1@AEBK@Z @ 0x1800BE564 (--$find@X@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std.c)
 *     ?RelativePointToScreen@CInputTransform@@SA?AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1800CF3FC (-RelativePointToScreen@CInputTransform@@SA-AUTransformedPoint@@AEBU2@AEBUtagINPUT_TRANSFORM@@@Z.c)
 *     ??$count@X@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEBA_KAEBK@Z @ 0x1800DDA6C (--$count@X@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$a.c)
 *     ??$_Emplace_reallocate@AEBUDragInfoStruct@@@?$vector@UDragInfoStruct@@V?$allocator@UDragInfoStruct@@@std@@@std@@QEAAPEAUDragInfoStruct@@QEAU2@AEBU2@@Z @ 0x18013B970 (--$_Emplace_reallocate@AEBUDragInfoStruct@@@-$vector@UDragInfoStruct@@V-$allocator@UDragInfoStru.c)
 *     ??$_Emplace_reallocate@AEBUtagPOINT@@@?$vector@UtagPOINT@@V?$allocator@UtagPOINT@@@std@@@std@@QEAAPEAUtagPOINT@@QEAU2@AEBU2@@Z @ 0x18013BAB4 (--$_Emplace_reallocate@AEBUtagPOINT@@@-$vector@UtagPOINT@@V-$allocator@UtagPOINT@@@std@@@std@@QE.c)
 *     ??$_Insert_or_assign@AEBIAEA_K@?$unordered_map@I_KU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@U?$pair@$$CBI_K@std@@@2@@std@@AEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBI_K@std@@@std@@@std@@@std@@_N@1@AEBIAEA_K@Z @ 0x18013BD00 (--$_Insert_or_assign@AEBIAEA_K@-$unordered_map@I_KU-$hash@I@std@@U-$equal_to@I@2@V-$allocator@U-.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUtagPOINTF@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUtagPOINTF@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C0B0 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUtagPOINTF@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBK_K@std@@PEAX@std@@_N@1@AEBK@Z @ 0x18013C604 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to.c)
 *     ??$emplace@AEAKAEA_K@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBK_K@std@@@std@@@std@@@std@@_N@1@AEAKAEA_K@Z @ 0x18013C840 (--$emplace@AEAKAEA_K@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1801426DC (-erase@-$_Hash@V-$_Umap_traits@KV-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KW4ContextualProcessorDecision@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKW4ContextualProcessorDecision@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180142774 (-erase@-$_Hash@V-$_Umap_traits@KW4ContextualProcessorDecision@@V-$_Uhash_compare@KU-$hash@K@std@.c)
 *     ??$emplace@AEAKUPointerCache@EdgyProcessor@@@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@std@@@std@@@std@@_N@1@AEAK$$QEAUPointerCache@EdgyProcessor@@@Z @ 0x180147E34 (--$emplace@AEAKUPointerCache@EdgyProcessor@@@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcesso.c)
 *     ?AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcessorResponse@@@Z @ 0x180148A8C (-AddDecisionException@EdgyProcessor@@AEAAXKW4ContextualProcessorDecision@@PEAUContextualProcesso.c)
 *     ?CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x180148B24 (-CancelDrag@EdgyProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180148E28 (-DragEnded@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z @ 0x180148FD4 (-DragInProgress@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1@Z.c)
 *     ?DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z @ 0x180149180 (-DragStarted@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@1I1@Z.c)
 *     ?DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K1@Z @ 0x18014934C (-DropTargetChanged@Edgy@InputETW@@SAXKPEAUtagPOINT@@00_KW4VirtualKeyModifiers@System@Windows@@_K.c)
 *     ?FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z @ 0x180149788 (-FeedAnimationDataIfNeeded@EdgyProcessor@@AEAAXKUtagPOINT@@UtagPOINTF@@_N@Z.c)
 *     ?GetVelocityForPointerId@EdgyProcessor@@AEAA?AUtagPOINTF@@K@Z @ 0x180149A84 (-GetVelocityForPointerId@EdgyProcessor@@AEAA-AUtagPOINTF@@K@Z.c)
 *     ?HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z @ 0x180149FAC (-HitTestForTarget@EdgyProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@PEAU2@PEA_K4@Z.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUEdgyDragMessageInfo@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18014B78C (-erase@-$_Hash@V-$_Umap_traits@KUEdgyDragMessageInfo@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KUPointerCache@EdgyProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@EdgyProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18014B91C (-erase@-$_Hash@V-$_Umap_traits@KUPointerCache@EdgyProcessor@@V-$_Uhash_compare@KU-$hash@K@std@@U.c)
 *     ?OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z @ 0x18014BAFC (-OnPointerInfoFrame@EdgyRecognizer@@QEAAJPEAUPointerInputInfo@@AEAUtagPOINTER_INFO@@@Z.c)
 *     ?GetInputType@PointerManipulationHelper@@SA?AW4InputType@Input@Internal@UI@Windows@@W42@@Z @ 0x18019D4FC (-GetInputType@PointerManipulationHelper@@SA-AW4InputType@Input@Internal@UI@Windows@@W42@@Z.c)
 *     ?GetKeyModifiers@PointerManipulationHelper@@SA?AW4VirtualKeyModifiers@System@Windows@@PEAUInputInfo@@@Z @ 0x18019D528 (-GetKeyModifiers@PointerManipulationHelper@@SA-AW4VirtualKeyModifiers@System@Windows@@PEAUInputI.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 *     ?GetTransformFromRootToSite@PointerManipulationHelper@@SA?AUtagINPUT_TRANSFORM@@PEAVInputSite@@@Z @ 0x18019D604 (-GetTransformFromRootToSite@PointerManipulationHelper@@SA-AUtagINPUT_TRANSFORM@@PEAVInputSite@@@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall EdgyProcessor::OnInputDrag(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct tagPOINTER_INFO *a3,
        struct ContextualProcessorResponse *a4)
{
  struct ContextualProcessorResponse *v4; // r12
  struct tagPOINTER_INFO *v5; // r15
  struct tagPOINT v8; // rdi
  unsigned int KeyModifiers; // r13d
  unsigned int v10; // ebx
  _QWORD *v11; // rcx
  __int64 v12; // r8
  struct tagPOINT v13; // rdx
  const char *v14; // r9
  struct tagPOINT v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // xmm6_4
  int v19; // xmm7_4
  __int64 v20; // rcx
  EdgyRecognizer *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r12
  struct tagPOINT v25; // r14
  __int64 v26; // r15
  __int64 v27; // rcx
  struct Microsoft::Bamo::BaseBamoConnection *v28; // rdx
  _BYTE *v29; // rdx
  __int64 v30; // r8
  const char *v31; // r9
  _QWORD *v32; // r14
  __int64 v33; // r13
  unsigned int v34; // r13d
  __int64 v35; // r14
  __int64 v36; // r12
  __int128 *TransformFromRootToSite; // rax
  float *v38; // rax
  struct tagPOINT v39; // rax
  float v40; // xmm0_4
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r14
  unsigned int v44; // r13d
  void *v45; // r14
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // [rsp+50h] [rbp-B8h]
  unsigned int v49; // [rsp+78h] [rbp-90h] BYREF
  char v50; // [rsp+7Ch] [rbp-8Ch]
  unsigned int InputType; // [rsp+80h] [rbp-88h] BYREF
  struct tagPOINT PositionRelativeToSite; // [rsp+88h] [rbp-80h] BYREF
  struct tagPOINT v53; // [rsp+90h] [rbp-78h] BYREF
  struct tagPOINT v54; // [rsp+98h] [rbp-70h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-68h] BYREF
  struct tagPOINTF v56; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v57; // [rsp+B0h] [rbp-58h] BYREF
  struct tagPOINT v58; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v59; // [rsp+C0h] [rbp-48h]
  unsigned int v60; // [rsp+C4h] [rbp-44h]
  __int128 v61; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v62; // [rsp+D8h] [rbp-30h]
  __int64 v63; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v64; // [rsp+E8h] [rbp-20h] BYREF
  struct ContextualProcessorResponse *v65; // [rsp+F0h] [rbp-18h]
  struct tagPOINTER_INFO *v66; // [rsp+F8h] [rbp-10h]
  __int128 v67; // [rsp+100h] [rbp-8h] BYREF
  __int64 v68; // [rsp+110h] [rbp+8h]
  __int128 v69; // [rsp+118h] [rbp+10h] BYREF
  struct tagPOINT v70; // [rsp+128h] [rbp+20h]
  __int64 v71; // [rsp+130h] [rbp+28h] BYREF
  _BYTE v72[16]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v73[4]; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v74[64]; // [rsp+188h] [rbp+80h] BYREF
  __int128 v75; // [rsp+1C8h] [rbp+C0h] BYREF
  __int128 v76; // [rsp+1D8h] [rbp+D0h] BYREF
  __int128 v77; // [rsp+1E8h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+270h] [rbp+168h]

  v4 = a4;
  v65 = a4;
  v5 = a3;
  v66 = a3;
  v49 = *((_DWORD *)a3 + 1);
  v8 = (struct tagPOINT)*((_QWORD *)a3 + 6);
  v70 = v8;
  KeyModifiers = PointerManipulationHelper::GetKeyModifiers(a2);
  v60 = KeyModifiers;
  v10 = *(_DWORD *)a2;
  v59 = v10;
  InputType = PointerManipulationHelper::GetInputType(v10);
  v11 = (_QWORD *)((char *)this + 24);
  if ( (*(_BYTE *)(v12 + 12) & 4) != 0 )
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
      v11,
      &v55,
      (const unsigned __int8 *)&v49);
    v13 = (struct tagPOINT)v55;
    if ( v55 == *((_QWORD *)this + 4) )
    {
      *(struct tagPOINT *)&v75 = v8;
      *((_QWORD *)&v75 + 1) = __PAIR64__(KeyModifiers, v10);
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::emplace<unsigned long &,EdgyProcessor::PointerCache>(
        (float *)this + 6,
        (__int64)&v69,
        (unsigned __int8 *)&v49,
        &v75);
    }
    else
    {
      *(struct tagPOINT *)(v55 + 20) = v8;
      *(_DWORD *)(*(_QWORD *)&v13 + 32LL) = KeyModifiers;
    }
  }
  else
  {
    std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::erase(
      v11,
      &v49);
  }
  std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::PointerCache,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::PointerCache>>,0>>::find<void>(
    (_QWORD *)this + 44,
    &v55,
    (const unsigned __int8 *)&v49);
  v15 = (struct tagPOINT)v55;
  if ( v55 != *((_QWORD *)this + 45) )
  {
    if ( *(_QWORD *)(v55 + 24) )
    {
      v16 = *(_QWORD *)(v55 + 32);
      if ( v16 )
      {
        if ( !*(_QWORD *)(v55 + 48) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            193LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
            v14);
        if ( !*(_QWORD *)(v55 + 40) )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            194LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgy\\system\\lib\\edgyprocessor.cpp",
            v14);
        v53 = v8;
        v64 = 0LL;
        v63 = 0LL;
        v75 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 72LL))(v16 + 8);
        if ( (int)EdgyProcessor::HitTestForTarget((__int64)this, v8, v59, &v75, &v53, &v64, &v63) >= 0
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v15 + 48LL) + 480LL)
          && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)&v15 + 40LL) + 480LL) )
        {
          v17 = *(_QWORD *)(*(_QWORD *)&v15 + 56LL);
          v18 = *(_DWORD *)(*(_QWORD *)v17 + 4LL);
          v19 = *(_DWORD *)(*(_QWORD *)v17 + 8LL);
          v20 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,tagPOINTF,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINTF>>,0>>::_Try_emplace<unsigned long const &,>(
                             (float *)this + 22,
                             (__int64)&v69,
                             (unsigned __int8 *)&v49);
          *(_DWORD *)(v20 + 20) = v18;
          *(_DWORD *)(v20 + 24) = v19;
          v55 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 24LL) + 8LL) + 32LL))(*(_QWORD *)(*(_QWORD *)&v15 + 24LL) + 8LL);
          EdgyProcessor::GetVelocityForPointerId(this, &v56, v49);
          PositionRelativeToSite = PointerManipulationHelper::GetPositionRelativeToSite(
                                     *(struct InputSite **)(*(_QWORD *)&v15 + 48LL),
                                     v8);
          v54 = PointerManipulationHelper::GetPositionRelativeToSite(*(struct InputSite **)(*(_QWORD *)&v15 + 40LL), v8);
          v21 = *(EdgyRecognizer **)(*(_QWORD *)&v15 + 56LL);
          if ( (unsigned int)(*((_DWORD *)v21 + 2) - 2) <= 1 )
          {
            if ( (*((_BYTE *)v5 + 12) & 4) != 0 )
            {
              EdgyRecognizer::OnPointerInfoFrame(v21, a2, v5);
              EdgyProcessor::AddDecisionException(v22, v49, 1u, (__int64)v4);
            }
            else
            {
              *((_DWORD *)v21 + 2) = 1;
            }
          }
          v23 = *(_QWORD *)(*(_QWORD *)&v15 + 56LL);
          if ( *(_DWORD *)(v23 + 8) == 1 )
          {
            EdgyProcessor::AddDecisionException((__int64)v21, v49, 0, (__int64)v4);
            v23 = *(_QWORD *)(*(_QWORD *)&v15 + 56LL);
          }
          v24 = v63;
          if ( *(_DWORD *)(v23 + 8) == 4
            && !std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                  (__int64)v65 + 152,
                  (const unsigned __int8 *)&v49) )
          {
            v64 = 0LL;
            v25 = (struct tagPOINT)v55;
            InputETW::Edgy::DragStarted(
              v49,
              (int *)&PositionRelativeToSite,
              (int *)&v53,
              (int *)&v54,
              0LL,
              KeyModifiers,
              v24,
              InputType,
              v55);
            (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, struct tagPOINTF *, _QWORD, unsigned int, __int64, unsigned int, struct tagPOINT, int))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL) + 24LL))(
              *(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL,
              v49,
              &PositionRelativeToSite,
              &v53,
              &v54,
              &v56,
              0LL,
              KeyModifiers,
              v24,
              InputType,
              v25,
              1);
            std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::emplace<unsigned long &,unsigned __int64 &>(
              (float *)this + 54,
              (__int64)&v69,
              (unsigned __int8 *)&v49,
              &v64);
            *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 56LL) + 8LL) = 5;
            v23 = *(_QWORD *)(*(_QWORD *)&v15 + 56LL);
          }
          if ( *(_DWORD *)(v23 + 8) == 5 )
          {
            v61 = 0LL;
            v62 = 0LL;
            v67 = 0LL;
            v26 = 0LL;
            v68 = 0LL;
            v50 = 0;
            v58 = 0LL;
            InputType = 0;
            v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 24LL) + 32LL) + 24LL) + 32LL);
            if ( *(int *)(v27 + 8) <= 0 )
              v28 = 0LL;
            else
              v28 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v27 + 16);
            Microsoft::Bamo::Lock::Lock((Microsoft::BamoImpl::BamoImplObject **)&v75, v28);
            (*(void (__fastcall **)(__int64, struct tagPOINT *, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 24LL)
                                                                                           + 8LL)
                                                                               + 48LL))(
              *(_QWORD *)(*(_QWORD *)&v15 + 24LL) + 8LL,
              &v58,
              &InputType);
            v32 = (_QWORD *)v58;
            v33 = *(_QWORD *)&v58 + 8LL * InputType;
            if ( v58 != v33 )
            {
              v29 = (_BYTE *)*((_QWORD *)&v61 + 1);
              do
              {
                if ( v29 == v62 )
                {
                  std::vector<tagPOINT>::_Emplace_reallocate<tagPOINT const &>((const void **)&v61, v29, v32);
                  v29 = (_BYTE *)*((_QWORD *)&v61 + 1);
                }
                else
                {
                  *(_QWORD *)v29 = *v32;
                  v29 = (_BYTE *)(*((_QWORD *)&v61 + 1) + 8LL);
                  *((_QWORD *)&v61 + 1) += 8LL;
                }
                ++v32;
              }
              while ( v32 != (_QWORD *)v33 );
            }
            Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)&v75, (__int64)v29, v30, v31);
            v34 = 0;
            InputType = 0;
            v35 = *((_QWORD *)&v67 + 1);
            if ( (__int64)(*((_QWORD *)&v61 + 1) - v61) >> 3 )
            {
              v36 = 0LL;
              do
              {
                TransformFromRootToSite = (__int128 *)PointerManipulationHelper::GetTransformFromRootToSite(
                                                        v74,
                                                        *(_QWORD *)(*(_QWORD *)&v15 + 40LL));
                v73[0] = *TransformFromRootToSite;
                v73[1] = TransformFromRootToSite[1];
                v73[2] = TransformFromRootToSite[2];
                v73[3] = TransformFromRootToSite[3];
                v57 = _mm_unpacklo_ps(
                        (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v61 + 8 * v36)),
                        (__m128)COERCE_UNSIGNED_INT((float)*(int *)(v61 + 8 * v36 + 4))).m128_u64[0];
                v38 = (float *)CInputTransform::RelativePointToScreen((float *)&v75, (float *)&v57, v73);
                v58.x = v8.x + (int)*v38 - *(_DWORD *)(*(_QWORD *)&v15 + 64LL);
                v58.y = v70.y + (int)v38[1] - *(_DWORD *)(*(_QWORD *)&v15 + 68LL);
                v57 = 0LL;
                v69 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 32LL)
                                                                                + 8LL)
                                                                    + 72LL))(*(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL);
                if ( (int)EdgyProcessor::HitTestForTarget(
                            (__int64)this,
                            v58,
                            v59,
                            &v69,
                            (struct tagPOINT *)&v55,
                            &v57,
                            &v63) >= 0 )
                {
                  std::_Hash<std::_Umap_traits<unsigned int,unsigned __int64,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned __int64>>,0>>::find<void>(
                    (_QWORD *)(*(_QWORD *)&v15 + 72LL),
                    &v71,
                    (const unsigned __int8 *)&InputType);
                  if ( *(_QWORD *)(v71 + 24) != v57 )
                  {
                    v50 = 1;
                    std::unordered_map<unsigned int,unsigned __int64>::_Insert_or_assign<unsigned int const &,unsigned __int64 &>(
                      (float *)(*(_QWORD *)&v15 + 72LL),
                      (__int64)v72,
                      (unsigned __int8 *)&InputType,
                      &v57);
                    v34 = InputType;
                  }
                }
                v39 = PointerManipulationHelper::GetPositionRelativeToSite(
                        *(struct InputSite **)(*(_QWORD *)&v15 + 48LL),
                        v58);
                *(_QWORD *)&v76 = v57;
                *((float *)&v76 + 2) = (float)v39.x;
                *((float *)&v76 + 3) = (float)v39.y;
                *((float *)&v77 + 2) = (float)(int)v55;
                *((float *)&v77 + 3) = (float)SHIDWORD(v55);
                v40 = (float)*(int *)(v61 + 8LL * v34 + 4);
                *(float *)&v77 = (float)*(int *)(v61 + 8LL * v34);
                *((float *)&v77 + 1) = v40;
                if ( v35 == v26 )
                {
                  std::vector<DragInfoStruct>::_Emplace_reallocate<DragInfoStruct const &>(
                    (const void **)&v67,
                    (_BYTE *)v35,
                    &v76);
                  v26 = v68;
                  v35 = *((_QWORD *)&v67 + 1);
                }
                else
                {
                  *(_OWORD *)v35 = v76;
                  *(_OWORD *)(v35 + 16) = v77;
                  v35 += 32LL;
                  *((_QWORD *)&v67 + 1) = v35;
                }
                v36 = ++v34;
                InputType = v34;
              }
              while ( v34 < (unsigned __int64)((__int64)(*((_QWORD *)&v61 + 1) - v61) >> 3) );
              v24 = v63;
            }
            v41 = std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Try_emplace<unsigned long const &,>(
                    (float *)this + 54,
                    (__int64)v72,
                    (unsigned __int8 *)&v49);
            v42 = v64;
            if ( v64 == *(_QWORD *)(*(_QWORD *)v41 + 24LL) && !v50 )
            {
              v44 = v60;
              v45 = (void *)v67;
            }
            else
            {
              v43 = (v35 - (__int64)v67) >> 5;
              v44 = v60;
              InputETW::Edgy::DropTargetChanged(
                v49,
                (int *)&PositionRelativeToSite,
                (int *)&v53,
                (int *)&v54,
                v64,
                v60,
                v43,
                v24);
              v48 = v43;
              v45 = (void *)v67;
              (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, struct tagPOINTF *, __int64, unsigned int, _QWORD, int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL) + 56LL))(
                *(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL,
                v49,
                &PositionRelativeToSite,
                &v53,
                &v54,
                &v56,
                v42,
                v44,
                v67,
                v48,
                v24);
              *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Try_emplace<unsigned long const &,>(
                                       (float *)this + 54,
                                       (__int64)v72,
                                       (unsigned __int8 *)&v49)
                        + 24LL) = v42;
            }
            if ( (*((_BYTE *)v66 + 12) & 4) != 0 )
            {
              EdgyProcessor::FeedAnimationDataIfNeeded(this, v49, PositionRelativeToSite, v56, 0);
              if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
                     (__int64)v65 + 152,
                     (const unsigned __int8 *)&v49) )
              {
                EdgyProcessor::CancelDrag(this, v49, *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v15 + 32LL));
              }
              else
              {
                InputETW::Edgy::DragInProgress(
                  v49,
                  (int *)&PositionRelativeToSite,
                  (int *)&v53,
                  (int *)&v54,
                  v42,
                  v44,
                  v24);
                (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, struct tagPOINTF *, __int64, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL) + 32LL))(
                  *(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL,
                  v49,
                  &PositionRelativeToSite,
                  &v53,
                  &v54,
                  &v56,
                  v42,
                  v44,
                  v24);
              }
            }
            else
            {
              EdgyProcessor::FeedAnimationDataIfNeeded(this, v49, PositionRelativeToSite, v56, 1u);
              InputETW::Edgy::DragEnded(v49, (int *)&PositionRelativeToSite, (int *)&v53, (int *)&v54, v42, v44, v24);
              (*(void (__fastcall **)(__int64, _QWORD, struct tagPOINT *, struct tagPOINT *, struct tagPOINT *, struct tagPOINTF *, __int64, unsigned int, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL) + 40LL))(
                *(_QWORD *)(*(_QWORD *)&v15 + 32LL) + 8LL,
                v49,
                &PositionRelativeToSite,
                &v53,
                &v54,
                &v56,
                v42,
                v44,
                v24);
            }
            v4 = v65;
            EdgyProcessor::AddDecisionException(v46, v49, 3u, (__int64)v65);
            if ( v45 )
              std::_Deallocate<16,0>(v45, (v26 - (_QWORD)v45) & 0xFFFFFFFFFFFFFFE0uLL);
            if ( (_QWORD)v61 )
              std::_Deallocate<16,0>((void *)v61, (unsigned __int64)&v62[-v61] & 0xFFFFFFFFFFFFFFF8uLL);
            v5 = v66;
          }
          else
          {
            v4 = v65;
          }
        }
        else
        {
          EdgyProcessor::CancelDrag(this, v49, *(struct BamoDragManagerClientProxy **)(*(_QWORD *)&v15 + 32LL));
        }
      }
    }
    if ( (*((_BYTE *)v5 + 12) & 4) == 0 )
    {
      std::_Hash<std::_Umap_traits<unsigned long,Microsoft::WRL::ComPtr<DataSourcePrincipal>,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<DataSourcePrincipal>>>,0>>::erase(
        (_QWORD *)this + 19,
        (const unsigned __int8 *)&v49);
      std::_Hash<std::_Umap_traits<unsigned long,EdgyProcessor::EdgyDragMessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,EdgyProcessor::EdgyDragMessageInfo>>,0>>::erase(
        (char *)this + 352,
        &v49);
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
        (_QWORD *)this + 11,
        (const unsigned __int8 *)&v49);
      std::_Hash<std::_Umap_traits<unsigned long,tagPOINT,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,tagPOINT>>,0>>::erase(
        (_QWORD *)this + 27,
        (const unsigned __int8 *)&v49);
    }
  }
  if ( std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::count<void>(
         (__int64)this + 280,
         (const unsigned __int8 *)&v49) )
  {
    EdgyProcessor::AddDecisionException(v47, v49, 3u, (__int64)v4);
  }
  if ( (*((_BYTE *)v5 + 12) & 4) == 0 )
    std::_Hash<std::_Umap_traits<unsigned long,enum ContextualProcessorDecision,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,enum ContextualProcessorDecision>>,0>>::erase(
      (_QWORD *)this + 35,
      (const unsigned __int8 *)&v49);
}
