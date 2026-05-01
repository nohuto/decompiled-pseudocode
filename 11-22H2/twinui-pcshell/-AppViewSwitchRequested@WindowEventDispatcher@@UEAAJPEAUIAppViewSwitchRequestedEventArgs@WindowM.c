/*
 * XREFs of ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0B00
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x1800B382C (--0-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_287ccdc1214f66a7b0516e9e81ab5d6b___ @ 0x1801F2ABC (Microsoft--WRL--Callback_IAsyncCallback__lambda_287ccdc1214f66a7b0516e9e81ab5d6b___.c)
 *     _lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_ @ 0x1801F36EC (_lambda_f82707194b3fa373e7b6403391ead5df_--__lambda_f82707194b3fa373e7b6403391ead5df_.c)
 *     wil::details::ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___::_ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___ @ 0x1801F3798 (wil--details--ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___--_ScopeExitFn__lambda_394a.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804C6C88 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804CAB28 (-SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@W.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall WindowEventDispatcher::AppViewSwitchRequested(
        WindowEventDispatcher *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *a2)
{
  __int64 (__fastcall **v4)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  bool v8; // si
  __int64 (__fastcall **v9)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **); // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v17; // [rsp+20h] [rbp-68h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v18; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v19; // [rsp+38h] [rbp-50h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v20; // [rsp+40h] [rbp-48h] BYREF
  __int64 v21; // [rsp+48h] [rbp-40h] BYREF
  volatile int *v22; // [rsp+50h] [rbp-38h] BYREF
  volatile int **v23; // [rsp+58h] [rbp-30h] BYREF
  __int64 v24[5]; // [rsp+60h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v26; // [rsp+98h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+18h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+20h] BYREF

  v4 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **))a2;
  v19 = 0LL;
  v5 = (*v4)(a2, &GUID_5c19477e_81ef_4d21_baa4_c3040ad2ea6b, &v19);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x447,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v17);
  v21 = 0LL;
  v6 = *v19;
  v21 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 80))(v19, &v21);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x44A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v17);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(
    (__int64 *)&v23,
    (__int64 *)&v19);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::com_ptr_t<IDataObject,wil::err_exception_policy>(v24, &v21);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_287ccdc1214f66a7b0516e9e81ab5d6b___(&v22);
  lambda_f82707194b3fa373e7b6403391ead5df_::__lambda_f82707194b3fa373e7b6403391ead5df_((__int64 *)&v23);
  v23 = &v22;
  v8 = 1;
  LOBYTE(v24[0]) = 1;
  v9 = *(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, GUID *, __int64 **))a2;
  v20 = 0LL;
  v10 = ((__int64 (__fastcall *)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))v9[6])(
          a2,
          &v20);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x45C,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v10,
      v17);
  v18 = 0LL;
  v11 = *v19;
  v18 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v11 + 48))(
          v19,
          &v18);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x45F,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v12,
      v17);
  if ( !IsComponentAppViewAndGetKindAndModel(v20, 0LL, 0LL) )
    v8 = IsComponentAppViewAndGetKindAndModel(v18, 0LL, 0LL) != 0;
  if ( v8 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x461,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x8000FFFFLL,
      v17);
  v13 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v20 + 48LL))(
          v20,
          &v28);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x464,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v13,
      v17);
  v14 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v18 + 48LL))(
          v18,
          &v27);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x467,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      v17);
  v15 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewSwitchRequestedEventArgs *, unsigned int *))(*(_QWORD *)a2 + 56LL))(
          a2,
          &v26);
  if ( v15 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x46A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v15,
      v17);
  WindowEventDispatcher::SwitchAsync((char *)this - 16, v28, v27, v26, v22);
  LOBYTE(v24[0]) = 0;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v20);
  wil::details::ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___::_ScopeExitFn__lambda_394a7b7d57a7cba511a9aeda9abfa425___(&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  return 0LL;
}
