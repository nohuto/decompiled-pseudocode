/*
 * XREFs of ?GetRectForRegion@AdvancedSmartFill@SnapLayoutHelpers@@YAJAEBUCRect@Geometry@@W4SnapLayoutFlags@2@PEAUIImmersiveMonitor@@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@PEAUSMART_FILL_OUTPUT@2@@Z @ 0x1805A4E64
 * Callers:
 *     ?GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAUCRect@Geometry@@@Z @ 0x18059F50C (-GetSnapRectForDesktopMode@SnapServiceProvider@@AEAAJPEAUIApplicationView@@W4SNAP_LOCATION@@PEAU.c)
 *     ?DetermineRectForSnapAction@HotkeyHandler@@AEBA?AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmersiveMonitor@@W4SnapAction@1@AEBU23@I@Z @ 0x1805A9578 (-DetermineRectForSnapAction@HotkeyHandler@@AEBA-AUCRect@Geometry@@PEAUISnappedWindow@@PEAUIImmer.c)
 *     ?CalculateSnapRegion@DefaultSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ABEB0 (-CalculateSnapRegion@DefaultSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSna.c)
 *     ?CalculateSnapRegion@TopBottomSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC930 (-CalculateSnapRegion@TopBottomSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUS.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0 (-ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@P6A_NW4Edge@2@@ZP6A_N00PEAW452@@ZAEBUCRect@Geometry@@HPEAUFillCandidate@12@@Z @ 0x1805A29A8 (-DetermineFillWindow@AdvancedSmartFill@SnapLayoutHelpers@@YAJW4SnapRegionAnchorLocations@12@AEBV.c)
 *     ?GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA?AW4SnapRegionAnchorLocations@12@AEBUCRect@Geometry@@0H@Z @ 0x1805A64B0 (-GetSnapRegionAnchorLocations@AdvancedSmartFill@SnapLayoutHelpers@@YA-AW4SnapRegionAnchorLocatio.c)
 *     ?HasNonComplementaryEdge@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@12@0PEAW4Edge@2@@Z @ 0x1805A69B4 (-HasNonComplementaryEdge@AdvancedSmartFill@SnapLayoutHelpers@@YA_NW4SnapRegionAnchorLocations@12.c)
 *     ?ensure_data@?$tip_test@U_tip_SmartFillTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@XZ @ 0x1805A78F0 (-ensure_data@-$tip_test@U_tip_SmartFillTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_data@U_ti.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_SmartFillTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SmartFillTest@@@2@XZ @ 0x1805A7FF4 (-start_and_watch_errors@-$tip_test@U_tip_SmartFillTest@@@tip@@QEAA-AV-$test_watcher@U_tip_SmartF.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::GetRectForRegion(
        RECT *a1,
        char a2,
        SnapLayoutHelpers *a3,
        __int64 **a4,
        struct tagRECT *lprc,
        __int64 a6)
{
  __int64 v10; // r13
  RECT v11; // xmm6
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // eax
  unsigned int v16; // ebx
  __int128 v18; // xmm6
  _QWORD *v19; // rax
  __int64 v20; // rbx
  struct IImmersiveMonitor *v21; // rdx
  __int64 v22; // rax
  unsigned int SnapRegionAnchorLocations; // r14d
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  int v27; // r15d
  unsigned int v28; // edi
  int v29; // eax
  __int64 v30; // rbx
  int v31; // r12d
  int v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // eax
  __int64 v36; // rdi
  __int64 v37; // rdi
  LONG v38; // eax
  LONG v39; // eax
  _QWORD *v40; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  int v43; // edi
  _QWORD *v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rdx
  LONG v47; // eax
  int v48; // r14d
  bool v49; // zf
  LONG v50; // eax
  _QWORD *v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  int v54; // edi
  _QWORD *v55; // rax
  __int64 v56; // rbx
  __int64 v57; // rdx
  RECT v58; // xmm6
  _QWORD *v59; // rax
  __int64 v60; // rbx
  __int64 v61; // rax
  __int64 v62; // [rsp+48h] [rbp-C0h] BYREF
  std::_Ref_count_base *v63; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v64; // [rsp+58h] [rbp-B0h]
  __int64 v65; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+70h] [rbp-98h] BYREF
  RECT *v68; // [rsp+80h] [rbp-88h]
  LPRECT lprcDst; // [rsp+88h] [rbp-80h]
  _BYTE v70[8]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v71[24]; // [rsp+A0h] [rbp-68h] BYREF
  int v72; // [rsp+B8h] [rbp-50h]
  std::_Ref_count_base *v73; // [rsp+D0h] [rbp-38h]
  __int64 v74; // [rsp+D8h] [rbp-30h] BYREF
  std::_Ref_count_base *v75; // [rsp+E0h] [rbp-28h]
  __int128 v76; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v77; // [rsp+F8h] [rbp-10h] BYREF
  RECT rcSrc; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  *(_QWORD *)&v76 = a4;
  v68 = a1;
  lprcDst = lprc;
  SetRectEmpty(lprc);
  v10 = 0LL;
  if ( a6 )
  {
    *(_OWORD *)a6 = 0LL;
    *(_OWORD *)(a6 + 16) = 0LL;
    *(_OWORD *)(a6 + 32) = 0LL;
  }
  rcSrc = *a1;
  if ( (a2 & 1) != 0 )
    goto LABEL_110;
  v67 = 0LL;
  v11 = *a1;
  v12 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v62,
    v12);
  v13 = v62;
  tip::details::test_common_data<0>::begin_update(v62 + 8);
  v14 = v13 + 152;
  if ( !v13 )
    v14 = 8LL;
  *(RECT *)v14 = v11;
  if ( v13 )
  {
    tip::details::test_common_data<0>::end_update(v13 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v62);
  }
  if ( v63 )
    std::_Ref_count_base::_Decref(v63);
  tip::tip_test<_tip_SmartFillTest>::start_and_watch_errors(&v67, v70);
  v77 = 0LL;
  v15 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int128 *))(*(_QWORD *)a3 + 88LL))(a3, &v77);
  v16 = v15;
  if ( v15 >= 0 )
  {
    v18 = v77;
    v19 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v62,
      v19);
    v20 = v62;
    tip::details::test_common_data<0>::begin_update(v62 + 8);
    v22 = v20 + 168;
    if ( !v20 )
      v22 = 24LL;
    *(_OWORD *)v22 = v18;
    if ( v20 )
    {
      tip::details::test_common_data<0>::end_update(v20 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v62);
    }
    if ( v63 )
      std::_Ref_count_base::_Decref(v63);
    LODWORD(v64) = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a3, v21);
    SnapRegionAnchorLocations = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(
                                  a1,
                                  &v77,
                                  (unsigned int)v64);
    v24 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v62,
      v24);
    v25 = v62;
    tip::details::test_common_data<0>::begin_update(v62 + 8);
    v26 = v25 + 200;
    if ( !v25 )
      v26 = 56LL;
    *(_DWORD *)v26 = SnapRegionAnchorLocations;
    if ( v25 )
    {
      tip::details::test_common_data<0>::end_update(v25 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v62);
    }
    if ( v63 )
      std::_Ref_count_base::_Decref(v63);
    v65 = 0LL;
    v27 = 0;
    v66 = 0LL;
    v28 = v64;
    if ( (SnapRegionAnchorLocations & 0xA) != 0xA )
    {
      v29 = SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow(
              SnapRegionAnchorLocations,
              a4,
              (unsigned __int8 (__fastcall *)(_QWORD))&SnapLayoutHelpers::IsVerticalEdge,
              (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, char *))&SnapLayoutHelpers::AdvancedSmartFill::HasComplementaryVerticalEdge,
              (__int64)&v77,
              v64,
              &v65);
      v27 = v66;
      if ( v29 < 0 )
        v27 = 0;
      LODWORD(v66) = v27;
      v10 = v65;
    }
    v30 = 0LL;
    v62 = 0LL;
    v31 = 0;
    v63 = 0LL;
    if ( (SnapRegionAnchorLocations & 5) != 5 )
    {
      v32 = SnapLayoutHelpers::AdvancedSmartFill::DetermineFillWindow(
              SnapRegionAnchorLocations,
              (__int64 **)v76,
              (unsigned __int8 (__fastcall *)(_QWORD))&SnapLayoutHelpers::IsHorizontalEdge,
              (unsigned __int8 (__fastcall *)(_QWORD, _QWORD, char *))&SnapLayoutHelpers::AdvancedSmartFill::HasComplementaryHoriztonalEdge,
              (__int64)&v77,
              v28,
              &v62);
      v31 = (int)v63;
      if ( v32 < 0 )
        v31 = 0;
      LODWORD(v63) = v31;
      v30 = v62;
    }
    if ( v27 == 1 && v31 == 1 )
    {
      v33 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 48LL))(v10, &v74);
      LODWORD(v76) = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(v33, &v77, v28);
      v34 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v30 + 48LL))(v30, &v74);
      v35 = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(v34, &v77, v28);
      if ( (v35 & 0xA) == 0xA )
      {
        SnapLayoutHelpers::AdvancedSmartFill::HasNonComplementaryEdge(
          SnapRegionAnchorLocations,
          (unsigned int)v76,
          (char *)&v63 + 4);
        v36 = v62;
        v30 = v10;
        v62 = v10;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        if ( v36 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        v31 = (int)v63;
      }
      else
      {
        SnapLayoutHelpers::AdvancedSmartFill::HasNonComplementaryEdge(SnapRegionAnchorLocations, v35, (char *)&v66 + 4);
        v37 = v65;
        v10 = v30;
        v65 = v30;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
        if ( v37 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
        v27 = v66;
      }
    }
    if ( v31 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v30 + 48LL))(v30, &v76);
      if ( (SnapRegionAnchorLocations & 1) != 0 )
      {
        v38 = HIDWORD(v76);
        if ( HIDWORD(v63) == 1 )
          v38 = DWORD1(v76);
        rcSrc.bottom = v38;
      }
      else if ( (SnapRegionAnchorLocations & 4) != 0 )
      {
        v39 = HIDWORD(v76);
        if ( HIDWORD(v63) == 1 )
          v39 = DWORD1(v76);
        rcSrc.top = v39;
      }
      v40 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v74,
        v40);
      v41 = v74;
      tip::details::test_common_data<0>::begin_update(v74 + 8);
      v42 = v41 + 228;
      if ( !v41 )
        v42 = 84LL;
      *(_OWORD *)v42 = v76;
      if ( !*(_BYTE *)(v42 + 16) )
        *(_BYTE *)(v42 + 16) = 1;
      if ( v41 )
      {
        tip::details::test_common_data<0>::end_update(v41 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
      }
      if ( v75 )
        std::_Ref_count_base::_Decref(v75);
      v43 = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(&v76, &v77, (unsigned int)v64);
      v44 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v74,
        v44);
      v45 = v74;
      tip::details::test_common_data<0>::begin_update(v74 + 8);
      v46 = v45 + 248;
      if ( !v45 )
        v46 = 104LL;
      *(_DWORD *)v46 = v43;
      if ( v45 )
      {
        tip::details::test_common_data<0>::end_update(v45 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
      }
      if ( v75 )
        std::_Ref_count_base::_Decref(v75);
    }
    if ( v27 )
    {
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 48LL))(v10, &v76);
      if ( (SnapRegionAnchorLocations & 2) != 0 )
      {
        v47 = DWORD2(v76);
        v48 = HIDWORD(v66);
        if ( HIDWORD(v66) == 2 )
          v47 = v76;
        rcSrc.right = v47;
      }
      else
      {
        v49 = (SnapRegionAnchorLocations & 8) == 0;
        v48 = HIDWORD(v66);
        if ( !v49 )
        {
          v50 = DWORD2(v76);
          if ( HIDWORD(v66) == 2 )
            v50 = v76;
          rcSrc.left = v50;
        }
      }
      v51 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v74,
        v51);
      v52 = v74;
      tip::details::test_common_data<0>::begin_update(v74 + 8);
      v53 = v52 + 204;
      if ( !v52 )
        v53 = 60LL;
      *(_OWORD *)v53 = v76;
      if ( !*(_BYTE *)(v53 + 16) )
        *(_BYTE *)(v53 + 16) = 1;
      if ( v52 )
      {
        tip::details::test_common_data<0>::end_update(v52 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
      }
      if ( v75 )
        std::_Ref_count_base::_Decref(v75);
      v54 = SnapLayoutHelpers::AdvancedSmartFill::GetSnapRegionAnchorLocations(&v76, &v77, (unsigned int)v64);
      v55 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v74,
        v55);
      v56 = v74;
      tip::details::test_common_data<0>::begin_update(v74 + 8);
      v57 = v56 + 224;
      if ( !v56 )
        v57 = 80LL;
      *(_DWORD *)v57 = v54;
      if ( v56 )
      {
        tip::details::test_common_data<0>::end_update(v56 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
      }
      if ( v75 )
        std::_Ref_count_base::_Decref(v75);
    }
    else
    {
      v48 = HIDWORD(v66);
    }
    v58 = rcSrc;
    if ( a6 )
    {
      *(_DWORD *)a6 = v27;
      *(_DWORD *)(a6 + 4) = v31;
      *(_DWORD *)(a6 + 8) = v48;
      *(_DWORD *)(a6 + 12) = HIDWORD(v63);
      *(RECT *)(a6 + 16) = *v68;
      *(RECT *)(a6 + 32) = v58;
    }
    v59 = (_QWORD *)tip::tip_test<_tip_SmartFillTest>::ensure_data(&v67);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v74,
      v59);
    v60 = v74;
    tip::details::test_common_data<0>::begin_update(v74 + 8);
    v61 = v60 + 184;
    if ( !v60 )
      v61 = 40LL;
    *(RECT *)v61 = v58;
    if ( v60 )
    {
      tip::details::test_common_data<0>::end_update(v60 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
    }
    if ( v75 )
      std::_Ref_count_base::_Decref(v75);
    if ( (_QWORD)v67 )
      tip::details::test_common_data<0>::complete(v67 + 8);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v62);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v65);
    if ( v73 )
      std::_Ref_count_base::_Decref(v73);
    if ( v72 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v71);
    if ( *((_QWORD *)&v67 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v67 + 1));
LABEL_110:
    CopyRect(lprcDst, &rcSrc);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x788,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
    (const char *)(unsigned int)v15);
  if ( v73 )
    std::_Ref_count_base::_Decref(v73);
  if ( v72 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v71);
  if ( *((_QWORD *)&v67 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v67 + 1));
  return v16;
}
