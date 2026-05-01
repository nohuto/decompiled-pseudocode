/*
 * XREFs of ?GetSmartFillRect@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAAJJ_NPEAUIImmersiveMonitor@@KKAEBV?$CCoSimpleArray@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UISnappedWindow@@@WRL@Microsoft@@@@@@PEAUtagRECT@@3@Z @ 0x180673184
 * Callers:
 *     ?CalculateSnapRegion@ColumnSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067EC50 (-CalculateSnapRegion@ColumnSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnap.c)
 *     ?CalculateSnapRegion@RowSnapLayout@@UEAA?AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapRegionCalculationMonitorData@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067EF20 (-CalculateSnapRegion@RowSnapLayout@@UEAA-AUCalculatedSnapRegion@@PEAUISnappedWindow@@AEBUSnapReg.c)
 * Callees:
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180085A44 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180224D64 (--1-$test_data_control@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180224DD4 (--1-$test_watcher@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??1?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180224E34 (--1-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@1@XZ @ 0x180224E4C (--C-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180225110 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180225214 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ColumnSmartFillTest@@U1@@details@tip2@@Uerr_returncode_p.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA?AU?$pair@JJ@std@@JIKAEBUCRect@Geometry@@@Z @ 0x1806716C0 (-GetDefaultSnapRegionExtents@SpanningSmartFillSolverBase@SnapLayoutHelpers@@QEAA-AU-$pair@JJ@std.c)
 *     ?SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z @ 0x180674220 (-SpaceForTwoRegions@SpanningSmartFillSolverBase@SnapLayoutHelpers@@SA_NKKI@Z.c)
 *     ?ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z @ 0x180677DC0 (-ComputeOcclusionErrorThresholdForMonitor@SnapRectHelpers@@YAHPEAUIImmersiveMonitor@@@Z.c)
 */

__int64 __fastcall SnapLayoutHelpers::SpanningSmartFillSolverBase::GetSmartFillRect(
        void (__fastcall ***a1)(_QWORD, unsigned int *, __int64),
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int *a8,
        _OWORD *a9)
{
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  volatile signed __int32 **v15; // rax
  int v16; // eax
  unsigned int v17; // ebx
  __int128 v18; // xmm6
  __int64 v19; // rdx
  struct IImmersiveMonitor *v20; // rdx
  char v21; // r13
  _QWORD *v22; // rdi
  int v23; // ebx
  int v24; // esi
  int v25; // r12d
  int i; // r15d
  int v27; // ecx
  __int64 v28; // rax
  int v29; // eax
  void *v30; // rax
  int *v31; // rcx
  int *v32; // rcx
  int *v33; // rcx
  int *v34; // rax
  int v35; // eax
  int v36; // edi
  unsigned int v37; // edi
  __int64 v38; // rdx
  unsigned int v39; // ecx
  void (__fastcall ***v40)(_QWORD, unsigned int *, __int64); // r15
  unsigned int v41; // r14d
  unsigned int v42; // edi
  int v43; // r13d
  int v44; // r12d
  _OWORD *v45; // rax
  _OWORD *v46; // rax
  int v47; // ebx
  int v48; // edi
  int v49; // esi
  int v50; // r14d
  _DWORD *v51; // rcx
  __int64 v52; // rdx
  __int64 v54; // [rsp+28h] [rbp-E0h]
  char v55; // [rsp+48h] [rbp-C0h]
  char v56; // [rsp+49h] [rbp-BFh]
  char v57; // [rsp+4Ah] [rbp-BEh]
  char v58; // [rsp+4Bh] [rbp-BDh]
  char v59; // [rsp+4Ch] [rbp-BCh]
  int v60; // [rsp+50h] [rbp-B8h] BYREF
  int v61; // [rsp+54h] [rbp-B4h] BYREF
  volatile signed __int32 *v62; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v63[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v64; // [rsp+68h] [rbp-A0h] BYREF
  int v65; // [rsp+6Ch] [rbp-9Ch]
  __int64 v66; // [rsp+70h] [rbp-98h]
  void *v67; // [rsp+78h] [rbp-90h]
  void *v68; // [rsp+80h] [rbp-88h] BYREF
  int v69; // [rsp+88h] [rbp-80h]
  int v70; // [rsp+8Ch] [rbp-7Ch]
  void *v71; // [rsp+90h] [rbp-78h] BYREF
  void *v72; // [rsp+98h] [rbp-70h] BYREF
  int v73; // [rsp+A0h] [rbp-68h] BYREF
  char v74; // [rsp+A4h] [rbp-64h]
  int v75; // [rsp+A8h] [rbp-60h] BYREF
  char v76; // [rsp+ACh] [rbp-5Ch]
  int v77; // [rsp+B0h] [rbp-58h] BYREF
  char v78; // [rsp+B4h] [rbp-54h]
  int v79; // [rsp+B8h] [rbp-50h] BYREF
  char v80; // [rsp+BCh] [rbp-4Ch]
  int v81; // [rsp+C0h] [rbp-48h]
  void *v82; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD *v83; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-30h]
  void *v85; // [rsp+E0h] [rbp-28h]
  _DWORD v86[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v87; // [rsp+F0h] [rbp-18h]
  int *v88; // [rsp+F8h] [rbp-10h]
  _BYTE v89[8]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v90; // [rsp+108h] [rbp+0h]
  void **v91; // [rsp+110h] [rbp+8h] BYREF
  _BYTE v92[40]; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v93; // [rsp+140h] [rbp+38h]
  void (__fastcall ***v94)(_QWORD, unsigned int *, __int64); // [rsp+148h] [rbp+40h] BYREF
  __int128 v95; // [rsp+158h] [rbp+50h] BYREF
  __int128 v96; // [rsp+168h] [rbp+60h] BYREF
  _BYTE v97[16]; // [rsp+178h] [rbp+70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v82 = a4;
  v94 = a1;
  v88 = a8;
  v83 = a9;
  v62 = 0LL;
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::operator->(
                 (__int64)&v62,
                 (__int64 *)&v72)
            + 264) = a2;
  tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
    &v72,
    v12);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::operator->(
                 (__int64)&v62,
                 (__int64 *)&v71)
            + 288) = 616;
  tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
    &v71,
    v13);
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::operator->(
                 (__int64)&v62,
                 (__int64 *)&v68)
            + 292) = 616;
  tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
    &v68,
    v14);
  if ( v62 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)(v62 + 2)) )
    wil::com_ptr_t<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>,wil::err_returncode_policy>::reset(&v62);
  v15 = tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::ensure_data(&v62);
  tip2::details::shared_data<0,0,0>::start((__int64)(*v15 + 2), &v96);
  v91 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v92,
    (struct wil::details::IFailureCallback *)&v91,
    0LL,
    1);
  v93 = v62;
  if ( v62 )
    _InterlockedIncrement(v62 + 78);
  v95 = 0LL;
  v16 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)a4 + 88LL))(a4, &v95);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DB,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v16);
    goto LABEL_72;
  }
  v18 = v95;
  *(_OWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::operator->(
                 (__int64)&v62,
                 (__int64 *)&v68)
            + 268) = v18;
  tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
    &v68,
    v19);
  (**a1)(a1, (unsigned int *)&v64, (__int64)&v95);
  (*a1)[1](a1, v86, (__int64)&v95);
  v81 = SnapRectHelpers::ComputeOcclusionErrorThresholdForMonitor((SnapRectHelpers *)a4, v20);
  v70 = v86[0];
  v69 = v86[1];
  v57 = 0;
  v21 = 0;
  v58 = 0;
  v59 = 0;
  v55 = 0;
  v56 = 0;
  v22 = *(_QWORD **)a7;
  v90 = *(_QWORD *)a7 + 8LL * *(_QWORD *)(a7 + 8);
  v23 = v73;
  v24 = v75;
  v25 = v77;
  for ( i = v79; v22 != (_QWORD *)v90; ++v22 )
  {
    (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v22 + 48LL))(*v22, &v96);
    (**v94)(v94, (unsigned int *)&v60, (__int64)&v96);
    if ( v60 > a2 || a2 > v61 )
    {
      (*v94)[1](v94, (unsigned int *)&v71, (__int64)&v96);
      if ( (int)v71 <= v69 && v70 <= SHIDWORD(v71) )
      {
        if ( v60 - (v64 - v81) <= (unsigned int)(2 * v81) )
        {
          v31 = &v61;
          if ( v58 && v25 >= v61 )
            v31 = &v77;
          v78 = 0;
          v25 = *v31;
          v77 = *v31;
          v58 = 1;
        }
        if ( v81 + v61 - v65 <= (unsigned int)(2 * v81) )
        {
          v32 = &v60;
          if ( v59 && v60 >= i )
            v32 = &v79;
          v80 = 0;
          i = *v32;
          v79 = *v32;
          v59 = 1;
        }
        if ( v60 <= a2 )
        {
          v34 = &v61;
          if ( v57 && v23 >= v61 )
            v34 = &v73;
          v74 = 0;
          v23 = *v34;
          v73 = *v34;
          v57 = 1;
        }
        else
        {
          v33 = &v60;
          if ( v21 && v60 >= v24 )
            v33 = &v75;
          v76 = 0;
          v24 = *v33;
          v75 = *v33;
          v21 = 1;
        }
      }
    }
    else
    {
      if ( v55 )
      {
        v27 = v66;
        if ( v60 < (int)v66 )
          v27 = v60;
        LODWORD(v87) = v27;
        BYTE4(v87) = 1;
        v28 = v87;
      }
      else
      {
        LODWORD(v84) = v60;
        BYTE4(v84) = 1;
        v28 = v84;
      }
      v66 = v28;
      if ( v56 )
      {
        v29 = (int)v67;
        if ( (int)v67 < v61 )
          v29 = v61;
        LODWORD(v85) = v29;
        BYTE4(v85) = 1;
        v30 = v85;
      }
      else
      {
        LODWORD(v68) = v61;
        BYTE4(v68) = 1;
        v30 = v68;
      }
      v67 = v30;
      v55 = BYTE4(v66);
      v56 = BYTE4(v30);
    }
  }
  v35 = (*(__int64 (__fastcall **)(void *, unsigned int *, _BYTE *))(*(_QWORD *)v82 + 112LL))(v82, v63, v89);
  v36 = v35;
  if ( v35 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x737,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayouthelpers.cpp",
      (const char *)(unsigned int)v35);
    v17 = v36;
    goto LABEL_72;
  }
  v37 = v63[0];
  *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::operator->(
                 (__int64)&v62,
                 (__int64 *)&v82)
            + 284) = v37;
  tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
    &v82,
    v38);
  if ( v57 )
  {
    if ( !v21 )
    {
      if ( v58
        && v25 == v23
        && SnapLayoutHelpers::SpanningSmartFillSolverBase::SpaceForTwoRegions(v39, v65 - v23, v63[0]) )
      {
        v24 = v65;
        v40 = v94;
        if ( a2 <= v23 + (v65 - v23) / 2 )
          v24 = v23 + (v65 - v23) / 2;
        else
          v23 += (v65 - v23) / 2;
        goto LABEL_65;
      }
      v24 = v65;
    }
    goto LABEL_63;
  }
  if ( v21 )
  {
    if ( v59 && i == v24 && SnapLayoutHelpers::SpanningSmartFillSolverBase::SpaceForTwoRegions(v39, v24 - v64, v63[0]) )
    {
      v23 = v64;
      v40 = v94;
      if ( a2 <= v24 - (v24 - v64) / 2 )
        v24 -= (v24 - v64) / 2;
      else
        v23 = v24 - (v24 - v64) / 2;
      goto LABEL_65;
    }
    v23 = v64;
LABEL_63:
    v40 = v94;
    goto LABEL_65;
  }
  v40 = v94;
  SnapLayoutHelpers::SpanningSmartFillSolverBase::GetDefaultSnapRegionExtents(
    v94,
    (unsigned int *)&v72,
    a2,
    v63[0],
    v54,
    (__int64)&v95);
  v23 = (int)v72;
  v24 = HIDWORD(v72);
LABEL_65:
  v41 = v23;
  if ( v55 && (int)v66 > v23 )
    v41 = v66;
  v42 = v24;
  if ( v56 && (int)v67 < v24 )
    v42 = (unsigned int)v67;
  v43 = v69;
  v44 = v70;
  v45 = (_OWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, unsigned int *, __int64), void (__fastcall ****)(_QWORD, unsigned int *, __int64), _QWORD, _QWORD, int, int))(*v40)[2])(
                    v40,
                    &v94,
                    (unsigned int)v23,
                    (unsigned int)v24,
                    v70,
                    v69);
  *(_OWORD *)v88 = *v45;
  v46 = (_OWORD *)((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, unsigned int *, __int64), _BYTE *, _QWORD, _QWORD, int, int))(*v40)[2])(
                    v40,
                    v97,
                    v41,
                    v42,
                    v44,
                    v43);
  *v83 = *v46;
  v47 = *v88;
  v48 = v88[1];
  v49 = v88[2];
  v50 = v88[3];
  v51 = (_DWORD *)*tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::operator->(
                     (__int64)&v62,
                     (__int64 *)&v83);
  v51[74] = v47;
  v51[75] = v48;
  v51[76] = v49;
  v51[77] = v50;
  tip2::test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_data_control<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>(
    (void **)&v83,
    v52);
  tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v62);
  v17 = 0;
LABEL_72:
  tip2::test_watcher<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~test_watcher<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>((__int64)&v91);
  tip2::tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>::~tip_test<tip2::details::merged_data<_tip_ColumnSmartFillTest,_tip_ColumnSmartFillTest>>((void **)&v62);
  return v17;
}
