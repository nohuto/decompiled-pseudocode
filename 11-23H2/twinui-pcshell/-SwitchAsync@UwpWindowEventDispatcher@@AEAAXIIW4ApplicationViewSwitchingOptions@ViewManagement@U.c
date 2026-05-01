/*
 * XREFs of ?SwitchAsync@UwpWindowEventDispatcher@@AEAAXIIW4ApplicationViewSwitchingOptions@ViewManagement@UI@Windows@@PEAUIAsyncCallback@@@Z @ 0x1804D2330
 * Callers:
 *     ?UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804D3960 (-UwpWindowSwitchRequested@UwpWindowEventDispatcher@@UEAAJPEAUISwitchRequestedEventArgs@WindowMan.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x18009CC20 (-CopyLocal@AgileGitPtr@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18009E5B8 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18009E5B8.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x18016B094 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewWrapper@3456@PEAU73456@AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@6@AEAPEAUIAsyncCallback@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewEventArgs@ViewManagerInterop@Shell@Internal@Windows@@$$QEAPEAUIViewWrapper@4567@1AEAW4ApplicationViewSwitchingOptions@ViewManagement@UI@7@AEAPEAUIAsyncCallback@@@Z @ 0x1804B979C (--$MakeAndInitialize@VViewEventArgsForSwitch@@UIViewEventArgs@ViewManagerInterop@Shell@Internal@.c)
 *     ??$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI0@Z @ 0x1804BA3E8 (--$WindowEventDispatcher_TryShowAsViewModeAsync@AEAIAEAI@ViewManagerInteropTraceLogging@@SAXAEAI.c)
 *     ?GetSharedListener@UwpWindowEventDispatcher@@AEAA?AV?$shared_ptr@UViewEventRegistration@@@std@@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0@Z @ 0x1804D12F4 (-GetSharedListener@UwpWindowEventDispatcher@@AEAA-AV-$shared_ptr@UViewEventRegistration@@@std@@V.c)
 */

// Hidden C++ exception states: #wind=9
void UwpWindowEventDispatcher::SwitchAsync(RTL_SRWLOCK *a1, int a2, int a3, unsigned int a4, ...)
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
  __int64 v20; // [rsp+38h] [rbp-31h] BYREF
  ViewEventArgsForSwitch *v21; // [rsp+40h] [rbp-29h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+48h] [rbp-21h] BYREF
  __int64 (__fastcall ***v23)(_QWORD, GUID *, _QWORD *); // [rsp+50h] [rbp-19h] BYREF
  __int64 v24; // [rsp+58h] [rbp-11h] BYREF
  __int64 v25; // [rsp+60h] [rbp-9h] BYREF
  __int64 v26; // [rsp+68h] [rbp-1h] BYREF
  std::_Ref_count_base *v27[2]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v28; // [rsp+88h] [rbp+1Fh] BYREF
  std::_Ref_count_base *v29; // [rsp+90h] [rbp+27h]
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
  AcquireSRWLockShared(a1 + 61);
  v26 = (__int64)&a1[61];
  CachedView = UwpWindowEventDispatcher::GetCachedView((__int64)a1, &v20, a2);
  v8 = *CachedView;
  *CachedView = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v23, v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  v9 = v23;
  if ( !v23 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAD7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
  v10 = UwpWindowEventDispatcher::GetCachedView((__int64)a1, &v20, a3);
  v11 = *v10;
  *v10 = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v22, v11);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  if ( !v22 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAD9,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)0x80070490LL,
      v18);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
    &v21,
    (__int64)v22);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
    &v20,
    (__int64)v9);
  SharedListener = UwpWindowEventDispatcher::GetSharedListener(v12, &v28, &v20, (__int64 *)&v21);
  std::shared_ptr<ViewEventRegistration>::operator=(v27, SharedListener);
  if ( v29 )
    std::_Ref_count_base::_Decref(v29);
  if ( a1 != (RTL_SRWLOCK *)-488LL )
    ReleaseSRWLockShared(a1 + 61);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v23,
    &v25);
  wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
    &v22,
    &v24);
  v20 = v24;
  v26 = v25;
  v21 = 0LL;
  v14 = Microsoft::WRL::Details::MakeAndInitialize<ViewEventArgsForSwitch,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *,enum Windows::UI::ViewManagement::ApplicationViewSwitchingOptions &,IAsyncCallback * &>(
          &v21,
          &v26,
          &v20,
          &v34,
          (__int64 *)va);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAE7,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
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
      (void *)0xAEA,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v16,
      v19);
  v17 = (*(__int64 (__fastcall **)(void *, __int64, ViewEventArgsForSwitch *))(*(_QWORD *)v31 + 24LL))(v31, v24, v21);
  if ( v17 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAEB,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v17,
      v19);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v31);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v25);
  if ( v27[1] )
    std::_Ref_count_base::_Decref(v27[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
}
