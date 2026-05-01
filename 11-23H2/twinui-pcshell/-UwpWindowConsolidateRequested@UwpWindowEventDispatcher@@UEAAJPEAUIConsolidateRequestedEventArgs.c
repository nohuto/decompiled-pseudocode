/*
 * XREFs of ?UwpWindowConsolidateRequested@UwpWindowEventDispatcher@@UEAAJPEAUIConsolidateRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009AD70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18008D264 (--4-$shared_ptr@UViewEventRegistration@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@VAgileGitPtr@@@Z @ 0x18009AF50 (-RaiseViewEvent@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?GetCachedView@UwpWindowEventDispatcher@@AEAA?AV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@UWindowId@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18009CA08 (-GetCachedView@UwpWindowEventDispatcher@@AEAA-AV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exc.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?attach@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x18009D078 (-attach@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAUIUwpWi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall UwpWindowEventDispatcher::UwpWindowConsolidateRequested(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *, GUID *, __int64 *); // rax
  int v4; // eax
  int v5; // eax
  RTL_SRWLOCK *v6; // rdi
  RTL_SRWLOCK *v7; // rsi
  __int64 *CachedView; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 *v11; // rax
  RTL_SRWLOCK *v12; // rcx
  RTL_SRWLOCK *v14; // [rsp+20h] [rbp-48h] BYREF
  __int64 v15; // [rsp+28h] [rbp-40h] BYREF
  std::_Ref_count_base *v16; // [rsp+30h] [rbp-38h]
  std::_Ref_count_base *v17[2]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF
  __int64 v20; // [rsp+80h] [rbp+18h] BYREF
  __int64 v21; // [rsp+88h] [rbp+20h] BYREF

  v3 = *a2;
  v21 = 0LL;
  v4 = (*v3)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IConsolidateRequestedEventArgs *)a2,
         &GUID_754cf58a_00db_5c0c_9a7b_353c82b5977c,
         &v21);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x734,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v4,
      (int)v14);
  v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 48LL))(v21, &v19);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x737,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      (int)v14);
  v20 = 0LL;
  *(_OWORD *)v17 = 0LL;
  v6 = this + 59;
  AcquireSRWLockShared(this + 59);
  v14 = this + 59;
  v7 = this - 2;
  CachedView = (__int64 *)UwpWindowEventDispatcher::GetCachedView(&this[-2], &v15, v19);
  v9 = *CachedView;
  *CachedView = 0LL;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::attach(&v20, v9);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  v10 = v20;
  if ( v20 )
  {
    v11 = (__int64 *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 264LL))(v20, &v15);
    std::shared_ptr<ViewEventRegistration>::operator=(v17, v11);
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
  }
  if ( v6 )
    ReleaseSRWLockShared(v6);
  if ( v10 )
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      &v20,
      &v15);
    v12 = (RTL_SRWLOCK *)*((_QWORD *)v17[0] + 3);
    v14 = v12;
    if ( v12 )
      (*((void (__fastcall **)(RTL_SRWLOCK *))v12->Ptr + 1))(v12);
    ((void (__fastcall *)(RTL_SRWLOCK *, __int64, __int64, RTL_SRWLOCK **))UwpWindowEventDispatcher::RaiseViewEvent)(
      v7,
      v15,
      35LL,
      &v14);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
  }
  if ( v17[1] )
    std::_Ref_count_base::_Decref(v17[1]);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v20);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v21);
  return 0LL;
}
