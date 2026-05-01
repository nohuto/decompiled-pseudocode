/*
 * XREFs of ?UwpWindowRemoved@UwpWindowEventDispatcher@@UEAAJAEBUUwpWindowContextRemovedEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18009E690
 * Callers:
 *     ?PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ @ 0x18019E120 (-PerformDelayedInitialization@UwpWindowEventDispatcher@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800731C4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18009AF50 (-RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x18009E5B8 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInter_ea_18009E5B8.c)
 *     ??$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QEAI@Z @ 0x1800ADDC0 (--$WindowEventDispatcher_OnAppViewRemoved@PEBGI@ViewManagerInteropTraceLogging@@SAX$$QEAPEBG$$QE.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?RemoveCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UUwpWindowContextId@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x18019331C (-RemoveCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowRemoved(
        UwpWindowEventDispatcher *this,
        const struct Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextRemovedEventArgs *a2)
{
  struct IUnknown *v4; // rdi
  char *v5; // r14
  __int64 *v6; // rax
  __int64 v7; // rdx
  struct IUnknown *v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v14; // [rsp+28h] [rbp-30h]
  std::_Ref_count_base *v15[2]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF
  struct IUnknown *v17; // [rsp+70h] [rbp+18h] BYREF
  struct IUnknown *v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = (struct IUnknown *)((char *)this + 472);
  v5 = (char *)this - 16;
  if ( *((_BYTE *)a2 + 4) )
  {
    AcquireSRWLockExclusive((PSRWLOCK)this + 59);
    v17 = v4;
    UwpWindowEventDispatcher::GetCachedView((__int64)v5, &v16, *(_DWORD *)a2);
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 216LL))(v16);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    if ( v4 )
      ReleaseSRWLockExclusive((PSRWLOCK)v4);
  }
  else
  {
    v17 = 0LL;
    AcquireSRWLockExclusive((PSRWLOCK)this + 59);
    v18 = v4;
    v6 = (__int64 *)UwpWindowEventDispatcher::RemoveCachedView(v5, &v16, *(unsigned int *)a2);
    v7 = *v6;
    *v6 = 0LL;
    wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach((__int64 *)&v17, v7);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v16);
    v8 = v17;
    if ( (unsigned int)SHIsSameObject(v17, *((struct IUnknown **)this + 57)) )
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 57);
    if ( v4 )
      ReleaseSRWLockExclusive((PSRWLOCK)v4);
    if ( v8 )
    {
      *(_OWORD *)v15 = 0LL;
      AcquireSRWLockShared((PSRWLOCK)v4);
      v16 = (__int64)v4;
      v9 = (__int64 *)((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v8->lpVtbl[11].QueryInterface)(v8, &v13);
      std::shared_ptr<ViewEventRegistration>::operator=(v15, v9);
      if ( v14 )
        std::_Ref_count_base::_Decref(v14);
      if ( v4 )
        ReleaseSRWLockShared((PSRWLOCK)v4);
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
        &v17,
        &v18);
      v10 = *((_QWORD *)v15[0] + 3);
      v16 = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      UwpWindowEventDispatcher::RaiseViewEvent((__int64)v5, (__int64)v18, 4u, &v16);
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, __int64 *))v8->lpVtbl[12].QueryInterface)(v8, &v16);
      v13 = ((__int64 (__fastcall *)(struct IUnknown *))v8->lpVtbl[11].AddRef)(v8);
      ViewManagerInteropTraceLogging::WindowEventDispatcher_OnAppViewRemoved<unsigned short const *,unsigned int>(
        &v13,
        v11);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
      if ( v15[1] )
        std::_Ref_count_base::_Decref(v15[1]);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
  }
  return 0LL;
}
