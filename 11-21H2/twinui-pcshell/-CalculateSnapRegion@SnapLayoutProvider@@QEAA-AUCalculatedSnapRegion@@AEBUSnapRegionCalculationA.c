/*
 * XREFs of ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805AC170
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPEAUtagRECT@@3@Z @ 0x1805944A0 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAKPE.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180016F04 (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?end_update@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x180089344 (-end_update@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18011EA1C (-begin_update@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802DB634 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180452808 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x180592100 (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 *     ??$?4U?$default_delete@VSnapLayoutBase@@@std@@$0A@@?$unique_ptr@VSnapLayoutBase@@U?$default_delete@VSnapLayoutBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805ABAC0 (--$-4U-$default_delete@VSnapLayoutBase@@@std@@$0A@@-$unique_ptr@VSnapLayoutBase@@U-$default_dele.c)
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x1805ACC34 (_anonymous_namespace_--CreateDefaultLayout.c)
 *     ?CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x1805ACC7C (-CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA-AUCalculatedSnapRegion@@AEBUSnapRegion.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x1805ACDD8 (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 *     ?start_and_watch_errors@?$tip_test@U_tip_SnapLayoutProviderTest@@@tip@@QEAA?AV?$test_watcher@U_tip_SnapLayoutProviderTest@@@2@XZ @ 0x1805AD2FC (-start_and_watch_errors@-$tip_test@U_tip_SnapLayoutProviderTest@@@tip@@QEAA-AV-$test_watcher@U_t.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutProvider::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r15
  __int64 v14; // rax
  __int128 v15; // xmm6
  __int64 v16; // r15
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  int v32; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  bool v40; // zf
  int v41; // eax
  _QWORD *v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  _QWORD *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // [rsp+28h] [rbp-A9h]
  __int128 v56; // [rsp+38h] [rbp-99h] BYREF
  _BYTE v57[8]; // [rsp+48h] [rbp-89h] BYREF
  _BYTE v58[24]; // [rsp+50h] [rbp-81h] BYREF
  int v59; // [rsp+68h] [rbp-69h]
  __int64 v60; // [rsp+78h] [rbp-59h] BYREF
  std::_Ref_count_base *v61; // [rsp+80h] [rbp-51h]
  _BYTE v62[36]; // [rsp+88h] [rbp-49h] BYREF
  _BYTE v63[36]; // [rsp+B0h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]

  v56 = 0LL;
  tip::tip_test<_tip_SnapLayoutProviderTest>::start_and_watch_errors(&v56, v57);
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  v6 = *(_QWORD *)(a3 + 16);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v7 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  if ( v7 )
    v8 = v7 + 144;
  else
    v8 = 0LL;
  *(_QWORD *)(v8 + 12) = v6;
  if ( v7 )
  {
    tip::details::test_common_data<0>::end_update(v7 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  v10 = (_QWORD *)(a1 + 136);
  if ( SnapLayoutProvider::UpdateMonitorDataFromPoint(
         (SnapLayoutProvider *)a1,
         (const struct Geometry::CPoint *)(a3 + 16),
         *(struct IApplicationView **)a3,
         *(struct ISnappedWindowModel **)(a3 + 8))
    || !*v10 )
  {
    LOBYTE(v9) = *(_BYTE *)(a1 + 128);
    v11 = (__int64 *)anonymous_namespace_::CreateDefaultLayout(&v56, v9);
    std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>((__int64 *)(a1 + 136), v11);
    if ( (_QWORD)v56 )
      std::default_delete<SnapLayoutBase>::operator()(v12, (__int64 (__fastcall ***)(_QWORD, __int64))v56);
    *(_DWORD *)(a1 + 24) = 1;
  }
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v13 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  v14 = v13 + 144;
  if ( !v13 )
    v14 = 0LL;
  *(_BYTE *)(v14 + 8) = 1;
  if ( v13 )
  {
    tip::details::test_common_data<0>::end_update(v13 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  v15 = *(_OWORD *)(a1 + 56);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v16 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  v17 = v16 + 144;
  if ( !v16 )
    v17 = 0LL;
  *(_OWORD *)(v17 + 20) = v15;
  if ( v16 )
  {
    tip::details::test_common_data<0>::end_update(v16 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  v18 = *(_OWORD *)(a1 + 72);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v19 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  v21 = v19 + 144;
  if ( !v19 )
    v21 = 0LL;
  *(_OWORD *)(v21 + 36) = v18;
  if ( v19 )
  {
    tip::details::test_common_data<0>::end_update(v19 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  if ( *(_DWORD *)(a1 + 24) != 1 )
  {
    if ( *(_DWORD *)(a1 + 24) != 2 )
    {
      if ( *(_DWORD *)(a1 + 24) != 3 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          463LL,
          (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
          (const char *)0x8007139FLL,
          v55);
      if ( ((*(_DWORD *)(a3 + 32) - 4) & 0xFFFFFFFB) == 0 )
        goto LABEL_41;
      goto LABEL_38;
    }
    if ( *(_DWORD *)(a3 + 32) != 2 )
    {
LABEL_38:
      LOBYTE(v20) = *(_BYTE *)(a1 + 128);
      v22 = (__int64 *)anonymous_namespace_::CreateDefaultLayout(&v56, v20);
      std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>((__int64 *)(a1 + 136), v22);
      if ( (_QWORD)v56 )
        std::default_delete<SnapLayoutBase>::operator()(v23, (__int64 (__fastcall ***)(_QWORD, __int64))v56);
      *(_DWORD *)(a1 + 24) = 1;
      goto LABEL_41;
    }
    if ( 1000000LL * *(_QWORD *)(a1 + 152) >= *std::chrono::steady_clock::now(&v56) - *(_QWORD *)(a1 + 144) )
      goto LABEL_67;
LABEL_41:
    (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64, __int64))(*(_QWORD *)*v10 + 8LL))(
      *v10,
      v63,
      *(_QWORD *)(a1 + 32),
      a1 + 48,
      a3);
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v56,
      &v60);
    v24 = v56;
    tip::details::test_common_data<0>::begin_update(v56 + 8);
    v25 = v24 + 144;
    if ( !v24 )
      v25 = 0LL;
    *(_BYTE *)(v25 + 9) = 0;
    if ( v24 )
    {
      tip::details::test_common_data<0>::end_update(v24 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
    }
    if ( *((_QWORD *)&v56 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v56,
      &v60);
    v26 = v56;
    tip::details::test_common_data<0>::begin_update(v56 + 8);
    v27 = v26 + 144;
    if ( !v26 )
      v27 = 0LL;
    *(_OWORD *)(v27 + 52) = *(_OWORD *)&v63[4];
    if ( v26 )
    {
      tip::details::test_common_data<0>::end_update(v26 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
    }
    if ( *((_QWORD *)&v56 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
    std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
      &v56,
      &v60);
    v28 = v56;
    tip::details::test_common_data<0>::begin_update(v56 + 8);
    v29 = v28 + 144;
    if ( !v28 )
      v29 = 0LL;
    *(_OWORD *)(v29 + 68) = *(_OWORD *)&v63[20];
    if ( v28 )
    {
      tip::details::test_common_data<0>::end_update(v28 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
    }
    if ( *((_QWORD *)&v56 + 1) )
      std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
    tip::details::test_common_data<0>::complete(v60 + 8);
    v30 = *(_OWORD *)v63;
    v31 = *(_OWORD *)&v63[16];
    v32 = *(_DWORD *)&v63[32];
    goto LABEL_60;
  }
  v41 = *(_DWORD *)(a3 + 32);
  if ( v41 != 2 )
  {
    if ( *(_BYTE *)(a1 + 128) && ((v41 - 4) & 0xFFFFFFFB) == 0 )
    {
      (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64, __int64))(*(_QWORD *)*v10 + 8LL))(
        *v10,
        v62,
        *(_QWORD *)(a1 + 32),
        a1 + 48,
        a3);
      v44 = MulDiv(100, *(_DWORD *)(a1 + 88), 96);
      v45 = *(_DWORD *)&v62[24];
      if ( *(int *)&v62[24] < *(_DWORD *)(a3 + 20) - v44 )
        v45 = *(_DWORD *)(a3 + 20) - v44;
      *(_DWORD *)&v62[24] = v45;
      v46 = *(_DWORD *)(a3 + 20) + v44;
      v47 = *(_DWORD *)&v62[32];
      if ( v46 < *(int *)&v62[32] )
        v47 = v46;
      *(_DWORD *)&v62[32] = v47;
      v48 = operator new(8uLL);
      *v48 = &RowSnapLayout::`vftable';
      *(_QWORD *)&v56 = v48;
      std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>(
        (__int64 *)(a1 + 136),
        (__int64 *)&v56);
      if ( (_QWORD)v56 )
        std::default_delete<SnapLayoutBase>::operator()(v49, (__int64 (__fastcall ***)(_QWORD, __int64))v56);
      *(_DWORD *)(a1 + 24) = 3;
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v56,
        &v60);
      v50 = v56;
      tip::details::test_common_data<0>::begin_update(v56 + 8);
      v51 = v50 + 144;
      if ( !v50 )
        v51 = 0LL;
      *(_BYTE *)(v51 + 9) = 0;
      if ( v50 )
      {
        tip::details::test_common_data<0>::end_update(v50 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
      }
      if ( *((_QWORD *)&v56 + 1) )
        std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v56,
        &v60);
      v52 = v56;
      tip::details::test_common_data<0>::begin_update(v56 + 8);
      v53 = v52 + 144;
      if ( !v52 )
        v53 = 0LL;
      *(_OWORD *)(v53 + 52) = *(_OWORD *)&v62[4];
      if ( v52 )
      {
        tip::details::test_common_data<0>::end_update(v52 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
      }
      if ( *((_QWORD *)&v56 + 1) )
        std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
      std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
        &v56,
        &v60);
      v38 = v56;
      tip::details::test_common_data<0>::begin_update(v56 + 8);
      v54 = v38 + 144;
      if ( !v38 )
        v54 = 0LL;
      *(_OWORD *)(v54 + 68) = *(_OWORD *)&v62[20];
      v40 = v38 == 0;
      goto LABEL_82;
    }
    goto LABEL_41;
  }
  v42 = operator new(8uLL);
  *v42 = &ColumnSnapLayout::`vftable';
  *(_QWORD *)&v56 = v42;
  std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>(
    (__int64 *)(a1 + 136),
    (__int64 *)&v56);
  if ( (_QWORD)v56 )
    std::default_delete<SnapLayoutBase>::operator()(v43, (__int64 (__fastcall ***)(_QWORD, __int64))v56);
  *(_DWORD *)(a1 + 24) = 2;
  if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
    goto LABEL_41;
  *(_QWORD *)(a1 + 144) = *std::chrono::steady_clock::now(&v56);
LABEL_67:
  SnapLayoutProvider::CreateInitialTopScrubbingResult(a1, v62, a3);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v34 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  v35 = v34 + 144;
  if ( !v34 )
    v35 = 0LL;
  *(_BYTE *)(v35 + 9) = 0;
  if ( v34 )
  {
    tip::details::test_common_data<0>::end_update(v34 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v36 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  v37 = v36 + 144;
  if ( !v36 )
    v37 = 0LL;
  *(_OWORD *)(v37 + 68) = *(_OWORD *)&v62[20];
  if ( v36 )
  {
    tip::details::test_common_data<0>::end_update(v36 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v56,
    &v60);
  v38 = v56;
  tip::details::test_common_data<0>::begin_update(v56 + 8);
  v39 = v38 + 144;
  v40 = v38 == 0;
  if ( !v38 )
    v39 = 0LL;
  *(_BYTE *)(v39 + 10) = 1;
LABEL_82:
  if ( !v40 )
  {
    tip::details::test_common_data<0>::end_update(v38 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v56);
  }
  if ( *((_QWORD *)&v56 + 1) )
    std::_Ref_count_base::_Decref(*((std::_Ref_count_base **)&v56 + 1));
  tip::details::test_common_data<0>::complete(v60 + 8);
  v30 = *(_OWORD *)v62;
  v31 = *(_OWORD *)&v62[16];
  v32 = *(_DWORD *)&v62[32];
LABEL_60:
  *(_OWORD *)a2 = v30;
  *(_OWORD *)(a2 + 16) = v31;
  *(_DWORD *)(a2 + 32) = v32;
  if ( v61 )
    std::_Ref_count_base::_Decref(v61);
  if ( v59 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v58);
  return a2;
}
