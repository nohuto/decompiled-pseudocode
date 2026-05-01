/*
 * XREFs of ?GetSmartFillRect@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x1805A5C18
 * Callers:
 *     ?CalculateSnapRegion@ColumnSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ABD80 (-CalculateSnapRegion@ColumnSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnap.c)
 *     ?CalculateSnapRegion@RowSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC040 (-CalculateSnapRegion@RowSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapReg.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x1805A20A0 (-ComputeSnapErrorThresholdForMonitor@SnapLayoutHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 *     ?GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QEAA?AU?$pair@JJ@std@@JIKAEBUCRect@Geometry@@@Z @ 0x1805A3ACC (-GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@QE.c)
 *     ?SpaceForTwoRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@SA_NKKI@Z @ 0x1805A74EC (-SpaceForTwoRegions@SpanningSmartFillSolverBase@AdvancedSmartFill@SnapLayoutHelpers@@SA_NKKI@Z.c)
 *     ?ensure_data@?$tip_test@U_tip_ColumnSmartFillTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ColumnSmartFillTest@@@details@tip@@@std@@XZ @ 0x1805A78A4 (-ensure_data@-$tip_test@U_tip_ColumnSmartFillTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_dat.c)
 */

__int64 __fastcall SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetSmartFillRect(
        void (__fastcall ***a1)(_QWORD, unsigned int *, __int64),
        int a2,
        __int64 a3,
        SnapLayoutHelpers *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int *a8,
        _OWORD *a9)
{
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rax
  _QWORD *v21; // rax
  int v22; // eax
  unsigned int v23; // ebx
  __int128 v25; // xmm6
  _QWORD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  struct IImmersiveMonitor *v29; // rdx
  _QWORD *v30; // rdi
  int v31; // ebx
  int v32; // r14d
  int v33; // r13d
  int i; // r12d
  int v35; // ecx
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rax
  int *v39; // rcx
  int *v40; // rcx
  int *v41; // rcx
  int *v42; // rax
  int v43; // eax
  unsigned int v44; // edi
  unsigned int v45; // esi
  _QWORD *v46; // rax
  SnapLayoutHelpers *v47; // rdi
  __int64 v48; // rax
  unsigned int v49; // ecx
  unsigned int v50; // esi
  unsigned int v51; // edi
  signed int v52; // r13d
  int v53; // r12d
  _OWORD *v54; // rax
  int *v55; // r14
  _OWORD *v56; // rax
  int v57; // ebx
  int v58; // edi
  int v59; // esi
  int v60; // r14d
  _QWORD *v61; // rax
  _OWORD *v62; // r15
  __int64 v63; // rax
  __int64 v64; // [rsp+28h] [rbp-E0h]
  char v65; // [rsp+48h] [rbp-C0h]
  char v66; // [rsp+49h] [rbp-BFh]
  char v67; // [rsp+4Ah] [rbp-BEh]
  char v68; // [rsp+4Bh] [rbp-BDh]
  char v69; // [rsp+4Ch] [rbp-BCh]
  char v70; // [rsp+4Dh] [rbp-BBh]
  int v71; // [rsp+50h] [rbp-B8h] BYREF
  int v72; // [rsp+54h] [rbp-B4h] BYREF
  unsigned int v73[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v74; // [rsp+60h] [rbp-A8h] BYREF
  std::_Ref_count_base *v75; // [rsp+68h] [rbp-A0h]
  int v76; // [rsp+70h] [rbp-98h] BYREF
  int v77; // [rsp+74h] [rbp-94h]
  int v78; // [rsp+80h] [rbp-88h]
  std::_Ref_count_base *v79[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v80; // [rsp+98h] [rbp-70h]
  __int64 v81; // [rsp+A0h] [rbp-68h]
  signed int v82; // [rsp+A8h] [rbp-60h]
  int v83; // [rsp+ACh] [rbp-5Ch]
  signed int v84; // [rsp+B0h] [rbp-58h] BYREF
  int v85; // [rsp+B4h] [rbp-54h]
  int v86; // [rsp+B8h] [rbp-50h] BYREF
  char v87; // [rsp+BCh] [rbp-4Ch]
  int v88; // [rsp+C0h] [rbp-48h] BYREF
  char v89; // [rsp+C4h] [rbp-44h]
  int v90; // [rsp+C8h] [rbp-40h] BYREF
  char v91; // [rsp+CCh] [rbp-3Ch]
  int v92; // [rsp+D0h] [rbp-38h] BYREF
  char v93; // [rsp+D4h] [rbp-34h]
  int v94; // [rsp+D8h] [rbp-30h]
  __int64 v95; // [rsp+DCh] [rbp-2Ch]
  __int64 v96; // [rsp+E4h] [rbp-24h]
  __int64 v97; // [rsp+ECh] [rbp-1Ch]
  __int64 v98; // [rsp+F4h] [rbp-14h]
  SnapLayoutHelpers *v99; // [rsp+100h] [rbp-8h] BYREF
  std::_Ref_count_base *v100; // [rsp+108h] [rbp+0h]
  _OWORD *v101; // [rsp+110h] [rbp+8h] BYREF
  std::_Ref_count_base *v102; // [rsp+118h] [rbp+10h]
  _DWORD v103[2]; // [rsp+120h] [rbp+18h] BYREF
  char v104[8]; // [rsp+128h] [rbp+20h] BYREF
  int *v105; // [rsp+130h] [rbp+28h]
  void **v106; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v107[24]; // [rsp+140h] [rbp+38h] BYREF
  int v108; // [rsp+158h] [rbp+50h]
  __int64 v109; // [rsp+168h] [rbp+60h] BYREF
  std::_Ref_count_base *v110; // [rsp+170h] [rbp+68h]
  __int128 v111; // [rsp+178h] [rbp+70h] BYREF
  __int128 v112; // [rsp+188h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F0h] [rbp+E8h]

  v99 = a4;
  v78 = a2;
  v105 = a8;
  v101 = a9;
  *(_OWORD *)v79 = 0LL;
  v12 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v74,
    v12);
  v13 = v74;
  tip::details::test_common_data<0>::begin_update(v74 + 8);
  v14 = v13 + 152;
  if ( !v13 )
    v14 = 8LL;
  *(_DWORD *)v14 = a2;
  if ( v13 )
  {
    tip::details::test_common_data<0>::end_update(v13 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
  }
  if ( v75 )
    std::_Ref_count_base::_Decref(v75);
  v15 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v74,
    v15);
  v16 = v74;
  tip::details::test_common_data<0>::begin_update(v74 + 8);
  v17 = v16 + 176;
  if ( !v16 )
    v17 = 32LL;
  *(_DWORD *)v17 = 616;
  if ( v16 )
  {
    tip::details::test_common_data<0>::end_update(v16 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
  }
  if ( v75 )
    std::_Ref_count_base::_Decref(v75);
  v18 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v74,
    v18);
  v19 = v74;
  tip::details::test_common_data<0>::begin_update(v74 + 8);
  v20 = v19 + 180;
  if ( !v19 )
    v20 = 36LL;
  *(_DWORD *)v20 = 616;
  if ( v19 )
  {
    tip::details::test_common_data<0>::end_update(v19 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
  }
  if ( v75 )
    std::_Ref_count_base::_Decref(v75);
  if ( v79[0] && tip::details::test_common_data<0>::has_ever_started((__int64)v79[0] + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v79);
  v21 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
  tip::details::test_common_data<0>::start(*v21 + 8LL, &v112);
  v106 = &tip::test_watcher<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v107,
    (struct wil::details::IFailureCallback *)&v106,
    0LL,
    v79[0] != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v109,
    v79);
  v111 = 0LL;
  v22 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, __int128 *))(*(_QWORD *)a4 + 88LL))(a4, &v111);
  v23 = v22;
  if ( v22 >= 0 )
  {
    v25 = v111;
    v26 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v74,
      v26);
    v27 = v74;
    tip::details::test_common_data<0>::begin_update(v74 + 8);
    v28 = v27 + 156;
    if ( !v27 )
      v28 = 12LL;
    *(_OWORD *)v28 = v25;
    if ( v27 )
    {
      tip::details::test_common_data<0>::end_update(v27 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v74);
    }
    if ( v75 )
      std::_Ref_count_base::_Decref(v75);
    (**a1)(a1, (unsigned int *)&v76, (__int64)&v111);
    (*a1)[1](a1, v103, (__int64)&v111);
    v94 = SnapLayoutHelpers::ComputeSnapErrorThresholdForMonitor(a4, v29);
    v83 = v103[0];
    v82 = v103[1];
    v68 = 0;
    v65 = 0;
    v69 = 0;
    v70 = 0;
    v66 = 0;
    v67 = 0;
    v30 = *(_QWORD **)a7;
    v74 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
    v31 = v92;
    v32 = v86;
    v33 = v88;
    for ( i = v90; v30 != (_QWORD *)v74; ++v30 )
    {
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v30 + 48LL))(*v30, &v112);
      (**a1)(a1, (unsigned int *)&v71, (__int64)&v112);
      if ( v71 > a2 || a2 > v72 )
      {
        (*a1)[1](a1, (unsigned int *)&v84, (__int64)&v112);
        if ( v84 <= v82 && v83 <= v85 )
        {
          if ( v71 - (v76 - v94) <= (unsigned int)(2 * v94) )
          {
            v39 = &v72;
            if ( v69 && v33 >= v72 )
              v39 = &v88;
            v89 = 0;
            v33 = *v39;
            v88 = *v39;
            v69 = 1;
          }
          if ( v94 + v72 - v77 <= (unsigned int)(2 * v94) )
          {
            v40 = &v71;
            if ( v70 && v71 >= i )
              v40 = &v90;
            v91 = 0;
            i = *v40;
            v90 = *v40;
            v70 = 1;
          }
          if ( v71 <= a2 )
          {
            v42 = &v72;
            if ( v68 && v31 >= v72 )
              v42 = &v92;
            v93 = 0;
            v31 = *v42;
            v92 = *v42;
            v68 = 1;
          }
          else
          {
            v41 = &v71;
            if ( v65 && v71 >= v32 )
              v41 = &v86;
            v87 = 0;
            v32 = *v41;
            v86 = *v41;
            v65 = 1;
          }
        }
      }
      else
      {
        if ( v66 )
        {
          v35 = v80;
          if ( v71 < (int)v80 )
            v35 = v71;
          LODWORD(v95) = v35;
          BYTE4(v95) = 1;
          v36 = v95;
        }
        else
        {
          LODWORD(v96) = v71;
          BYTE4(v96) = 1;
          v36 = v96;
        }
        v80 = v36;
        if ( v67 )
        {
          v37 = v81;
          if ( (int)v81 < v72 )
            v37 = v72;
          LODWORD(v97) = v37;
          BYTE4(v97) = 1;
          v38 = v97;
        }
        else
        {
          LODWORD(v98) = v72;
          BYTE4(v98) = 1;
          v38 = v98;
        }
        v81 = v38;
        v66 = BYTE4(v80);
        v67 = BYTE4(v38);
      }
    }
    v43 = (*(__int64 (__fastcall **)(SnapLayoutHelpers *, unsigned int *, char *))(*(_QWORD *)v99 + 112LL))(
            v99,
            v73,
            v104);
    v44 = v43;
    if ( v43 >= 0 )
    {
      v45 = v73[0];
      v46 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v99,
        v46);
      v47 = v99;
      tip::details::test_common_data<0>::begin_update((__int64)v99 + 8);
      v48 = (__int64)v47 + 172;
      if ( !v47 )
        v48 = 28LL;
      *(_DWORD *)v48 = v45;
      if ( v47 )
      {
        tip::details::test_common_data<0>::end_update((__int64)v47 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v99);
      }
      v49 = (unsigned int)v100;
      if ( v100 )
        std::_Ref_count_base::_Decref(v100);
      if ( v68 )
      {
        if ( !v65 )
        {
          if ( v69
            && v33 == v31
            && SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::SpaceForTwoRegions(
                 v49,
                 v77 - v31,
                 v73[0]) )
          {
            v32 = v77;
            if ( v78 <= v31 + (v77 - v31) / 2 )
              v32 = v31 + (v77 - v31) / 2;
            else
              v31 += (v77 - v31) / 2;
          }
          else
          {
            v32 = v77;
          }
        }
      }
      else if ( v65 )
      {
        if ( v70
          && i == v32
          && SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::SpaceForTwoRegions(
               v49,
               v32 - v76,
               v73[0]) )
        {
          v31 = v76;
          if ( v78 <= v32 - (v32 - v76) / 2 )
            v32 -= (v32 - v76) / 2;
          else
            v31 = v32 - (v32 - v76) / 2;
        }
        else
        {
          v31 = v76;
        }
      }
      else
      {
        SnapLayoutHelpers::AdvancedSmartFill::SpanningSmartFillSolverBase::GetDefaultSnapRegionExtents(
          a1,
          (unsigned int *)&v84,
          v78,
          v73[0],
          v64,
          (__int64)&v111);
        v31 = v84;
        v32 = v85;
      }
      v50 = v31;
      if ( v66 && (int)v80 > v31 )
        v50 = v80;
      v51 = v32;
      if ( v67 && (int)v81 < v32 )
        v51 = v81;
      v52 = v82;
      v53 = v83;
      v54 = (_OWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, unsigned int *, __int64), __int128 *, _QWORD, _QWORD, int, signed int))(*a1)[2])(
                        a1,
                        &v112,
                        (unsigned int)v31,
                        (unsigned int)v32,
                        v83,
                        v82);
      v55 = v105;
      *(_OWORD *)v105 = *v54;
      v56 = (_OWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, unsigned int *, __int64), __int128 *, _QWORD, _QWORD, int, signed int))(*a1)[2])(
                        a1,
                        &v112,
                        v50,
                        v51,
                        v53,
                        v52);
      *v101 = *v56;
      v57 = *v55;
      v58 = v55[1];
      v59 = v55[2];
      v60 = v55[3];
      v61 = (_QWORD *)tip::tip_test<_tip_ColumnSmartFillTest>::ensure_data(v79);
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v101,
        v61);
      v62 = v101;
      tip::details::test_common_data<0>::begin_update((__int64)v101 + 8);
      v63 = (__int64)v62 + 184;
      if ( !v62 )
        v63 = 40LL;
      *(_DWORD *)v63 = v57;
      *(_DWORD *)(v63 + 4) = v58;
      *(_DWORD *)(v63 + 8) = v59;
      *(_DWORD *)(v63 + 12) = v60;
      if ( v62 )
      {
        tip::details::test_common_data<0>::end_update((__int64)v62 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v101);
      }
      if ( v102 )
        std::_Ref_count_base::_Decref(v102);
      if ( v79[0] )
        tip::details::test_common_data<0>::complete((__int64)v79[0] + 8);
      if ( v110 )
        std::_Ref_count_base::_Decref(v110);
      if ( v108 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v107);
      if ( v79[1] )
        std::_Ref_count_base::_Decref(v79[1]);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8E1,
        (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
        (const char *)(unsigned int)v43);
      if ( v110 )
        std::_Ref_count_base::_Decref(v110);
      if ( v108 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v107);
      if ( v79[1] )
        std::_Ref_count_base::_Decref(v79[1]);
      return v44;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x885,
      (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v22);
    if ( v110 )
      std::_Ref_count_base::_Decref(v110);
    if ( v108 )
      wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v107);
    if ( v79[1] )
      std::_Ref_count_base::_Decref(v79[1]);
    return v23;
  }
}
