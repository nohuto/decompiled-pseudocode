/*
 * XREFs of ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x180230760
 * Callers:
 *     ?ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180230D4A (-ProcessTouchpadGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaski.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 * Callees:
 *     ??4?$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewSwitcher@@@Z @ 0x180018708 (--4-$com_ptr_t@UIApplicationViewSwitcher@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIAppli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIApplicationViewCollection@@@Z @ 0x18010E060 (--4-$com_ptr_t@UIApplicationViewCollection@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAp.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GestureActionTriggered@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z @ 0x1804953B0 (--$GestureActionTriggered@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z.c)
 *     MakeMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___ @ 0x1804954F4 (MakeMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs @ 0x180495BC4 (_anonymous_namespace_--ProcessInputLambdaArgs--ProcessInputLambdaArgs.c)
 *     _anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs @ 0x180495DC0 (_anonymous_namespace_--ProcessInputLambdaArgs--_ProcessInputLambdaArgs.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall MultitaskingViewGestureHandler::ActivateGestureAction(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, GUID *, GUID *, int *); // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rbx
  void (__fastcall *v11)(__int64, __int64 *); // rdi
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, __int64, __int128 *); // rdi
  __int64 v19; // rcx
  int MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1; // eax
  __int64 v21; // rdx
  __int64 v23; // [rsp+30h] [rbp-79h] BYREF
  __int64 v24; // [rsp+38h] [rbp-71h]
  int v25[2]; // [rsp+40h] [rbp-69h] BYREF
  int v26; // [rsp+48h] [rbp-61h]
  __int64 v27; // [rsp+50h] [rbp-59h] BYREF
  int v28; // [rsp+58h] [rbp-51h]
  __int128 v29; // [rsp+60h] [rbp-49h] BYREF
  __int64 v30; // [rsp+70h] [rbp-39h] BYREF
  __int64 v31; // [rsp+80h] [rbp-29h] BYREF
  _BYTE v32[112]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+5Fh]
  __int64 v34; // [rsp+110h] [rbp+67h] BYREF
  int v35; // [rsp+120h] [rbp+77h] BYREF
  __int64 v36; // [rsp+128h] [rbp+7Fh] BYREF

  memset_0(&v23, 0, 0x48uLL);
  v23 = 0LL;
  v24 = 0LL;
  *(_QWORD *)v25 = 0LL;
  v27 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, GUID *, int *))(*(_QWORD *)v4 + 72LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v25);
  v6 = v5(v4, 0LL, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, &GUID_880b26f8_9197_43d0_8045_8702d0d72000, v25);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = *(_QWORD *)(a1 + 40);
    v9 = v24;
    v24 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    v36 = 0LL;
    wil::com_ptr_t<IApplicationViewSwitcher,wil::err_exception_policy>::operator=(
      (__int64 *)&v29 + 1,
      *(_QWORD *)(a1 + 64));
    wil::com_ptr_t<IApplicationViewCollection,wil::err_returncode_policy>::operator=(&v30, *(_QWORD *)(a1 + 56));
    v28 = *(_DWORD *)(a1 + 220);
    if ( a2 )
    {
      v10 = *(_QWORD *)(a1 + 56);
      v11 = *(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 72LL);
      v12 = v27;
      v27 = 0LL;
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      v11(v10, &v27);
      v13 = *(_DWORD *)(a1 + 132);
      LODWORD(v23) = *(_DWORD *)(a1 + 128);
      HIDWORD(v23) = v13;
      v26 = a2;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v14);
      v15 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)v25 + 40LL))(*(_QWORD *)v25, &v31);
      v7 = v15;
      if ( v15 < 0 )
      {
        v16 = 525LL;
LABEL_17:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v15);
LABEL_28:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
        goto LABEL_29;
      }
      v17 = *(_QWORD *)(a1 + 120);
      if ( v17 )
      {
        v18 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v17 + 48LL);
        v19 = v29;
        *(_QWORD *)&v29 = 0LL;
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v15 = v18(v17, v31, &v29);
        v7 = v15;
        if ( v15 < 0 )
        {
          v16 = 529LL;
          goto LABEL_17;
        }
      }
      if ( !*(_DWORD *)(a1 + 160) && a2 != 6 )
      {
        LODWORD(v34) = v28;
        v35 = v26;
        MultitaskingViewTelemetry::GestureActionTriggered<unsigned int,unsigned int>(&v35, &v34);
      }
      anonymous_namespace_::ProcessInputLambdaArgs::ProcessInputLambdaArgs(v32, &v23);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v36);
      MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1 = MakeMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1_(
                                                                                &v36,
                                                                                v32);
      v7 = MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1;
      if ( MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1 < 0 )
      {
        v21 = 651LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1);
        anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v32);
        goto LABEL_28;
      }
      MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 32) + 24LL))(
                                                                                *(_QWORD *)(a1 + 32),
                                                                                v36,
                                                                                1LL);
      v7 = MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1;
      if ( MultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1 < 0 )
      {
        v21 = 652LL;
        goto LABEL_25;
      }
      *(_DWORD *)(a1 + 160) = a2;
      anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(v32);
    }
    v34 = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
    v7 = 0;
    goto LABEL_28;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1FA,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
    (const char *)(unsigned int)v6);
LABEL_29:
  anonymous_namespace_::ProcessInputLambdaArgs::_ProcessInputLambdaArgs(&v23);
  return v7;
}
