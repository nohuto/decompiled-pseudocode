/*
 * XREFs of ?EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1804D0B80
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1800992D0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x18009CAE8 (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18009E334 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wi.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x18016AF5C (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x18016B094 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 *v8; // r14
  __int64 *Ptr; // r15
  __int64 *i; // rsi
  int v11; // eax
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, HSTRING *); // rdi
  int v14; // eax
  HSTRING v15; // r8
  __int64 *v16; // rbx
  __int64 *v17; // rdi
  __int64 *j; // r15
  HSTRING v19; // rcx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **v20; // rax
  int v22; // [rsp+20h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v26; // [rsp+48h] [rbp-28h] BYREF
  HSTRING *p_string; // [rsp+50h] [rbp-20h]
  __int128 v28; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v29; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF
  __int64 *v32; // [rsp+C0h] [rbp+50h]
  HSTRING v33; // [rsp+C8h] [rbp+58h] BYREF

  v32 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 584LL))(a2, &v25);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC6A,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v22);
  v33 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  v33 = 0LL;
  v7 = v6(a2, &v33);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC6D,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v22);
  v28 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  AcquireSRWLockShared(a1 + 61);
  p_string = (HSTRING *)&a1[61];
  Ptr = (__int64 *)a1[48].Ptr;
  v26 = (__int64 *)a1[49].Ptr;
  for ( i = (__int64 *)*((_QWORD *)&v28 + 1); Ptr != v26; ++Ptr )
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))Ptr,
      &v23);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 584LL))(v23, &v24);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC77,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v22);
    string = 0LL;
    v12 = v23;
    v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v23 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v14 = v13(v12, &string);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC7A,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        v22);
    if ( v25 == v24
      && !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          (Microsoft::WRL::Wrappers::Details *)v33,
                          string,
                          v15) )
    {
      if ( i == v8 )
      {
        std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
          (__int64 *)&v28,
          (__int64)i,
          Ptr);
        v8 = v29;
        i = (__int64 *)*((_QWORD *)&v28 + 1);
      }
      else
      {
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
          i++,
          *Ptr);
        *((_QWORD *)&v28 + 1) = i;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  }
  if ( a1 != (RTL_SRWLOCK *)-488LL )
    ReleaseSRWLockShared(a1 + 61);
  v16 = (__int64 *)v28;
  v17 = (__int64 *)v28;
  for ( j = v32; v17 != i; ++v17 )
  {
    p_string = &string;
    v19 = (HSTRING)*j;
    string = v19;
    if ( v19 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v19 + 8LL))(v19);
    v20 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **)wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
                                                                                  (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v17,
                                                                                  &v26);
    UwpWindowEventDispatcher::RaiseViewEventWithPropertySet((__int64)a1, *v20, 4);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v26);
  }
  if ( v16 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>>(v16, i);
    std::_Deallocate<16,0>(v16, 8 * (v8 - v16));
  }
  WindowsDeleteString(v33);
  v33 = 0LL;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(j);
}
