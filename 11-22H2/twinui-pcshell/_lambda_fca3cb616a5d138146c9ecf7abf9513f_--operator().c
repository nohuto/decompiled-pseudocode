/*
 * XREFs of _lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator() @ 0x180065C50
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___::RunTask @ 0x180065C40 (CMultitaskingViewTaskCallback__lambda_fca3cb616a5d138146c9ecf7abf9513f___--RunTask.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180192FD4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GuidedSnapAssistContinuity@@@details@wil@.c)
 *     ??$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil@@YA?AV?$com_ptr_t@UIMultitaskingViewForegroundStaging@@Uerr_failfast_policy@wil@@@0@AEAPEAUIMultitaskingViewManager@@@Z @ 0x18020CFD8 (--$com_query_failfast@UIMultitaskingViewForegroundStaging@@AEAPEAUIMultitaskingViewManager@@@wil.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_fca3cb616a5d138146c9ecf7abf9513f_::operator()(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 v4; // rax
  int (__fastcall *v5)(__int64 *, __int64, GUID *, __int64 *); // rbx
  int v6; // ebx
  __int64 (__fastcall *v8)(__int64 *, __int64, GUID *, __int64 *); // rbx
  int v9; // eax
  _QWORD *v10; // rax
  int v11; // [rsp+20h] [rbp-20h]
  __int64 v12[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 *v14; // [rsp+68h] [rbp+28h] BYREF
  __int64 v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  v2 = a2;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GuidedSnapAssistContinuity>::GetImpl'::`2'::impl,
    a2);
  v16 = 0LL;
  v4 = *v2;
  v16 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(v4 + 40))(
         v2,
         5LL,
         &GUID_49484dfc_13ca_4d28_aa1b_981c61ed37c9,
         &v16) >= 0 )
  {
    v10 = (_QWORD *)wil::com_query_failfast<IMultitaskingViewForegroundStaging,IMultitaskingViewManager * &>(v12, &v14);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v10 + 24LL))(*v10);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
  }
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v16);
  v15 = 0LL;
  v5 = *(int (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(*v2 + 40);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  if ( v5(v2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v15) < 0 )
  {
    v8 = *(__int64 (__fastcall **)(__int64 *, __int64, GUID *, __int64 *))(*v2 + 24);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    v9 = v8(v2, 2LL, &GUID_389221b7_bf28_4d25_9501_b4491d822be1, &v15);
    v6 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64,
        (unsigned int)"pcshell\\twinui\\multitaskingview\\lib\\allupviewservice.cpp",
        (const char *)(unsigned int)v9,
        v11);
      goto LABEL_6;
    }
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(
           v15,
           *(_QWORD *)a1,
           *(_QWORD *)(a1 + 8),
           *(unsigned int *)(a1 + 16));
    if ( v6 < 0 )
      goto LABEL_6;
  }
  else
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 56LL))(v15);
  }
  v6 = 0;
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
  return (unsigned int)v6;
}
