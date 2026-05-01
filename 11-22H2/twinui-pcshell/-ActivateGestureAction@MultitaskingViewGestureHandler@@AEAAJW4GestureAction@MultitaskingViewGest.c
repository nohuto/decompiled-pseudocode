/*
 * XREFs of ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x18054D31C
 * Callers:
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x1802DF470 (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     _lambda_79a607d44e9569d9530329be2636626a_::operator() @ 0x18054D08C (_lambda_79a607d44e9569d9530329be2636626a_--operator().c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x18054F674 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     std::_Func_impl_no_alloc__lambda_e73f824cf3270f77b2a82ebcd610f772__void_HWND_____::_Do_call @ 0x1805508F0 (std--_Func_impl_no_alloc__lambda_e73f824cf3270f77b2a82ebcd610f772__void_HWND_____--_Do_call.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewSwitcher@@@Z @ 0x18007CC88 (--4-$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIAppli.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewCollection@@@Z @ 0x180147E50 (--4-$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GestureActionTriggered@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z @ 0x18054B348 (--$GestureActionTriggered@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___ @ 0x18054B48C (MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176___.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x18054C338 (_anonymous_namespace_--ProcessInputLambdaArgs--ProcessInputLambdaArgs.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs @ 0x18054C7F8 (_anonymous_namespace_--ProcessInputLambdaArgs--_ProcessInputLambdaArgs.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MultitaskingViewGestureHandler::ActivateGestureAction(__int64 a1, unsigned int a2, __int64 *a3)
{
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rbx
  void (__fastcall *v13)(__int64, __int64 *); // rdi
  __int64 v14; // rcx
  __int64 v15; // r9
  int v16; // ecx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int128 *); // rdi
  __int64 v19; // rcx
  int v20; // eax
  int MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176; // eax
  __int64 v22; // rdx
  __int64 v24[2]; // [rsp+30h] [rbp-79h] BYREF
  __int64 v25; // [rsp+40h] [rbp-69h] BYREF
  __int64 v26; // [rsp+48h] [rbp-61h]
  int v27[2]; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-51h]
  __int64 v29; // [rsp+60h] [rbp-49h] BYREF
  int v30; // [rsp+68h] [rbp-41h]
  __int128 v31; // [rsp+70h] [rbp-39h] BYREF
  __int64 v32[2]; // [rsp+80h] [rbp-29h] BYREF
  __int64 v33[10]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v35; // [rsp+110h] [rbp+67h] BYREF
  unsigned int v36; // [rsp+128h] [rbp+7Fh] BYREF

  memset_0(&v25, 0, 0x50uLL);
  v25 = 0LL;
  v26 = 0LL;
  *(_QWORD *)v27 = 0LL;
  v29 = 0LL;
  v31 = 0LL;
  v32[0] = 0LL;
  v6 = *(_QWORD *)(a1 + 40);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v6 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v27);
  v8 = v7(v6, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v27);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 40);
    v11 = v26;
    v26 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    v24[0] = 0LL;
    wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=(
      (__int64 *)&v31 + 1,
      *(_QWORD *)(a1 + 64));
    wil::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>::operator=(v32, *(_QWORD *)(a1 + 56));
    v30 = *(_DWORD *)(a1 + 220);
    if ( a2 )
    {
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 72LL);
      v14 = v29;
      v29 = 0LL;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13(v12, &v29);
      v16 = *(_DWORD *)(a1 + 132);
      LODWORD(v25) = *(_DWORD *)(a1 + 128);
      HIDWORD(v25) = v16;
      v28 = a2;
      if ( a3 )
        v32[1] = *a3;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v15);
      v17 = *(_QWORD *)(a1 + 120);
      if ( v17 )
      {
        v18 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v17 + 48LL);
        v19 = v31;
        *(_QWORD *)&v31 = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v20 = v18(v17, &v31);
        v9 = v20;
        if ( v20 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x27F,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
            (const char *)(unsigned int)v20);
LABEL_27:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
          goto LABEL_28;
        }
      }
      if ( !*(_DWORD *)(a1 + 160) && a2 != 6 )
      {
        LODWORD(v35) = v30;
        v36 = v28;
        MultitaskingViewTelemetry::GestureActionTriggered<unsigned int,unsigned int>(&v36, (unsigned int *)&v35);
      }
      anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs((__int64)v33, (__int64)&v25);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
      MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176 = MakeMultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176_(
                                                                                v24,
                                                                                (__int64)v33);
      v9 = MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176;
      if ( MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176 < 0 )
      {
        v22 = 776LL;
LABEL_24:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v22,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176);
        anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v33);
        goto LABEL_27;
      }
      MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 32) + 24LL))(
                                                                                *(_QWORD *)(a1 + 32),
                                                                                v24[0],
                                                                                1LL);
      v9 = MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176;
      if ( MultitaskingViewTaskCallback__lambda_02ea2976da830b140e60944cbaaa9176 < 0 )
      {
        v22 = 777LL;
        goto LABEL_24;
      }
      *(_DWORD *)(a1 + 160) = a2;
      anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v33);
    }
    v35 = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    v9 = 0;
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x266,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v8);
LABEL_28:
  anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(&v25);
  return v9;
}
