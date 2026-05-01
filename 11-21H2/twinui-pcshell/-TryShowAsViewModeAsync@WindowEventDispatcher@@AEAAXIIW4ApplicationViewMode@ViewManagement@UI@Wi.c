/*
 * XREFs of ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1803E6CA8
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1803E0A30 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180041D68 (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
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
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@AEAPEAUIAsyncCallback@@PEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1803DCAA8 (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1803DD2CC (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 */

// Hidden C++ exception states: #wind=12
void WindowEventDispatcher::TryShowAsViewModeAsync(RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, ...)
{
  __int64 *CachedView; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  ViewEventArgsForShowAsViewMode *v12; // rbx
  __int64 v13; // rcx
  __int64 *SharedListener; // rax
  __int64 v15; // rax
  int v16; // eax
  std::_Ref_count_base *v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+28h] [rbp-A9h]
  int v21; // [rsp+28h] [rbp-A9h]
  ViewEventArgsForShowAsViewMode *v22; // [rsp+68h] [rbp-69h] BYREF
  void *v23; // [rsp+70h] [rbp-61h] BYREF
  RTL_SRWLOCK *v24; // [rsp+78h] [rbp-59h] BYREF
  ViewEventArgsForShowAsViewMode *v25; // [rsp+80h] [rbp-51h] BYREF
  _QWORD *v26; // [rsp+88h] [rbp-49h] BYREF
  __int64 v27; // [rsp+90h] [rbp-41h] BYREF
  RTL_SRWLOCK *v28; // [rsp+98h] [rbp-39h] BYREF
  __int64 v29; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-21h] BYREF
  std::_Ref_count_base *v32; // [rsp+B8h] [rbp-19h]
  std::_Ref_count_base *v33[2]; // [rsp+C0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+2Fh]
  _QWORD *v35; // [rsp+108h] [rbp+37h] BYREF
  int v36; // [rsp+110h] [rbp+3Fh] BYREF
  int v37; // [rsp+118h] [rbp+47h] BYREF
  unsigned int v38; // [rsp+120h] [rbp+4Fh] BYREF
  __int64 v39; // [rsp+128h] [rbp+57h] BYREF
  va_list va; // [rsp+128h] [rbp+57h]
  __int64 v41; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+130h] [rbp+5Fh]
  __int64 v43; // [rsp+138h] [rbp+67h] BYREF
  va_list va2; // [rsp+138h] [rbp+67h]
  __int64 v45; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+140h] [rbp+6Fh]
  __int64 v47; // [rsp+148h] [rbp+77h]
  va_list va4; // [rsp+150h] [rbp+7Fh] BYREF

  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v39 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v41 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v43 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v45 = va_arg(va4, _QWORD);
  v47 = va_arg(va4, _QWORD);
  v38 = a4;
  v37 = a3;
  v36 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v36,
    &v37);
  v26 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v33 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  v28 = a1 + 59;
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, (__int64 *)&v35, a2);
  v8 = *CachedView;
  *CachedView = 0LL;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v26, v8);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v35);
  v9 = v26;
  if ( !v26 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9EE,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v20);
  v10 = WindowEventDispatcher::GetCachedView((__int64)a1, (__int64 *)&v35, a3);
  v11 = *v10;
  *v10 = 0LL;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v25, v11);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v35);
  v12 = v25;
  if ( !v25 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9F0,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v20);
  v35 = v9;
  (*(void (__fastcall **)(_QWORD *))(*v9 + 8LL))(v9);
  v22 = v12;
  (*(void (__fastcall **)(ViewEventArgsForShowAsViewMode *))(*(_QWORD *)v12 + 8LL))(v12);
  SharedListener = WindowEventDispatcher::GetSharedListener(v13, &v31, (__int64 *)&v22, (__int64 *)&v35);
  std::shared_ptr<ViewEventRegistration>::operator=(v33, SharedListener);
  if ( v32 )
    std::_Ref_count_base::_Decref(v32);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v28);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v26,
    &v27);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v25,
    &v29);
  v24 = 0LL;
  v15 = *v9;
  v24 = 0LL;
  (*(void (__fastcall **)(_QWORD *, RTL_SRWLOCK **))(v15 + 400))(v9, &v24);
  v28 = v24;
  LODWORD(v35) = v47;
  v31 = v29;
  v30 = v27;
  v22 = 0LL;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind &,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping,IAsyncCallback * &,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
          &v22,
          &v30,
          &v31,
          &v38,
          (__int64 *)va,
          (__int64 *)va1,
          (__int64 *)va2,
          (__int64 *)va3,
          &v35,
          (__int64 *)va4,
          &v28);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA07,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v21);
  v23 = 0LL;
  v17 = v33[0];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  v18 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v17 + 24),
          &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
          &v23);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA0A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v18,
      v21);
  v19 = (*(__int64 (__fastcall **)(void *, __int64, ViewEventArgsForShowAsViewMode *))(*(_QWORD *)v23 + 24LL))(
          v23,
          v27,
          v22);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA0B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v19,
      v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v22);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>((__int64 *)&v24);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v29);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v27);
  if ( v33[1] )
    std::_Ref_count_base::_Decref(v33[1]);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v25);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v26);
}
