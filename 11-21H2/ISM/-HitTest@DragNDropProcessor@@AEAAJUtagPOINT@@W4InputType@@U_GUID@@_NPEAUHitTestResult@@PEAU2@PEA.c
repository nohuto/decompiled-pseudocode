/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18013F578
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18013DC40 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180140220 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x180140FC0 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x180141668 (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x180141AC8 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x1800064E0 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180013EC0 (--1-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@@YAJ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800E9710 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18012443C (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??$As@UIManualDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18012533C (--$As@UIManualDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18012E618 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetAttachedObject@UIDragAreaClientProxy@@VBamoDragAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B1B0 (--$GetAttachedObject@UIDragAreaClientProxy@@VBamoDragAreaClientProxy@@@InputSite@@QEAA-AV-$ComPt.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B254 (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B2E8 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x18013B37C (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18013DB34 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18013F430 (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180198EBC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x18019D55C (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall DragNDropProcessor::HitTest(
        __int64 a1,
        struct tagPOINT a2,
        __int64 a3,
        _QWORD *a4,
        char a5,
        unsigned __int8 *a6,
        struct tagPOINT *a7,
        __int64 *a8,
        _QWORD *a9,
        _QWORD *a10,
        __int64 *a11,
        _QWORD *a12,
        __int64 *a13,
        __int64 *a14)
{
  unsigned int v14; // r14d
  bool *v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // rdx
  unsigned int v19; // esi
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 *v27; // r14
  __int64 v28; // r13
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 (__fastcall ***v38)(_QWORD); // rbx
  __int64 (__fastcall ***v39)(_QWORD); // r15
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 (__fastcall ***v42)(_QWORD); // rbx
  __int64 (__fastcall ***v43)(_QWORD); // r15
  _QWORD *v44; // rax
  __int64 v45; // rcx
  __int64 (__fastcall ***v46)(_QWORD); // rbx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rbx
  struct tagPOINT *v50; // r13
  __int64 *v51; // rbx
  __int64 *v52; // r15
  _QWORD *v53; // r12
  __int64 *v54; // r14
  _QWORD *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 *v63; // [rsp+30h] [rbp-D0h] BYREF
  __int64 *v64; // [rsp+38h] [rbp-C8h]
  __int64 (__fastcall ***v65)(_QWORD); // [rsp+40h] [rbp-C0h] BYREF
  __int64 v66; // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v67)(_QWORD); // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v68)(_QWORD); // [rsp+58h] [rbp-A8h] BYREF
  __int64 v69; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v70; // [rsp+68h] [rbp-98h]
  _QWORD *v71; // [rsp+70h] [rbp-90h]
  __int64 *v72; // [rsp+78h] [rbp-88h]
  _QWORD *v73; // [rsp+80h] [rbp-80h]
  __int64 *v74; // [rsp+88h] [rbp-78h]
  _QWORD *v75; // [rsp+90h] [rbp-70h]
  struct tagPOINT *v76; // [rsp+98h] [rbp-68h]
  _QWORD *v77; // [rsp+A0h] [rbp-60h]
  GUID v78; // [rsp+A8h] [rbp-58h]
  bool v79[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v80[11]; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v81; // [rsp+120h] [rbp+20h] BYREF
  __int64 v82; // [rsp+130h] [rbp+30h]
  char v83[8]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v84[11]; // [rsp+148h] [rbp+48h] BYREF
  char v85[32]; // [rsp+1A0h] [rbp+A0h] BYREF

  v77 = a4;
  v14 = a3;
  v16 = (bool *)a6;
  v76 = a7;
  v70 = a8;
  v71 = a9;
  v75 = a10;
  v64 = a11;
  v73 = a12;
  v63 = a13;
  v74 = a14;
  v17 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  v19 = 0;
  v79[0] = 0;
  v80[0] = 0LL;
  v81 = 0LL;
  v82 = 0LL;
  v20 = 0;
  if ( !a6 || (v21 = *a6) == 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, char *, struct tagPOINT, _QWORD))(**(_QWORD **)(v18 + 24) + 32LL))(
            *(_QWORD *)(v18 + 24),
            v83,
            a2,
            v17);
    HitTestResult::operator=((__int64)v79, v22);
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v85);
    wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
      v84,
      v23,
      v24,
      v25);
    v16 = v79;
    v20 = 1;
    v21 = v79[0];
  }
  InputETW::DragNDrop::HitTest(a2, v14, v20, v21);
  if ( !*v16 )
  {
    v19 = -2147467259;
    goto LABEL_77;
  }
  v26 = *((_QWORD *)v16 + 13);
  if ( !a11 )
    goto LABEL_61;
  if ( !a12 )
    goto LABEL_61;
  v78 = GUID_NULL;
  v27 = *(__int64 **)(v26 - 24);
  v72 = *(__int64 **)(v26 - 16);
  if ( v27 == v72 )
    goto LABEL_61;
  v28 = *(_QWORD *)v78.Data4;
  v29 = *(_QWORD *)&v78.Data1;
  while ( 1 )
  {
    v30 = v29 - *(_QWORD *)&GUID_NULL.Data1;
    if ( v29 == *(_QWORD *)&GUID_NULL.Data1 )
      v30 = v28 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v30 )
    {
      v31 = *v27;
      if ( a5 )
      {
        v32 = 0LL;
        v66 = 0LL;
        v33 = *(_QWORD *)(v31 + 488);
        v34 = *(_QWORD *)(v31 + 496);
        if ( v33 != v34 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualDragAreaClientProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v33 + 8),
                        &v66) >= 0 )
              break;
            v33 += 16LL;
          }
          while ( v33 != v34 );
          v32 = v66;
        }
        v35 = (v32 - 8) & ((unsigned __int128)-(__int128)(unsigned __int64)v32 >> 64);
        if ( v35 )
        {
          v78 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v35 + 8) + 40LL))(v35 + 8);
          v28 = *(_QWORD *)v78.Data4;
        }
        Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v66);
      }
      else
      {
        InputSite::GetAttachedObject<IDragAreaClientProxy,BamoDragAreaClientProxy>(v31, &v69);
        v36 = v69;
        if ( v69 )
        {
          v78 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v69 + 8) + 24LL))(v69 + 8);
          v28 = *(_QWORD *)v78.Data4;
        }
        if ( v36 )
        {
          v69 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
        }
      }
      v37 = *(_QWORD *)&v78.Data1 - *(_QWORD *)&GUID_NULL.Data1;
      if ( *(_QWORD *)&v78.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
        v37 = v28 - *(_QWORD *)GUID_NULL.Data4;
      if ( !v37 && !a5 )
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v27, (__int64 *)&v67);
        v38 = v67;
        if ( v67 )
        {
          v39 = v67 + 1;
          if ( !(unsigned int)v67[1][5](v67 + 1) || (unsigned int)(*v39)[5](v38 + 1) == 2 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v67);
            *v64 = (__int64)v38;
            v78 = *(GUID *)(*v39)[3](v38 + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v27);
            *v63 = *v27;
            v28 = *(_QWORD *)v78.Data4;
          }
        }
        if ( v38 )
        {
          v67 = 0LL;
          (*v38)[1](v38);
        }
      }
    }
    v40 = *(_QWORD *)&v78.Data1 - *(_QWORD *)&GUID_NULL.Data1;
    if ( *(_QWORD *)&v78.Data1 == *(_QWORD *)&GUID_NULL.Data1 )
      v40 = v28 - *(_QWORD *)GUID_NULL.Data4;
    if ( !v40 )
    {
      v29 = *(_QWORD *)&v78.Data1;
      goto LABEL_58;
    }
    v41 = *v64;
    if ( *v64 )
    {
      v29 = *(_QWORD *)&v78.Data1;
    }
    else
    {
      InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v27, (__int64 *)&v68);
      v42 = v68;
      if ( v68 && ((v43 = v68 + 1, (unsigned int)v68[1][5](v68 + 1) == 1) || (unsigned int)(*v43)[5](v42 + 1) == 2) )
      {
        v44 = (_QWORD *)(*v43)[3](v42 + 1);
        v29 = *(_QWORD *)&v78.Data1;
        v45 = *v44 - *(_QWORD *)&v78.Data1;
        if ( *v44 == *(_QWORD *)&v78.Data1 )
          v45 = v44[1] - v28;
        if ( !v45 )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v68);
          *v64 = (__int64)v42;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v27);
          *v63 = *v27;
        }
      }
      else
      {
        v29 = *(_QWORD *)&v78.Data1;
      }
      if ( v42 )
      {
        v68 = 0LL;
        (*v42)[1](v42);
      }
      v41 = *v64;
    }
    if ( !v41 )
      goto LABEL_58;
    InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v27, (__int64 *)&v65);
    v46 = v65;
    if ( v65 )
    {
      v47 = (_QWORD *)v65[1][9](v65 + 1);
      v48 = *v47 - v29;
      if ( *v47 == v29 )
        v48 = v47[1] - v28;
      if ( !v48 )
        break;
    }
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v65);
LABEL_58:
    if ( ++v27 == v72 )
      goto LABEL_61;
  }
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v65);
  *v73 = v46;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v27);
  *v74 = *v27;
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v65);
LABEL_61:
  v49 = v75;
  if ( v75 )
    *v49 = (unsigned int)InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 *)(v26 - 24));
  v50 = v76;
  if ( v76 )
  {
    if ( v70 )
    {
      if ( v71 )
      {
        v51 = *(__int64 **)(v26 - 24);
        v52 = *(__int64 **)(v26 - 16);
        if ( v51 != v52 )
        {
          v53 = v77;
          while ( 1 )
          {
            InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v51, &v63);
            v54 = v63;
            if ( v63 )
            {
              v55 = (_QWORD *)(*(__int64 (__fastcall **)(__int64 *))(v63[1] + 32))(v63 + 1);
              v56 = *v55 - *v53;
              if ( *v55 == *v53 )
                v56 = v55[1] - v53[1];
              if ( !v56 )
                break;
            }
            if ( v54 )
            {
              v63 = 0LL;
              (*(void (__fastcall **)(__int64 *))(*v54 + 8))(v54);
            }
            if ( ++v51 == v52 )
              goto LABEL_77;
          }
          v57 = (*(__int64 (__fastcall **)(__int64 *))(v54[1] + 24))(v54 + 1);
          *v70 = v57;
          *v50 = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v51, a2);
          v58 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v54[4] + 16) + 8LL))(*(_QWORD *)(v54[4] + 16));
          *v71 = *(unsigned int *)(v58 + 32);
          (*(void (__fastcall **)(__int64 *))(*v54 + 8))(v54);
        }
      }
    }
  }
LABEL_77:
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)&v81);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>(
    v80,
    v59,
    v60,
    v61);
  return v19;
}
