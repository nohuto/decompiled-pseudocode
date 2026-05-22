/*
 * XREFs of ?HitTest@DragNDropProcessor@@AEAAJUtagPOINT@@W4InputType@@U_GUID@@_NPEAUHitTestResult@@PEAU2@PEA_K6PEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@PEAPEAV8@@Z @ 0x18016C694
 * Callers:
 *     ?CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x18016B020 (-CancelDrag@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18016D2B0 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z @ 0x18016E140 (-SetupInteractionContext@DragNDropProcessor@@AEAAXKW4InputType@@PEAUHitTestResult@@UtagPOINT@@@Z.c)
 *     ?StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z @ 0x18016E72C (-StartDrag@DragNDropProcessor@@QEAAJK_KPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z @ 0x18016EC50 (-StartManualDrag@DragNDropProcessor@@QEAAXKPEAVBamoManualDragAreaClientProxy@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?_Tidy@?$vector@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@V?$allocator@V?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@2@@std@@AEAAXXZ @ 0x18000F520 (-_Tidy@-$vector@V-$vector@V-$ComPtr@VInputSite@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VInputSit.c)
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x18001B20C (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1HitTestResult@@QEAA@XZ @ 0x1800F6D38 (--1HitTestResult@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180111030 (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClient2Proxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18014D310 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ??$As@UIManualDragAreaClientProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIManualDragAreaClientProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014DE5C (--$As@UIManualDragAreaClientProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$Com.c)
 *     ??$GetAttachedObject@UIDragAreaClientProxy@@VBamoDragAreaClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragAreaClientProxy@@@WRL@Microsoft@@XZ @ 0x1801687F8 (--$GetAttachedObject@UIDragAreaClientProxy@@VBamoDragAreaClientProxy@@@InputSite@@QEAA-AV-$ComPt.c)
 *     ??$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragManagerClientProxy@@@WRL@Microsoft@@XZ @ 0x18016889C (--$GetAttachedObject@UIDragManagerClientProxy@@VBamoDragManagerClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@XZ @ 0x180168930 (--$GetAttachedObject@UIDragSourceClientProxy@@VBamoDragSourceClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoDropTargetClientProxy@@@WRL@Microsoft@@XZ @ 0x1801689C4 (--$GetAttachedObject@UIDropTargetClientProxy@@VBamoDropTargetClientProxy@@@InputSite@@QEAA-AV-$C.c)
 *     ??4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z @ 0x18016AF14 (--4HitTestResult@@QEAAAEAU0@$$QEAU0@@Z.c)
 *     ?HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z @ 0x18016C5BC (-HitTest@DragNDrop@InputETW@@SAXUtagPOINT@@I_N1@Z.c)
 *     ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x1801C45FC (-ConvertInputTypeToPointerType@HitTestHelper@@SA-BHW4InputType@@@Z.c)
 *     ?GetPositionRelativeToSite@PointerManipulationHelper@@SA?AUtagPOINT@@PEAVInputSite@@U2@@Z @ 0x1801C8FFC (-GetPositionRelativeToSite@PointerManipulationHelper@@SA-AUtagPOINT@@PEAVInputSite@@U2@@Z.c)
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
        _QWORD *a8,
        _QWORD *a9,
        _QWORD *a10,
        _QWORD *a11,
        _QWORD *a12,
        __int64 *a13,
        __int64 *a14)
{
  unsigned int v14; // esi
  bool *v16; // rbx
  struct tagPOINT *v17; // r13
  unsigned int v18; // eax
  __int64 v19; // rdx
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // r14
  __int64 *v28; // rsi
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rdx
  __int64 v35; // rbx
  __int64 (__fastcall ***v36)(_QWORD); // rbx
  __int64 (__fastcall ***v37)(_QWORD); // r15
  __int64 v38; // r8
  __int64 (__fastcall ***v39)(_QWORD); // rbx
  __int64 (__fastcall ***v40)(_QWORD); // r15
  _QWORD *v41; // rax
  __int64 (__fastcall ***v42)(_QWORD); // rbx
  _QWORD *v43; // rax
  _QWORD *v44; // rbx
  _QWORD *v45; // r12
  __int64 *v46; // rbx
  __int64 *v47; // r14
  struct tagPOINT *v48; // rsi
  struct tagPOINT *v49; // r15
  _QWORD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  struct tagPOINT *v55; // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v56)(_QWORD); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v57; // [rsp+40h] [rbp-C0h] BYREF
  __int64 (__fastcall ***v58)(_QWORD); // [rsp+48h] [rbp-B8h] BYREF
  __int64 (__fastcall ***v59)(_QWORD); // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  __int64 *v61; // [rsp+60h] [rbp-A0h]
  _QWORD *v62; // [rsp+68h] [rbp-98h]
  __int64 *v63; // [rsp+70h] [rbp-90h]
  _QWORD *v64; // [rsp+78h] [rbp-88h]
  __int64 *v65; // [rsp+80h] [rbp-80h]
  _QWORD *v66; // [rsp+88h] [rbp-78h]
  _QWORD *v67; // [rsp+90h] [rbp-70h]
  _QWORD *v68; // [rsp+98h] [rbp-68h]
  GUID v69; // [rsp+A0h] [rbp-60h] BYREF
  bool v70[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v71; // [rsp+B8h] [rbp-48h]
  __int128 v72; // [rsp+110h] [rbp+10h] BYREF
  __int64 v73; // [rsp+120h] [rbp+20h]
  char v74[8]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v75; // [rsp+138h] [rbp+38h]
  char v76[32]; // [rsp+190h] [rbp+90h] BYREF

  v68 = a4;
  v14 = a3;
  v16 = (bool *)a6;
  v17 = a7;
  v55 = a7;
  v67 = a8;
  v62 = a9;
  v66 = a10;
  v64 = a12;
  v61 = a13;
  v65 = a14;
  v18 = HitTestHelper::ConvertInputTypeToPointerType((unsigned int)a3, a1, a3);
  v70[0] = 0;
  v71 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  v20 = 0;
  if ( !a6 || (v21 = *a6) == 0 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, char *, struct tagPOINT, _QWORD))(**(_QWORD **)(v19 + 24) + 32LL))(
            *(_QWORD *)(v19 + 24),
            v74,
            a2,
            v18);
    HitTestResult::operator=((__int64)v70, v22);
    std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)v76);
    if ( (unsigned __int64)(v75 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      NtCloseCompositionInputSink(v75, v23, v24, v25);
    v16 = v70;
    v20 = 1;
    v21 = v70[0];
  }
  InputETW::DragNDrop::HitTest(a2, v14, v20, v21);
  if ( !*v16 )
  {
    HitTestResult::~HitTestResult((HitTestResult *)v70);
    return 2147500037LL;
  }
  v27 = *((_QWORD *)v16 + 13);
  if ( !a11 )
    goto LABEL_52;
  if ( !a12 )
    goto LABEL_52;
  v69 = GUID_NULL;
  v28 = *(__int64 **)(v27 - 24);
  v63 = *(__int64 **)(v27 - 16);
  if ( v28 == v63 )
    goto LABEL_52;
  while ( 1 )
  {
    if ( IsEqualGUID(&v69, &GUID_NULL) )
    {
      v30 = *v28;
      if ( a5 )
      {
        v31 = 0LL;
        v57 = 0LL;
        v32 = *(_QWORD *)(v30 + 488);
        v33 = *(_QWORD *)(v30 + 496);
        if ( v32 != v33 )
        {
          do
          {
            if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IManualDragAreaClientProxy>(
                        (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v32 + 8),
                        &v57) >= 0 )
              break;
            v32 += 16LL;
          }
          while ( v32 != v33 );
          v31 = v57;
          v29 = 8LL;
        }
        v34 = v31 - 8;
        if ( (-(__int64)(v31 != 0) & (v31 - 8)) != 0 )
        {
          if ( !v31 )
            v31 = v29;
          v69 = *(GUID *)(*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 40LL))(v31, v34, v29);
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v57);
      }
      else
      {
        InputSite::GetAttachedObject<IDragAreaClientProxy,BamoDragAreaClientProxy>(*v28, &v60);
        v35 = v60;
        if ( v60 )
          v69 = *(GUID *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v60 + 8) + 24LL))(v60 + 8);
        if ( v35 )
        {
          v60 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 8LL))(v35);
        }
      }
      if ( IsEqualGUID(&v69, &GUID_NULL) && !a5 )
      {
        InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v28, (__int64 *)&v58);
        v36 = v58;
        if ( v58 )
        {
          v37 = v58 + 1;
          if ( !(unsigned int)v58[1][5](v58 + 1) || (unsigned int)(*v37)[5](v36 + 1) == 2 )
          {
            Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v58);
            *a11 = v36;
            v69 = *(GUID *)(*v37)[3](v36 + 1);
            Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v28);
            *v61 = *v28;
          }
        }
        if ( v36 )
        {
          v58 = 0LL;
          (*v36)[1](v36);
        }
      }
    }
    if ( IsEqualGUID(&v69, &GUID_NULL) )
      goto LABEL_48;
    if ( *a11 )
      break;
    InputSite::GetAttachedObject<IDragSourceClientProxy,BamoDragSourceClientProxy>(*v28, (__int64 *)&v59);
    v39 = v59;
    if ( v59 )
    {
      v40 = v59 + 1;
      if ( (unsigned int)v59[1][5](v59 + 1) == 1 || (unsigned int)(*v40)[5](v39 + 1) == 2 )
      {
        v41 = (_QWORD *)(*v40)[3](v39 + 1);
        if ( IsEqualGUID(v41, &v69) )
        {
          Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v59);
          *a11 = v39;
          Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v28);
          *v61 = *v28;
        }
      }
    }
    if ( v39 )
    {
      v59 = 0LL;
      (*v39)[1](v39);
    }
    if ( *a11 )
      break;
LABEL_47:
    v38 = 8LL;
LABEL_48:
    v28 = (__int64 *)((char *)v28 + v38);
    if ( v28 == v63 )
      goto LABEL_51;
  }
  InputSite::GetAttachedObject<IDragManagerClientProxy,BamoDragManagerClientProxy>(*v28, (__int64 *)&v56);
  v42 = v56;
  if ( !v56 || (v43 = (_QWORD *)v56[1][10](v56 + 1), !IsEqualGUID(v43, &v69)) )
  {
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v56);
    goto LABEL_47;
  }
  Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v56);
  *v64 = v42;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(v28);
  *v65 = *v28;
  Microsoft::WRL::ComPtr<BamoCustomCursorControllerClient2Proxy>::InternalRelease((__int64 *)&v56);
LABEL_51:
  v17 = v55;
LABEL_52:
  v44 = v66;
  if ( v66 )
    *v44 = (unsigned int)InputSiteManager::GetViewInstanceIdFromInputSiteList((__int64 *)(v27 - 24));
  if ( v17 )
  {
    v45 = v67;
    if ( v67 )
    {
      if ( v62 )
      {
        v46 = *(__int64 **)(v27 - 24);
        v47 = *(__int64 **)(v27 - 16);
        while ( v46 != v47 )
        {
          InputSite::GetAttachedObject<IDropTargetClientProxy,BamoDropTargetClientProxy>(*v46, &v55);
          v48 = v55;
          if ( v55 )
          {
            v49 = v55 + 1;
            v50 = (_QWORD *)(*(__int64 (__fastcall **)(struct tagPOINT *))(*(_QWORD *)&v55[1] + 32LL))(v55 + 1);
            if ( IsEqualGUID(v50, v68) )
            {
              *v45 = (*(__int64 (__fastcall **)(struct tagPOINT *))(*(_QWORD *)v49 + 24LL))(v48 + 1);
              *v17 = PointerManipulationHelper::GetPositionRelativeToSite((struct InputSite *)*v46, a2);
              v51 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)&v48[4] + 16LL) + 8LL))(*(_QWORD *)(*(_QWORD *)&v48[4] + 16LL));
              *v62 = *(unsigned int *)(v51 + 32);
              (*(void (__fastcall **)(struct tagPOINT *))(*(_QWORD *)v48 + 8LL))(v48);
              break;
            }
          }
          if ( v48 )
          {
            v55 = 0LL;
            (*(void (__fastcall **)(struct tagPOINT *))(*(_QWORD *)v48 + 8LL))(v48);
          }
          ++v46;
        }
      }
    }
  }
  std::vector<std::vector<Microsoft::WRL::ComPtr<InputSite>>>::_Tidy((__int64)&v72);
  if ( (unsigned __int64)(v71 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    NtCloseCompositionInputSink(v71, v52, v53, v54);
  return 0LL;
}
