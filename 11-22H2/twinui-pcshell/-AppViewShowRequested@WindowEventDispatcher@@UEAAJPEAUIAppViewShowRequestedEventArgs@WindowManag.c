/*
 * XREFs of ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0550
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_bada70271c5a82e5645f19125eaa543d___ @ 0x1801F2B00 (Microsoft--WRL--Callback_IAsyncCallback__lambda_bada70271c5a82e5645f19125eaa543d___.c)
 *     ??$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F35F4 (--$query@UIUniversalAppModelPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_p.c)
 *     _lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_ @ 0x1801F36EC (_lambda_f82707194b3fa373e7b6403391ead5df_--__lambda_f82707194b3fa373e7b6403391ead5df_.c)
 *     wil::details::ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___::_ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___ @ 0x1801F373C (wil--details--ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___--_ScopeExitFn__lambda_20ce.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1804BA258 (--$WindowEventDispatcher_OnAppViewShowRequested@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804C6C88 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1804CB310 (-TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Wi.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall WindowEventDispatcher::AppViewShowRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *a2)
{
  __int64 (**v4)(void); // rax
  __int64 (*v5)(void); // rax
  int v6; // eax
  __int64 v7; // rax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 (**v13)(void); // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  BOOL v20; // esi
  int v21; // eax
  const char *v22; // r9
  __int64 result; // rax
  int v24; // [rsp+20h] [rbp-A8h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v25; // [rsp+50h] [rbp-78h] BYREF
  __int64 *v26; // [rsp+58h] [rbp-70h] BYREF
  __int64 v27; // [rsp+60h] [rbp-68h] BYREF
  int v28; // [rsp+68h] [rbp-60h] BYREF
  int v29; // [rsp+6Ch] [rbp-5Ch] BYREF
  int v30; // [rsp+70h] [rbp-58h] BYREF
  int v31; // [rsp+74h] [rbp-54h] BYREF
  __int64 v32; // [rsp+78h] [rbp-50h] BYREF
  volatile int *v33; // [rsp+80h] [rbp-48h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v34; // [rsp+88h] [rbp-40h] BYREF
  volatile int **v35; // [rsp+90h] [rbp-38h] BYREF
  __int64 v36; // [rsp+98h] [rbp-30h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-28h] BYREF
  _QWORD v38[4]; // [rsp+A8h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  int v40; // [rsp+D8h] [rbp+10h] BYREF
  unsigned int v41; // [rsp+E0h] [rbp+18h] BYREF
  unsigned int v42; // [rsp+E8h] [rbp+20h] BYREF

  v4 = *(__int64 (***)(void))a2;
  v26 = 0LL;
  v5 = *v4;
  try
  {
    v6 = v5();
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3E9,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v24);
    v25 = 0LL;
    v7 = *v26;
    v25 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v7 + 48))(
           v26,
           &v25);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3EC,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v8,
        v24);
    v34 = 0LL;
    if ( !IsComponentAppViewAndGetKindAndModel(
            v25,
            (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v40,
            &v34) )
    {
      wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelPreview>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v34,
        &v37);
      v40 = 0;
      v9 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 48LL))(v37, &v40);
      if ( v9 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3F5,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v9,
          v24);
      v27 = 0LL;
      v10 = *v26;
      v27 = 0LL;
      v11 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v10 + 80))(v26, &v27);
      if ( v11 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3F8,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v11,
          v24);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        (__int64 *)&v35,
        (__int64 *)&v26);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
        &v36,
        &v27);
      Microsoft::WRL::Callback_IAsyncCallback__lambda_bada70271c5a82e5645f19125eaa543d___(&v33);
      lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_((__int64 *)&v35);
      v35 = &v33;
      LOBYTE(v36) = 1;
      v12 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v25 + 48LL))(
              v25,
              &v42);
      if ( v12 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x40A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v12,
          v24);
      v13 = *(__int64 (***)(void))a2;
      v32 = 0LL;
      v14 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, __int64 *))v13[8])(
              a2,
              &v32);
      if ( v14 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x40D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v14,
          v24);
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 48LL))(v32, &v41);
      if ( v15 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x40F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v15,
          v24);
      v16 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 80LL))(
              a2,
              &v31);
      if ( v16 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x412,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v16,
          v24);
      v17 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 72LL))(
              a2,
              &v30);
      if ( v17 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x416,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v17,
          v24);
      v18 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 48LL))(
              a2,
              &v28);
      if ( v18 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x41A,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v18,
          v24);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewShowRequested<unsigned int &,unsigned int &>(
        (int *)&v42,
        (int *)&v41);
      v19 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, _QWORD *))(*(_QWORD *)a2 + 56LL))(
              a2,
              v38);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x41F,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v19,
          v24);
      v20 = v28 == 2;
      v21 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewShowRequestedEventArgs *, int *))(*(_QWORD *)a2 + 88LL))(
              a2,
              &v29);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x42D,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v21,
          v24);
      WindowEventDispatcher::TryShowAsViewModeAsync((char *)this - 16, v42, v41, v20, v40, v31, v30, v38[0], v29, v33);
      LOBYTE(v36) = 0;
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
      wil::details::ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___::_ScopeExitFn__lambda_20ce1ce428f4836adb2156ca7fb68eee___(&v35);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v33);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v27);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x442,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v22);
  }
  return result;
}
