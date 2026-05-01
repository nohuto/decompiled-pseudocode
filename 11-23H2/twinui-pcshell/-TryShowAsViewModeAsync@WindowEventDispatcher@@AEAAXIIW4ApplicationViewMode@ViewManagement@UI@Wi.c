/*
 * XREFs of ?TryShowAsViewModeAsync@WindowEventDispatcher@@AEAAXIIW4ApplicationViewMode@ViewManagement@UI@Windows@@W4ExperienceKind@WindowManagement@ApplicationModel@Internal@5@W4ViewSizePreference@345@2USize@Foundation@5@W4ViewGroupingPreference@7895@PEAUIAsyncCallback@@@Z @ 0x1804CB310
 * Callers:
 *     ?AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0550 (-AppViewShowRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewShowRequestedEventArgs@WindowManag.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewMode@ViewManagement@UI@6@AEAW4ExperienceKind@WindowManagement@ApplicationModel@56@AEAW4ViewSizePreference@9UI@6@AEAW4ViewSizePreference@9UI@6@AEAUSize@Foundation@6@W4ViewGrouping@9UI@6@HAEAPEAUIAsyncCallback@@$$TPEAUIWindowingEnvironmentSettings@3456@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewMode@ViewManagement@UI@7@AEAW4ExperienceKind@WindowManagement@ApplicationModel@67@AEAW4ViewSizePreference@ViewManagement@UI@7@4AEAUSize@Foundation@7@$$QEAW4ViewGrouping@ViewManagement@UI@7@$$QEAHAEAPEAUIAsyncCallback@@$$QEA$$T$$QEAPEAUIWindowingEnvironmentSettings@4567@@Z @ 0x1804B963C (--$MakeAndInitialize@VViewEventArgsForShowAsViewMode@@UIViewEventArgs@ViewManagerInterop@Shell@I.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1804BA3E8 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1804C4488 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?GetSharedListener@WindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1804C5A28 (-GetSharedListener@WindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V-$c.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=11
void WindowEventDispatcher::TryShowAsViewModeAsync(RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, ...)
{
  __int64 *CachedView; // rax
  __int64 v8; // rdx
  __int64 (__fastcall ***v9)(_QWORD, GUID *, _QWORD *); // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 v13; // rcx
  __int64 *SharedListener; // rax
  void (__fastcall *v15)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *); // rbx
  int v16; // eax
  std::_Ref_count_base *v17; // rbx
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+28h] [rbp-D1h]
  int v21; // [rsp+28h] [rbp-D1h]
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+78h] [rbp-81h] BYREF
  void *v23; // [rsp+80h] [rbp-79h] BYREF
  __int64 v24; // [rsp+88h] [rbp-71h] BYREF
  __int64 (__fastcall ***v25)(_QWORD, GUID *, _QWORD *); // [rsp+90h] [rbp-69h] BYREF
  __int64 (__fastcall ***v26)(_QWORD, GUID *, _QWORD *); // [rsp+98h] [rbp-61h] BYREF
  int v27; // [rsp+A0h] [rbp-59h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-51h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-49h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-41h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-39h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-31h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-29h] BYREF
  std::_Ref_count_base *v34; // [rsp+D8h] [rbp-21h]
  std::_Ref_count_base *v35[2]; // [rsp+E0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+37h]
  __int64 (__fastcall ***v37)(_QWORD, GUID *, _QWORD *); // [rsp+138h] [rbp+3Fh] BYREF
  int v38; // [rsp+140h] [rbp+47h] BYREF
  int v39; // [rsp+148h] [rbp+4Fh] BYREF
  unsigned int v40; // [rsp+150h] [rbp+57h] BYREF
  __int64 v41; // [rsp+158h] [rbp+5Fh] BYREF
  va_list va; // [rsp+158h] [rbp+5Fh]
  __int64 v43; // [rsp+160h] [rbp+67h] BYREF
  va_list va1; // [rsp+160h] [rbp+67h]
  __int64 v45; // [rsp+168h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+168h] [rbp+6Fh]
  __int64 v47; // [rsp+170h] [rbp+77h] BYREF
  va_list va3; // [rsp+170h] [rbp+77h]
  __int64 v49; // [rsp+178h] [rbp+7Fh]
  va_list va4; // [rsp+180h] [rbp+87h] BYREF

  va_start(va4, a4);
  va_start(va3, a4);
  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v41 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v43 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v45 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v47 = va_arg(va4, _QWORD);
  v49 = va_arg(va4, _QWORD);
  v40 = a4;
  v39 = a3;
  v38 = a2;
  ViewManagerInteropTraceLogging::WindowEventDispatcher_TryShowAsViewModeAsync<unsigned int &,unsigned int &>(
    &v38,
    &v39);
  v26 = 0LL;
  v25 = 0LL;
  *(_OWORD *)v35 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  v31 = (__int64)&a1[59];
  CachedView = WindowEventDispatcher::GetCachedView((__int64)a1, (__int64 *)&v37, a2);
  v8 = *CachedView;
  *CachedView = 0LL;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v26, v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
  v9 = v26;
  if ( !v26 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9E6,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v20);
  v10 = WindowEventDispatcher::GetCachedView((__int64)a1, (__int64 *)&v37, a3);
  v11 = *v10;
  *v10 = 0LL;
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v25, v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v37);
  v12 = v25;
  if ( !v25 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x9E8,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v20);
  v37 = v9;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v9)[1])(v9);
  v22 = v12;
  ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v12)[1])(v12);
  SharedListener = WindowEventDispatcher::GetSharedListener(v13, &v33, (__int64 *)&v22, (__int64 *)&v37);
  std::shared_ptr<ViewEventRegistration>::operator=(v35, SharedListener);
  if ( v34 )
    std::_Ref_count_base::_Decref(v34);
  if ( a1 != (RTL_SRWLOCK *)-472LL )
    ReleaseSRWLockShared(a1 + 59);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v26,
    &v28);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v25,
    &v29);
  v24 = 0LL;
  v15 = (void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))(*v9)[50];
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v24);
  v15(v9, &v24);
  v32 = v24;
  v33 = 0LL;
  LODWORD(v37) = 0;
  v27 = v49;
  v30 = v29;
  v31 = v28;
  v22 = 0LL;
  v16 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForShowAsViewMode,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewMode &,enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind &,enum Windows::UI::ViewManagement::ViewSizePreference &,enum Windows::UI::ViewManagement::ViewSizePreference &,Windows::Foundation::Size &,enum Windows::UI::ViewManagement::ViewGrouping,int,IAsyncCallback * &,std::nullptr_t,Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings *>(
          &v22,
          &v31,
          &v30,
          &v40,
          (__int64 *)va,
          (__int64 *)va1,
          (__int64 *)va2,
          (__int64 *)va3,
          &v27,
          (int *)&v37,
          (__int64 *)va4,
          &v33,
          &v32);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA01,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v21);
  v23 = 0LL;
  v17 = v35[0];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  v18 = AgileGitPtr::CopyLocal(
          (std::_Ref_count_base *)((char *)v17 + 24),
          &GUID_c1659867_0cf6_5f3b_99df_4f036280926c,
          &v23);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA04,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v18,
      v21);
  v19 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v23 + 24LL))(v23, v28, (__int64)v22);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA05,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v19,
      v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v23);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v29);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v28);
  if ( v35[1] )
    std::_Ref_count_base::_Decref(v35[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v25);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
}
