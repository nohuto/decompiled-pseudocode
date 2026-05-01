/*
 * XREFs of _lambda_75bac987ac5f971a4d8840925317feb1_::operator() @ 0x180495E0C
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___::RunTask @ 0x1804971E0 (CMultitaskingViewTaskCallback__lambda_75bac987ac5f971a4d8840925317feb1___--RunTask.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?complete@?$test_common_data@$0A@@details@tip@@QEAAXXZ @ 0x18011FDD8 (-complete@-$test_common_data@$0A@@details@tip@@QEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$start_and_watch_errors@V?$tip_test@U_tip_QuickSwitchTest@@@tip@@@tip@@YA?AV?$test_watcher@U_tip_QuickSwitchTest@@@0@XZ @ 0x180495A74 (--$start_and_watch_errors@V-$tip_test@U_tip_QuickSwitchTest@@@tip@@@tip@@YA-AV-$test_watcher@U_t.c)
 *     ?RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ @ 0x18049719C (-RaiseDesktop@MultitaskingViewGestureHandlerHelpers@@YAHXZ.c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z @ 0x18049DA90 (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAHIIH@Z.c)
 *     ?PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z @ 0x18049DADC (-PTPGestureActionCompletedTelemetry@MultitaskingViewGestureTelemetry@@YAJIIJ@Z.c)
 *     ?SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewSwitcher@@PEAUIVirtualDesktop@@@Z @ 0x18049E018 (-SwitchToLastActivatedView@MultitaskingViewGestureHandlerHelpers@@YAJPEAUIApplicationViewCollect.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_75bac987ac5f971a4d8840925317feb1_::operator()(__int64 *a1, __int64 a2)
{
  struct IVirtualDesktop *v4; // r9
  unsigned int ActivatedView; // ebx
  int v6; // r9d
  __int64 (__fastcall *v7)(__int64, __int64, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // eax
  int v11; // r9d
  __int64 (__fastcall *v12)(__int64, __int64, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 (__fastcall *v15)(__int64, __int64, GUID *, __int64 *); // rbx
  unsigned int v16; // r14d
  int v17; // eax
  __int64 v18; // r9
  __int64 v19; // rdx
  unsigned int v20; // eax
  int v21; // r9d
  HWND WindowW; // rax
  BOOL v23; // eax
  int v24; // r9d
  const char *v25; // r9
  __int64 v26; // rdx
  unsigned int v27; // eax
  int v28; // r9d
  __int64 (__fastcall *v30)(__int64, __int64, GUID *, __int64 *); // rbx
  int v31; // eax
  __int64 v32; // rdx
  unsigned int v33; // eax
  int v34; // r9d
  __int64 (__fastcall *v35)(__int64, __int64, GUID *, __int64 *); // rbx
  unsigned int v36; // eax
  int v37; // r9d
  _BYTE v38[8]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v39[24]; // [rsp+38h] [rbp-38h] BYREF
  int v40; // [rsp+50h] [rbp-20h]
  __int64 v41; // [rsp+60h] [rbp-10h]
  std::_Ref_count_base *v42; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]
  __int64 v44; // [rsp+90h] [rbp+20h] BYREF
  __int64 v45; // [rsp+A0h] [rbp+30h] BYREF

  switch ( *((_DWORD *)a1 + 6) )
  {
    case 1:
      v44 = 0LL;
      v35 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v44);
      v31 = v35(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v44);
      ActivatedView = v31;
      if ( v31 >= 0 )
      {
        v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, bool))(*(_QWORD *)v44 + 48LL))(
                v44,
                a1[1],
                a1[2],
                *((_DWORD *)a1 + 10) == 2);
        v31 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                *((_DWORD *)a1 + 10),
                v36,
                v37);
        ActivatedView = v31;
        if ( v31 >= 0 )
        {
LABEL_52:
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v44);
          return ActivatedView;
        }
        v32 = 563LL;
      }
      else
      {
        v32 = 554LL;
      }
LABEL_51:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v32,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v31);
      goto LABEL_52;
    case 2:
      v44 = 0LL;
      v30 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v44);
      v31 = v30(a2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v44);
      ActivatedView = v31;
      if ( v31 >= 0 )
      {
        v33 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 64LL))(v44);
        v31 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                *((_DWORD *)a1 + 10),
                v33,
                v34);
        ActivatedView = v31;
        if ( v31 >= 0 )
        {
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v44);
          return 0LL;
        }
        v32 = 573LL;
      }
      else
      {
        v32 = 570LL;
      }
      goto LABEL_51;
    case 3:
      v27 = MultitaskingViewGestureHandlerHelpers::RaiseDesktop((MultitaskingViewGestureHandlerHelpers *)a1);
      if ( (unsigned int)MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                           (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                           *((_DWORD *)a1 + 10),
                           v27,
                           v28) )
        return 0LL;
      v26 = 581LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v26,
               (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v25);
    case 4:
      WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
      v23 = PostMessageW(WindowW, 0x579u, 2uLL, 0LL);
      if ( (unsigned int)MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                           (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                           *((_DWORD *)a1 + 10),
                           v23,
                           v24) )
        return 0LL;
      v26 = 589LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v26,
               (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
               v25);
    case 5:
      v44 = 0LL;
      v15 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
      v16 = 1;
      v17 = v15(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v44);
      ActivatedView = v17;
      if ( v17 >= 0 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
          1u,
          3u,
          v18);
        if ( *((_DWORD *)a1 + 10) != 2 )
          v16 = 4;
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v44 + 48LL))(
                v44,
                a1[2],
                v16,
                a1[4]);
        v17 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
                (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
                *((_DWORD *)a1 + 10),
                v20,
                v21);
        ActivatedView = v17;
        if ( v17 >= 0 )
          break;
        v19 = 605LL;
      }
      else
      {
        v19 = 596LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v19,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v17);
      break;
    case 6:
      v44 = 0LL;
      v12 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
      v13 = v12(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v44);
      ActivatedView = v13;
      if ( v13 >= 0 )
      {
        v45 = *a1;
        v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v44 + 72LL))(v44, &v45);
        ActivatedView = v13;
        if ( v13 >= 0 )
          break;
        v14 = 614LL;
      }
      else
      {
        v14 = 612LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
        (const char *)(unsigned int)v13);
      break;
    case 7:
      v44 = 0LL;
      v7 = *(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
      v8 = v7(a2, 1LL, &GUID_405444d2_baa5_48ed_abfe_a673f70be863, &v44);
      ActivatedView = v8;
      if ( v8 < 0 )
      {
        v9 = 621LL;
LABEL_20:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v9,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)(unsigned int)v8);
        break;
      }
      v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 64LL))(v44);
      v8 = MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
             (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
             *((_DWORD *)a1 + 10),
             v10,
             v11);
      ActivatedView = v8;
      if ( v8 < 0 )
      {
        v9 = 624LL;
        goto LABEL_20;
      }
      break;
    case 8:
      tip::start_and_watch_errors<tip::tip_test<_tip_QuickSwitchTest>>((struct wil::details::IFailureCallback *)v38);
      ActivatedView = MultitaskingViewGestureHandlerHelpers::SwitchToLastActivatedView(
                        (MultitaskingViewGestureHandlerHelpers *)a1[8],
                        (struct IApplicationViewCollection *)a1[7],
                        (struct IApplicationViewSwitcher *)a1[6],
                        v4);
      MultitaskingViewGestureTelemetry::PTPGestureActionCompletedTelemetry(
        (MultitaskingViewGestureTelemetry *)*((unsigned int *)a1 + 6),
        *((_DWORD *)a1 + 10),
        ActivatedView,
        v6);
      if ( (ActivatedView & 0x80000000) == 0 )
        tip::details::test_common_data<0>::complete(v41 + 8);
      else
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x27F,
          (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
          (const char *)ActivatedView);
      if ( v42 )
        std::_Ref_count_base::_Decref(v42);
      if ( v40 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v39);
      return ActivatedView;
    default:
      return 0LL;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v44);
  return ActivatedView;
}
