/*
 * XREFs of ?SwitchAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1803E698C
 * Callers:
 *     ?AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803E1040 (-AppViewSwitchRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewSwitchRequestedEventArgs@WindowM.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x180059ECC (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x180072248 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x180072794 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x180074904 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180095E64 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8BCC (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1803DCC30 (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1803DD2CC (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 */

// Hidden C++ exception states: #wind=10
void WindowEventDispatcher::SwitchAsync(RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, ...)
{
  __int64 *CachedView; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *SharedListener; // rax
  int v14; // eax
  std::_Ref_count_base *v15; // rbx
  int v16; // eax
  int v17; // eax
  int v18; // [rsp+28h] [rbp-41h]
  int v19; // [rsp+28h] [rbp-41h]
  __int64 (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-31h] BYREF
  ViewEventArgsForSwitch *v21; // [rsp+40h] [rbp-29h] BYREF
  ViewEventArgsForSwitch *v22; // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp-19h] BYREF
  RTL_SRWLOCK *v24; // [rsp+58h] [rbp-11h] BYREF
  RTL_SRWLOCK *v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+68h] [rbp-1h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v28; // [rsp+80h] [rbp+17h] BYREF
  std::_Ref_count_base *v29; // [rsp+88h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  void *v31; // [rsp+C8h] [rbp+5Fh] BYREF
  int v32; // [rsp+D0h] [rbp+67h] BYREF
  int v33; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v34; // [rsp+E0h] [rbp+77h] BYREF
  va_list va; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va, a4);
  v34 = a4;
  v33 = a3;
  v32 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v32,
    &v33);
  v23 = 0LL;
  v22 = 0LL;
  *(_OWORD *)v27 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  v25 = a1 + 59;
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, (__int64 *)&v20, a2);
  v8 = *CachedView;
  *CachedView = 0LL;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v23, v8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
  v9 = v23;
  if ( !v23 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9C2,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
  v10 = WindowEventDispatcher::GetCachedView((__int64)a1, (__int64 *)&v20, a3);
  v11 = *v10;
  *v10 = 0LL;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v22, v11);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v20);
  if ( !v22 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9C4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
  v21 = v22;
  (*(void (__fastcall **)(ViewEventArgsForSwitch *))(*(_QWORD *)v22 + 8LL))(v22);
  v20 = v9;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[1])(v9);
  SharedListener = WindowEventDispatcher::GetSharedListener(v12, &v28, (__int64 *)&v20, (__int64 *)&v21);
  std::shared_ptr<ViewEventRegistration>::operator=(v27, SharedListener);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v25);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v23,
    &v26);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v22,
    &v24);
  v25 = v24;
  v20 = v26;
  v21 = 0LL;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
          &v21,
          &v20,
          &v25,
          &v34,
          (__int64 *)va);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9D2,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v14,
      v19);
  v31 = 0LL;
  v15 = v27[0];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  v16 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v15 + 24),
          &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
          &v31);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9D5,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v19);
  v17 = (*(__int64 (__fastcall **)(void *, RTL_SRWLOCK *, ViewEventArgsForSwitch *))(*(_QWORD *)v31 + 24LL))(
          v31,
          v24,
          v21);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9D6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v17,
      v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v24);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v26);
  if ( v27[1] )
    std::_Ref_count_base::_Decref(v27[1]);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v23);
}
