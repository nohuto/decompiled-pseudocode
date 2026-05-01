/*
 * XREFs of ?AppViewConsolidateRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewRequestEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BFF90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x1802D82AC (-RaiseViewEvent@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 *     ?GetCachedView@WindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@I@Z @ 0x1804C4488 (-GetCachedView@WindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception.c)
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x1804C6C88 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?attach@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWrapperInternal@@@Z @ 0x1804CD334 (-attach@-$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIWindowWr.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall WindowEventDispatcher::AppViewConsolidateRequested(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewRequestEventArgs *a2)
{
  __int64 v3; // rax
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // eax
  RTL_SRWLOCK *v7; // rdi
  RTL_SRWLOCK *v8; // rsi
  __int64 v9; // rdx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, _QWORD *); // rbx
  __int64 *v11; // rax
  __int64 v12; // rcx
  const char *v13; // r9
  __int64 result; // rax
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  std::_Ref_count_base *v16; // [rsp+28h] [rbp-40h]
  RTL_SRWLOCK *v17; // [rsp+30h] [rbp-38h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppModel *v18; // [rsp+38h] [rbp-30h] BYREF
  std::_Ref_count_base *v19[2]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v21; // [rsp+78h] [rbp+10h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // [rsp+80h] [rbp+18h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v23; // [rsp+88h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  v23 = 0LL;
  v4 = *(__int64 (**)(void))(v3 + 48);
  try
  {
    v5 = v4();
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57B,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v5,
        v15);
    v6 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, unsigned int *))(*(_QWORD *)v23 + 48LL))(
           v23,
           &v21);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57E,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        v15);
    v18 = 0LL;
    if ( !IsComponentAppViewAndGetKindAndModel(
            v23,
            (enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind *)&v22,
            &v18) )
    {
      v22 = 0LL;
      *(_OWORD *)v19 = 0LL;
      v7 = this + 57;
      AcquireSRWLockShared(this + 57);
      v17 = this + 57;
      v8 = this - 2;
      WindowEventDispatcher::GetCachedView(&this[-2], &v15, v21);
      v9 = v15;
      v15 = 0LL;
      wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::attach(&v22, v9);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
      v10 = v22;
      if ( v22 )
      {
        v11 = (__int64 *)((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *), __int64 *))(*v22)[33])(
                           v22,
                           &v15);
        std::shared_ptr<ViewEventRegistration>::operator=(v19, v11);
        if ( v16 )
          std::_Ref_count_base::_Decref(v16);
      }
      if ( v7 )
        ReleaseSRWLockShared(v7);
      if ( v10 )
      {
        wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
          &v22,
          &v17);
        v12 = *((_QWORD *)v19[0] + 3);
        v15 = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        WindowEventDispatcher::RaiseViewEvent((__int64)v8, (__int64)v17, 0x23u, &v15);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v17);
      }
      if ( v19[1] )
        std::_Ref_count_base::_Decref(v19[1]);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v23);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x59A,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                           v13);
  }
  return result;
}
