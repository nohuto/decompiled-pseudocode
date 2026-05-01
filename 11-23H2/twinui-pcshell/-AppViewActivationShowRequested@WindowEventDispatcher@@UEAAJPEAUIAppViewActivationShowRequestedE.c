/*
 * XREFs of ?AppViewActivationShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BF900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ @ 0x1800B4BE4 (--1WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@QEAA@XZ.c)
 *     ??$?0$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800B4C10 (--$-0$$V@WindowEventDispatcher_AppViewActivationRequested@ViewManagerInteropTraceLogging@@AEAA@U.c)
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B5108 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_f60869fdfd191890a12f99cfd58e7836___ @ 0x1801F2B44 (Microsoft--WRL--Callback_IAsyncCallback__lambda_f60869fdfd191890a12f99cfd58e7836___.c)
 *     _lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_ @ 0x1801F36EC (_lambda_f82707194b3fa373e7b6403391ead5df_--__lambda_f82707194b3fa373e7b6403391ead5df_.c)
 *     wil::details::ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___::_ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___ @ 0x1801F37F4 (wil--details--ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___--_ScopeExitFn__lambda_6069.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$$QEAH@Z @ 0x1804BA148 (--$WindowEventDispatcher_OnAppViewActivationShowRequested@H@ViewManagerInteropTraceLogging@@SAX$.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804C6C88 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@Windows@@0_KPEAUIAsyncCallback@@@Z @ 0x1804CAEEC (-TryShowAsStandaloneAsync@WindowEventDispatcher@@AEAAXIIW4ViewSizePreference@ViewManagement@UI@W.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::AppViewActivationShowRequested(
        WindowEventDispatcher *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *))
{
  __int64 (__fastcall **v4)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // [rsp+20h] [rbp-1C8h]
  unsigned int v15; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 *v16; // [rsp+48h] [rbp-1A0h] BYREF
  unsigned int v17; // [rsp+50h] [rbp-198h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v18; // [rsp+58h] [rbp-190h] BYREF
  __int64 v19; // [rsp+60h] [rbp-188h] BYREF
  int v20; // [rsp+68h] [rbp-180h] BYREF
  volatile int *v21; // [rsp+70h] [rbp-178h] BYREF
  volatile int **v22; // [rsp+78h] [rbp-170h] BYREF
  __int64 v23; // [rsp+80h] [rbp-168h] BYREF
  __int64 v24; // [rsp+88h] [rbp-160h] BYREF
  _BYTE v25[320]; // [rsp+90h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::WindowEventDispatcher_AppViewActivationRequested(
    (__int64)v25,
    (char)a2);
  v4 = *a2;
  v16 = 0LL;
  v5 = (*v4)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *)a2,
         &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b,
         (__int64 *)&v16);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x383,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v14);
  v18 = 0LL;
  v6 = *v16;
  v18 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v6 + 48))(
         v16,
         &v18);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x386,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v14);
  if ( !IsComponentAppViewAndGetKindAndModel(v18, 0LL, 0LL) )
  {
    v19 = 0LL;
    v8 = *v16;
    v19 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v8 + 80))(v16, &v19);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x38B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
      (__int64 *)&v22,
      (__int64 *)&v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(&v23, &v19);
    Microsoft::WRL::Callback_IAsyncCallback__lambda_f60869fdfd191890a12f99cfd58e7836___(&v21);
    lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_((__int64 *)&v22);
    v22 = &v21;
    LOBYTE(v23) = 1;
    v10 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v18 + 48LL))(
            v18,
            &v17);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x39D,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v10,
        v14);
    v11 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewActivationShowRequestedEventArgs *, GUID *, __int64 *), int *))(*a2)[6])(
            a2,
            &v20);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3A0,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v14);
    v12 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(*v16 + 56))(v16, &v24);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3A4,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v14);
    WindowEventDispatcher::TryShowAsStandaloneAsync((char *)this - 16, v17, v17);
    LOBYTE(v23) = 0;
    v15 = v17;
    ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewActivationShowRequested<int>((int *)&v15);
    wil::details::ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___::_ScopeExitFn__lambda_60697f14981c94887dfc91549ceffe6a___(&v22);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v25, 0);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v16);
  ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested::~WindowEventDispatcher_AppViewActivationRequested((ViewManagerInteropTraceLogging::WindowEventDispatcher_AppViewActivationRequested *)v25);
  return 0LL;
}
