/*
 * XREFs of ?UwpWindowShowRequested@UwpWindowEventDispatcher@@UEAAJPEAUIShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803F6770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003DA78 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18003E8F0 (-reset@-$com_ptr_t@UIImmersiveWindowMessageService@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8B6C (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     ??$query@UIAppModelRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModelEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppModelRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8E68 (--$query@UIAppModelRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8EC8 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1803DD1FC (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     wil::MakeAgileCallback_IAsyncCallback__lambda_0a582c3909beb838555d95c4ea38ca28___ @ 0x1803E8EC0 (wil--MakeAgileCallback_IAsyncCallback__lambda_0a582c3909beb838555d95c4ea38ca28___.c)
 *     ?GetUwlm@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifecycleManagement@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x1803EE468 (-GetUwlm@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowLifecycleManager@UwpWindowLifec.c)
 *     ?GetWindowKindAndModel@@YAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1803EE69C (-GetWindowKindAndModel@@YAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4.c)
 *     ?TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1803F260C (-TryShowAsViewModeAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI.c)
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
  unsigned int v8; // r8d
  RTL_SRWLOCK *v9; // r15
  _QWORD *Uwlm; // rax
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, _QWORD, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 (__fastcall *v16)(__int64, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **); // rbx
  int v17; // eax
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  unsigned int v23; // r8d
  _QWORD *v24; // rax
  __int64 v25; // rdi
  __int64 (__fastcall *v26)(__int64, _QWORD, __int64 *); // rbx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  _QWORD *v31; // rax
  int v32; // eax
  int v33; // eax
  unsigned int v34; // r14d
  int v35; // eax
  const char *v36; // r9
  __int64 result; // rax
  int v38; // [rsp+20h] [rbp-E8h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v39; // [rsp+50h] [rbp-B8h] BYREF
  int v40; // [rsp+58h] [rbp-B0h] BYREF
  __int64 *v41; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v42; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+70h] [rbp-98h] BYREF
  __int64 v44; // [rsp+78h] [rbp-90h] BYREF
  __int64 v45; // [rsp+80h] [rbp-88h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *v46; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ***v47)(_QWORD, GUID *, _QWORD *); // [rsp+90h] [rbp-78h] BYREF
  unsigned int v48; // [rsp+98h] [rbp-70h] BYREF
  int v49; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v50; // [rsp+A0h] [rbp-68h] BYREF
  int v51; // [rsp+A4h] [rbp-64h] BYREF
  int v52; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+B0h] [rbp-58h] BYREF
  __int64 *v54; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v55; // [rsp+C0h] [rbp-48h] BYREF
  _QWORD v56[2]; // [rsp+C8h] [rbp-40h] BYREF
  char v57; // [rsp+D8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+0h]
  unsigned int v59; // [rsp+118h] [rbp+10h] BYREF
  int v60; // [rsp+120h] [rbp+18h] BYREF
  int v61; // [rsp+128h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v47 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x547,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v38);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModelEventArgs,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppModelRequestEventArgs>(
      &v47,
      &v54);
    v7 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), unsigned int *))(*v47)[6])(
           v47,
           &v59);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x54C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        v38);
    v43 = 0LL;
    v9 = (RTL_SRWLOCK *)((char *)this - 16);
    Uwlm = UwpWindowEventDispatcher::GetUwlm((__int64)this - 16, &v39, v8);
    v11 = *Uwlm;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*Uwlm + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v43);
    v13 = v12(v11, v59, &v43);
    if ( v13 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x54F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v13,
        v38);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
    if ( !v43 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x550,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v38);
    v39 = 0LL;
    v46 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64 **))(**((_QWORD **)this + 37) + 48LL))(
            *((_QWORD *)this + 37),
            &v41);
    v15 = *(_QWORD *)v14;
    v16 = *(__int64 (__fastcall **)(__int64, _QWORD, struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **))(**(_QWORD **)v14 + 80LL);
    wil::com_ptr_t<IImmersiveWindowMessageService,wil::err_exception_policy>::reset((__int64 *)&v46);
    v17 = v16(v15, v59, &v46);
    if ( v17 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x556,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v17,
        v38);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v41);
    v39 = 0LL;
    GetWindowKindAndModel(v46, (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v41, &v39);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v39,
      &v55);
    v60 = 0;
    v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v55 + 48LL))(v55, &v60);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x55D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v18,
        v38);
    v45 = 0LL;
    v19 = *v54;
    v45 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v19 + 72))(v54, &v45);
    if ( v20 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x560,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v20,
        v38);
    v41 = v54;
    if ( v54 )
      (*(void (__fastcall **)(__int64 *))(*v54 + 8))(v54);
    v42 = v45;
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 8LL))(v45);
    wil::MakeAgileCallback_IAsyncCallback__lambda_0a582c3909beb838555d95c4ea38ca28___(&v53, (__int64)&v41);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v42);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v41);
    v56[1] = &v53;
    v57 = 1;
    v21 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 48LL))(v43, &v40);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x572,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v21,
        v38);
    v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 72LL))(
            a2,
            &v48);
    if ( v22 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x575,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v22,
        v38);
    v44 = 0LL;
    v24 = UwpWindowEventDispatcher::GetUwlm((__int64)v9, &v41, v23);
    v25 = *v24;
    v26 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)*v24 + 112LL);
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v44);
    v27 = v26(v25, v48, &v44);
    if ( v27 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x578,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v27,
        v38);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v41);
    if ( !v44 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x579,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)0x80070057LL,
        v38);
    v28 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 48LL))(v44, &v61);
    if ( v28 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v28,
        v38);
    v29 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 88LL))(
            a2,
            &v52);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57F,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v29,
        v38);
    v30 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
            a2,
            &v51);
    if ( v30 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x583,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v30,
        v38);
    v31 = wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v39,
            &v41);
    v32 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)*v31 + 432LL))(*v31, &v49);
    if ( v32 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x587,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v32,
        v38);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v41);
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
      &v40,
      &v61);
    v33 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
            a2,
            v56);
    if ( v33 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x58C,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v33,
        v38);
    v34 = v49 == 1;
    v35 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 64LL))(
            a2,
            &v50);
    if ( v35 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x59A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v35,
        v38);
    UwpWindowEventDispatcher::TryShowAsViewModeAsync(v9, v40, v61, v34, v60, v52, v51, v56[0], v50, v53);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v44);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v53);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v45);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v55);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v46);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v39);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v43);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v54);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v47);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x5AE,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v36);
  }
  return result;
}
