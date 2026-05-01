/*
 * XREFs of ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D30A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18009B91C (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?GetWindowKindAndModel@@YAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1800A1044 (-GetWindowKindAndModel@@YAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18019204C (-reset@-$com_ptr_t@UIViewPresentationMediator@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F35F4 (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     _lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_ @ 0x1801F36EC (_lambda_f82707194b3fa373e7b6403391ead5df_--__lambda_f82707194b3fa373e7b6403391ead5df_.c)
 *     wil::MakeAgileCallback_IAsyncCallback__lambda_f82707194b3fa373e7b6403391ead5df___ @ 0x1801F4440 (wil--MakeAgileCallback_IAsyncCallback__lambda_f82707194b3fa373e7b6403391ead5df___.c)
 *     ??$query@UIAppModelRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModelEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppModelRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F4844 (--$query@UIAppModelRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     wil::details::lambda_call__lambda_2ab83141f6878b43f0c12c4a67c34018___::_lambda_call__lambda_2ab83141f6878b43f0c12c4a67c34018___ @ 0x1801F48D4 (wil--details--lambda_call__lambda_2ab83141f6878b43f0c12c4a67c34018___--_lambda_call__lambda_2ab8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1804BA258 (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@_KPEAUIAsyncCallback@@@Z @ 0x1804D2944 (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowShowRequested(
        UwpWindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  int v7; // eax
  RTL_SRWLOCK *v8; // r12
  _QWORD *Uwlm; // rax
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, _QWORD, __int64 *); // rdi
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **); // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  int v20; // r15d
  int v21; // eax
  int v22; // eax
  int v23; // eax
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 (__fastcall *v26)(__int64, _QWORD, __int64 *); // rdi
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  const char *v35; // r9
  __int64 result; // rax
  int v37; // [rsp+20h] [rbp-118h]
  __int64 v38; // [rsp+60h] [rbp-D8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v39; // [rsp+68h] [rbp-D0h] BYREF
  int v40; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v41; // [rsp+78h] [rbp-C0h] BYREF
  __int64 v42; // [rsp+80h] [rbp-B8h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v43; // [rsp+88h] [rbp-B0h] BYREF
  __int64 *v44; // [rsp+90h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v45)(_QWORD, GUID *, _QWORD *); // [rsp+98h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-98h] BYREF
  __int64 v47; // [rsp+A8h] [rbp-90h] BYREF
  unsigned int v48; // [rsp+B0h] [rbp-88h] BYREF
  int v49; // [rsp+B4h] [rbp-84h] BYREF
  int v50; // [rsp+B8h] [rbp-80h] BYREF
  int v51; // [rsp+BCh] [rbp-7Ch] BYREF
  int v52; // [rsp+C0h] [rbp-78h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-70h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-68h] BYREF
  __int64 v55; // [rsp+D8h] [rbp-60h] BYREF
  __int64 v56; // [rsp+E0h] [rbp-58h] BYREF
  __int64 *v57; // [rsp+E8h] [rbp-50h] BYREF
  char v58; // [rsp+F0h] [rbp-48h]
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+0h]
  unsigned int v60; // [rsp+148h] [rbp+10h] BYREF
  int v61; // [rsp+150h] [rbp+18h] BYREF
  int v62; // [rsp+158h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v45 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x56B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v37);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppModelRequestEventArgs>(
      &v45,
      &v44);
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), unsigned int *))(*v45)[6])(
           v45,
           &v60);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x570,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v37);
    v38 = 0LL;
    v8 = (RTL_SRWLOCK *)((char *)this - 16);
    Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)this - 16, &v39);
    v10 = *Uwlm;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
    v38 = 0LL;
    v12 = v11(v10, v60, &v38);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x573,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
    if ( !v38 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x574,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v37);
    v39 = 0LL;
    v43 = 0LL;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 38) + 48LL))(*((_QWORD *)this + 38), &v46);
    v14 = *(_QWORD *)v13;
    v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **))(**(_QWORD **)v13 + 80LL);
    wil::com_ptr_t<IViewPresentationMediator,wil::err_returncode_policy>::reset((__int64 *)&v43);
    v16 = v15(v14, v60, &v43);
    if ( v16 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v16,
        v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
    v39 = 0LL;
    GetWindowKindAndModel(v43, (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v46, &v39);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v39,
      &v55);
    v61 = 0;
    v17 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v55 + 48LL))(v55, &v61);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x581,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        v37);
    v42 = 0LL;
    v18 = *v44;
    v42 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v18 + 72))(v44, &v42);
    if ( v19 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x584,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v19,
        v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
      &v46,
      (__int64 *)&v44);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v47, &v42);
    wil::MakeAgileCallback_IAsyncCallback__lambda_f82707194b3fa373e7b6403391ead5df___(&v53, &v46);
    lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_(&v46);
    v57 = &v53;
    v20 = 1;
    v58 = 1;
    v54 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v44 + 64))(v44, &v54);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x596,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v21,
        v37);
    v22 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v38 + 48LL))(v38, &v40);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x599,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v22,
        v37);
    v23 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 72LL))(
            a2,
            &v48);
    if ( v23 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v23,
        v37);
    v41 = 0LL;
    v24 = UwpWindowEventDispatcher::GetUwlm((__int64)v8, &v46);
    v25 = *v24;
    v26 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v24 + 112LL);
    v27 = v41;
    v41 = 0LL;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v28 = v26(v25, v48, &v41);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v28,
        v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v46);
    if ( !v41 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v37);
    v29 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v41 + 48LL))(v41, &v62);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v29,
        v37);
    v30 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 88LL))(
            a2,
            &v52);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5A6,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v30,
        v37);
    v31 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
            a2,
            &v51);
    if ( v31 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5AA,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v31,
        v37);
    v32 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
            a2,
            &v49);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5AE,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v32,
        v37);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
      &v40,
      &v62);
    v33 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, __int64 *))(*(_QWORD *)a2 + 56LL))(
            a2,
            &v56);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5B3,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v33,
        v37);
    if ( v49 != 1 )
      v20 = 0;
    v34 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &v50);
    if ( v34 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x5C1,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v34,
        v37);
    UwpWindowEventDispatcher::TryShowAsViewModeAsync(v8, v40, v62, v20, v61, v52, v51, v56, v50, v54, v53);
    v58 = 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v41);
    wil::details::lambda_call__lambda_2ab83141f6878b43f0c12c4a67c34018___::_lambda_call__lambda_2ab83141f6878b43f0c12c4a67c34018___(&v57);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v55);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v43);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v45);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5D6,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v35);
  }
  return result;
}
