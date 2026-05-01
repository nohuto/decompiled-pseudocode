/*
 * XREFs of ?CalculateSnapRegion@SnapLayoutProvider@@QEAA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F050
 * Callers:
 *     ?OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2PEAUtagRECT@@3@Z @ 0x180661C80 (-OnGetWindowArrangementRects@CShellSnapComponent@@UEAAJPEAUIApplicationView@@UtagPOINT@@IKPEAK2P.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801CF85C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18022968C (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@Uerr_returncode_po.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802296DC (--1-$test_data_control@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180229714 (--1-$test_watcher@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@1@XZ @ 0x180229758 (--C-$test_watcher@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AV-.c)
 *     ?complete@?$test_watcher@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802297D8 (-complete@-$test_watcher@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180229974 (-start@-$tip_test@V-$merged_data@U_tip_SnapLayoutProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AU_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??R?$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z @ 0x18065F850 (--R-$default_delete@VSnapLayoutBase@@@std@@QEBAXPEAVSnapLayoutBase@@@Z.c)
 *     ??$?4U?$default_delete@VSnapLayoutBase@@@std@@$0A@@?$unique_ptr@VSnapLayoutBase@@U?$default_delete@VSnapLayoutBase@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18067EBA8 (--$-4U-$default_delete@VSnapLayoutBase@@@std@@$0A@@-$unique_ptr@VSnapLayoutBase@@U-$default_dele.c)
 *     ??1?$unique_ptr@VColumnSnapLayout@@U?$default_delete@VColumnSnapLayout@@@std@@@std@@QEAA@XZ @ 0x18067EBE0 (--1-$unique_ptr@VColumnSnapLayout@@U-$default_delete@VColumnSnapLayout@@@std@@@std@@QEAA@XZ.c)
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x18067F970 (_anonymous_namespace_--CreateDefaultLayout.c)
 *     ?CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA?AUCalculatedSnapRegion@@AEBUSnapRegionCalculationArgs@@@Z @ 0x18067F9B8 (-CreateInitialTopScrubbingResult@SnapLayoutProvider@@AEBA-AUCalculatedSnapRegion@@AEBUSnapRegion.c)
 *     ?UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@@PEAUISnappedWindowModel@@@Z @ 0x18067FB14 (-UpdateMonitorDataFromPoint@SnapLayoutProvider@@AEAA_NAEBUCPoint@Geometry@@PEAUIApplicationView@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLayoutProvider::CalculateSnapRegion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int128 v13; // xmm6
  __int64 v14; // rdx
  __int128 v15; // xmm6
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  int v27; // eax
  __int64 v29; // rdx
  _QWORD *v30; // rax
  __m128i v31; // xmm6
  __int64 v32; // rdx
  __int64 v33; // rdx
  void **v34; // rcx
  int v35; // eax
  volatile signed __int32 *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // edx
  volatile signed __int32 *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *v50; // rax
  __int64 v51; // rdx
  int v52; // [rsp+28h] [rbp-E0h]
  volatile signed __int32 *v53; // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v54)(_QWORD, __int64); // [rsp+40h] [rbp-C8h] BYREF
  void *v55; // [rsp+48h] [rbp-C0h] BYREF
  void *v56; // [rsp+50h] [rbp-B8h] BYREF
  void *v57; // [rsp+58h] [rbp-B0h] BYREF
  void **v58; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v59[40]; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v60; // [rsp+90h] [rbp-78h]
  void *v61; // [rsp+98h] [rbp-70h] BYREF
  __int64 (__fastcall ***v62)(_QWORD, __int64); // [rsp+A0h] [rbp-68h] BYREF
  void *v63; // [rsp+A8h] [rbp-60h] BYREF
  void *v64; // [rsp+B0h] [rbp-58h] BYREF
  void *v65; // [rsp+B8h] [rbp-50h] BYREF
  void *v66; // [rsp+C0h] [rbp-48h] BYREF
  __int128 v67; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v68[36]; // [rsp+D8h] [rbp-30h] BYREF
  _BYTE v69[36]; // [rsp+100h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  v53 = 0LL;
  tip2::tip_test<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::start(&v53, &v67);
  v58 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v59,
    (struct wil::details::IFailureCallback *)&v58,
    0LL,
    1);
  v60 = v53;
  if ( v53 )
    _InterlockedIncrement(v53 + 86);
  wil::com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>,wil::err_returncode_policy>((void **)&v53);
  v6 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                 (__int64)&v58,
                 &v61)
            + 268LL) = v6;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v61,
    v7);
  v9 = (_QWORD *)(a1 + 136);
  if ( SnapLayoutProvider::UpdateMonitorDataFromPoint(
         (SnapLayoutProvider *)a1,
         (const struct Geometry::CPoint *)(a3 + 16),
         *(struct IApplicationView **)a3,
         *(struct ISnappedWindowModel **)(a3 + 8))
    || !*v9 )
  {
    LOBYTE(v8) = *(_BYTE *)(a1 + 128);
    v10 = (__int64 *)anonymous_namespace_::CreateDefaultLayout(&v62, v8);
    std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>((__int64 *)(a1 + 136), v10);
    if ( v62 )
      std::default_delete<SnapLayoutBase>::operator()(v11, v62);
    *(_DWORD *)(a1 + 24) = 1;
  }
  *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                (__int64)&v58,
                &v63)
           + 264LL) = 1;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v63,
    v12);
  v13 = *(_OWORD *)(a1 + 56);
  *(_OWORD *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                 (__int64)&v58,
                 &v64)
            + 276LL) = v13;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v64,
    v14);
  v15 = *(_OWORD *)(a1 + 72);
  *(_OWORD *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                 (__int64)&v58,
                 &v65)
            + 292LL) = v15;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v65,
    v16);
  switch ( *(_DWORD *)(a1 + 24) )
  {
    case 1:
      v35 = *(_DWORD *)(a3 + 32);
      if ( v35 == 2 )
      {
        v36 = (volatile signed __int32 *)operator new(8uLL);
        *(_QWORD *)v36 = &ColumnSnapLayout::`vftable';
        v56 = 0LL;
        v53 = v36;
        std::unique_ptr<ColumnSnapLayout>::~unique_ptr<ColumnSnapLayout>((SnapLayoutBase **)&v56);
        std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>(
          (__int64 *)(a1 + 136),
          (__int64 *)&v53);
        if ( v53 )
          std::default_delete<SnapLayoutBase>::operator()(v37, (__int64 (__fastcall ***)(_QWORD, __int64))v53);
        *(_DWORD *)(a1 + 24) = 2;
        if ( (*(_BYTE *)(a3 + 24) & 1) != 0 )
          break;
        *(_QWORD *)(a1 + 144) = *std::chrono::steady_clock::now(&v67);
        SnapLayoutProvider::CreateInitialTopScrubbingResult(a1, v68, a3);
        *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                      (__int64)&v58,
                      &v55)
                 + 265LL) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          &v55,
          v38);
        v39 = tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                (__int64)&v58,
                &v54);
        v31 = *(__m128i *)&v68[20];
        *(_OWORD *)(*v39 + 324LL) = *(_OWORD *)&v68[20];
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          (void **)&v54,
          v40);
        *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                      (__int64)&v58,
                      &v57)
                 + 266LL) = 1;
        v34 = &v57;
LABEL_22:
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          v34,
          v33);
        tip2::test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::complete((__int64)&v58);
        *(_OWORD *)a2 = *(_OWORD *)v68;
        *(_OWORD *)(a2 + 16) = *(_OWORD *)&v68[16];
        *(_DWORD *)(a2 + 32) = _mm_cvtsi128_si32(_mm_srli_si128(v31, 12));
        goto LABEL_18;
      }
      if ( *(_BYTE *)(a1 + 128) && ((v35 - 4) & 0xFFFFFFFB) == 0 )
      {
        (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64, __int64))(*(_QWORD *)*v9 + 8LL))(
          *v9,
          v68,
          *(_QWORD *)(a1 + 32),
          a1 + 48,
          a3);
        v41 = MulDiv(100, *(_DWORD *)(a1 + 88), 96);
        v42 = *(_DWORD *)&v68[24];
        if ( *(int *)&v68[24] < *(_DWORD *)(a3 + 20) - v41 )
          v42 = *(_DWORD *)(a3 + 20) - v41;
        *(_DWORD *)&v68[24] = v42;
        v43 = *(_DWORD *)(a3 + 20) + v41;
        v44 = *(_DWORD *)&v68[32];
        if ( v43 < *(int *)&v68[32] )
          v44 = v43;
        *(_DWORD *)&v68[32] = v44;
        v45 = (volatile signed __int32 *)operator new(8uLL);
        *(_QWORD *)v45 = &RowSnapLayout::`vftable';
        v57 = 0LL;
        v53 = v45;
        std::unique_ptr<ColumnSnapLayout>::~unique_ptr<ColumnSnapLayout>((SnapLayoutBase **)&v57);
        std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>(
          (__int64 *)(a1 + 136),
          (__int64 *)&v53);
        if ( v53 )
          std::default_delete<SnapLayoutBase>::operator()(v46, (__int64 (__fastcall ***)(_QWORD, __int64))v53);
        *(_DWORD *)(a1 + 24) = 3;
        *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                      (__int64)&v58,
                      &v56)
                 + 265LL) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          &v56,
          v47);
        v48 = tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                (__int64)&v58,
                &v55);
        *(_OWORD *)(*v48 + 308LL) = *(_OWORD *)&v68[4];
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          &v55,
          v49);
        v50 = tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                (__int64)&v58,
                &v54);
        *(_OWORD *)(*v50 + 324LL) = *(_OWORD *)&v68[20];
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          (void **)&v54,
          v51);
        tip2::test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::complete((__int64)&v58);
        v25 = *(_OWORD *)v68;
        v26 = *(_OWORD *)&v68[16];
        v27 = *(_DWORD *)&v68[32];
        goto LABEL_17;
      }
      break;
    case 2:
      if ( *(_DWORD *)(a3 + 32) != 2 )
      {
LABEL_13:
        LOBYTE(v17) = *(_BYTE *)(a1 + 128);
        v18 = (__int64 *)anonymous_namespace_::CreateDefaultLayout(&v54, v17);
        std::unique_ptr<SnapLayoutBase>::operator=<std::default_delete<SnapLayoutBase>,0>((__int64 *)(a1 + 136), v18);
        if ( v54 )
          std::default_delete<SnapLayoutBase>::operator()(v19, v54);
        *(_DWORD *)(a1 + 24) = 1;
        break;
      }
      if ( 1000000LL * *(_QWORD *)(a1 + 152) >= *std::chrono::steady_clock::now(&v67) - *(_QWORD *)(a1 + 144) )
      {
        SnapLayoutProvider::CreateInitialTopScrubbingResult(a1, v68, a3);
        *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                      (__int64)&v58,
                      &v54)
                 + 265LL) = 0;
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          (void **)&v54,
          v29);
        v30 = tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                (__int64)&v58,
                &v55);
        v31 = *(__m128i *)&v68[20];
        *(_OWORD *)(*v30 + 324LL) = *(_OWORD *)&v68[20];
        tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
          &v55,
          v32);
        *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                      (__int64)&v58,
                      &v56)
                 + 266LL) = 1;
        v34 = &v56;
        goto LABEL_22;
      }
      break;
    case 3:
      if ( *(_DWORD *)(a3 + 32) == 8 || *(_DWORD *)(a3 + 32) == 4 )
        break;
      goto LABEL_13;
    default:
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C2,
        (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplayoutprovider.cpp",
        (const char *)0x8007139FLL,
        v52);
  }
  (*(void (__fastcall **)(_QWORD, _BYTE *, _QWORD, __int64, __int64))(*(_QWORD *)*v9 + 8LL))(
    *v9,
    v69,
    *(_QWORD *)(a1 + 32),
    a1 + 48,
    a3);
  *(_BYTE *)(*tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
                (__int64)&v58,
                &v57)
           + 265LL) = 0;
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v57,
    v20);
  v21 = tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
          (__int64)&v58,
          &v55);
  *(_OWORD *)(*v21 + 308LL) = *(_OWORD *)&v69[4];
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v55,
    v22);
  v23 = tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::operator->(
          (__int64)&v58,
          &v66);
  *(_OWORD *)(*v23 + 324LL) = *(_OWORD *)&v69[20];
  tip2::test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_data_control<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>(
    &v66,
    v24);
  tip2::test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::complete((__int64)&v58);
  v25 = *(_OWORD *)v69;
  v26 = *(_OWORD *)&v69[16];
  v27 = *(_DWORD *)&v69[32];
LABEL_17:
  *(_OWORD *)a2 = v25;
  *(_OWORD *)(a2 + 16) = v26;
  *(_DWORD *)(a2 + 32) = v27;
LABEL_18:
  tip2::test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>::~test_watcher<tip2::details::merged_data<_tip_SnapLayoutProviderTest,_tip_SnapLayoutProviderTest>>((__int64)&v58);
  return a2;
}
