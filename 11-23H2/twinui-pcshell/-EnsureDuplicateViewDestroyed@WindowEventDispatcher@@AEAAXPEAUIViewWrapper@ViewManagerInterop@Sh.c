/*
 * XREFs of ?EnsureDuplicateViewDestroyed@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1804C3634
 * Callers:
 *     ?AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1804BE170 (-AppViewActivationRequested@WindowEventDispatcher@@UEAAJPEAUIAppViewActivationRequestedEventArgs.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18004F428 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18009A320 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801F3654 (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1804BA9C8 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UISwitchItem@Multitasking@ComposableShell@Internal@Window.c)
 *     ?RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1804C7F68 (-RaiseViewEventWithPropertySet@WindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@S.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall WindowEventDispatcher::EnsureDuplicateViewDestroyed(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
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
  __int64 (__fastcall ***v16)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 *v17; // rbx
  __int64 *v18; // rdi
  __int64 *j; // r15
  HSTRING v20; // rcx
  _QWORD *v21; // rax
  int v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 *v27; // [rsp+48h] [rbp-28h] BYREF
  HSTRING *p_string; // [rsp+50h] [rbp-20h]
  __int128 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 *v30; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF
  __int64 *v33; // [rsp+C0h] [rbp+50h]
  HSTRING v34; // [rsp+C8h] [rbp+58h] BYREF

  v33 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 584LL))(a2, &v26);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB44,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v23);
  v34 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  v34 = 0LL;
  v7 = v6(a2, &v34);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB47,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v23);
  v29 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  p_string = (HSTRING *)&a1[59];
  Ptr = (__int64 *)a1[46].Ptr;
  v27 = (__int64 *)a1[47].Ptr;
  for ( i = (__int64 *)*((_QWORD *)&v29 + 1); Ptr != v27; ++Ptr )
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))Ptr,
      &v24);
    v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v24 + 584LL))(v24, &v25);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB51,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v11,
        v23);
    string = 0LL;
    v12 = v24;
    v13 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v14 = v13(v12, &string);
    if ( v14 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB54,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v14,
        v23);
    if ( v26 == v25
      && !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          (Microsoft::WRL::Wrappers::Details *)v34,
                          string,
                          v15) )
    {
      if ( i == v8 )
      {
        std::vector<wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<Windows::Internal::ComposableShell::Multitasking::ISwitchItem,wil::err_exception_policy> const &>(
          (__int64 *)&v29,
          (__int64)i,
          Ptr);
        v8 = v30;
        i = (__int64 *)*((_QWORD *)&v29 + 1);
      }
      else
      {
        v16 = (__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *))*Ptr;
        *i = *Ptr;
        if ( v16 )
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v16)[1])(v16);
        *((_QWORD *)&v29 + 1) = ++i;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
  }
  if ( a1 != (RTL_SRWLOCK *)-472LL )
    ReleaseSRWLockShared(a1 + 59);
  v17 = (__int64 *)v29;
  v18 = (__int64 *)v29;
  for ( j = v33; v18 != i; ++v18 )
  {
    p_string = &string;
    v20 = (HSTRING)*j;
    string = v20;
    if ( v20 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 8LL))(v20);
    v21 = wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v18,
            &v27);
    WindowEventDispatcher::RaiseViewEventWithPropertySet(a1, *v21, 4LL, 0LL, &string);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v27);
  }
  if ( v17 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v17, i);
    std::_Deallocate<16,0>(v17, 8 * (v8 - v17));
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(j);
}
