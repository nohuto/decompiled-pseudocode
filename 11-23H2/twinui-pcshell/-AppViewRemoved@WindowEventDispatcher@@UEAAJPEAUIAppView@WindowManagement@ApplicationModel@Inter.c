/*
 * XREFs of ?AppViewRemoved@WindowEventDispatcher@@UEAAJPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C0250
 * Callers:
 *     ?PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ @ 0x1804C71E0 (-PerformDelayedInitialization@WindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x1800ADDC0 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1802D82AC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z @ 0x1804BA1D0 (--$WindowEventDispatcher_OnAppViewRemoved@AEAI@ViewManagerInteropTraceLogging@@SAXAEAI@Z.c)
 *     ?RemoveCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UAppViewId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804C8FC4 (-RemoveCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_except.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x1804CBC7C (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall WindowEventDispatcher::AppViewRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *a2)
{
  int v4; // eax
  RTL_SRWLOCK *v5; // rdi
  RTL_SRWLOCK *v6; // r14
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // r15
  struct IUnknown *Ptr; // rdx
  struct IUnknown *v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rcx
  const char *v14; // r9
  __int64 result; // rax
  __int64 v16; // [rsp+20h] [rbp-58h] BYREF
  RTL_SRWLOCK *v17; // [rsp+28h] [rbp-50h] BYREF
  std::_Ref_count_base *v18; // [rsp+30h] [rbp-48h]
  std::_Ref_count_base *v19[2]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  unsigned int v21; // [rsp+88h] [rbp+10h] BYREF
  __int64 v22; // [rsp+90h] [rbp+18h] BYREF
  struct IUnknown *v23; // [rsp+98h] [rbp+20h] BYREF

  try
  {
    v4 = (*(__int64 (**)(void))(*(_QWORD *)a2 + 48LL))();
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x224,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v4,
        v16);
    v23 = 0LL;
    v5 = this + 57;
    AcquireSRWLockExclusive(this + 57);
    v17 = this + 57;
    v6 = this - 2;
    v7 = (__int64 *)WindowEventDispatcher::RemoveCachedView(&this[-2], &v22, v21);
    v8 = *v7;
    *v7 = 0LL;
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v23, v8);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
    v9 = (__int64 *)&this[55];
    Ptr = (struct IUnknown *)this[55].Ptr;
    v11 = v23;
    if ( (unsigned int)SHIsSameObject(v23, Ptr) )
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(v9);
    if ( v5 )
      ReleaseSRWLockExclusive(v5);
    if ( v11 )
    {
      *(_OWORD *)v19 = 0LL;
      AcquireSRWLockShared(v5);
      v22 = (__int64)v5;
      v12 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, RTL_SRWLOCK **))v11->lpVtbl[11].QueryInterface)(
                         v11,
                         &v17);
      std::shared_ptr<ViewEventRegistration>::operator=(v19, v12);
      if ( v18 )
        std::_Ref_count_base::_Decref(v18);
      if ( v5 )
        ReleaseSRWLockShared(v5);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v23,
        &v16);
      v13 = *((_QWORD *)v19[0] + 3);
      v22 = v13;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      WindowEventDispatcher::RaiseViewEvent((__int64)v6, v16, 4u, &v22);
      LODWORD(v22) = ((__int64 (__fastcall *)(struct IUnknown *))v11->lpVtbl[12].QueryInterface)(v11);
      v17 = (RTL_SRWLOCK *)((__int64 (__fastcall *)(struct IUnknown *))v11->lpVtbl[11].AddRef)(v11);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
        (__int64 *)&v17,
        (int *)&v22);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
    }
    else
    {
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned int &>((int *)&v21);
      WindowEventDispatcher::UpdateAudioState(v6, a2, 3LL);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x24C,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v14);
  }
  return result;
}
