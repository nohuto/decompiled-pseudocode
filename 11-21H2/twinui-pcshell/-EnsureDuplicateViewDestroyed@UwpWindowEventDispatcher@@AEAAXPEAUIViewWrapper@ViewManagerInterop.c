/*
 * XREFs of ?EnsureDuplicateViewDestroyed@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@VAgileGitPtr@@@Z @ 0x1803ED304
 * Callers:
 *     ?UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowLifecycleManagement@Shell@Internal@Windows@@@Z @ 0x1803F2EE0 (-UwpWindowActivating@UwpWindowEventDispatcher@@UEAAJPEAUIUwpWindowActivatingEventArgs@UwpWindowL.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x180096D00 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockShared@@YA.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18016978C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x18017C488 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ??$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1801A8BCC (--$query@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@-$com_ptr_t@UIWindowWrapperIn.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@AEBV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAV23@AEBV23@@Z @ 0x1803E9B18 (--$_Emplace_reallocate@AEBV-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@w.c)
 *     ??0?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EA194 (--0-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIUwpWindowW.c)
 *     ?RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4ViewEventType@3456@PEAUIPropertySet@Collections@Foundation@6@VAgileGitPtr@@@Z @ 0x1803F00EC (-RaiseViewEventWithPropertySet@UwpWindowEventDispatcher@@AEAAXPEAUIViewWrapper@ViewManagerIntero.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall UwpWindowEventDispatcher::EnsureDuplicateViewDestroyed(RTL_SRWLOCK *a1, __int64 a2, __int64 *a3)
{
  int v5; // eax
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rbx
  int v7; // eax
  __int64 *v8; // r14
  __int64 *Ptr; // r15
  __int64 *v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  __int64 v13; // rbx
  __int64 (__fastcall *v14)(__int64, HSTRING *); // rdi
  int v15; // eax
  HSTRING v16; // r8
  __int64 *v17; // rbx
  __int64 *v18; // rdi
  __int64 *i; // r15
  HSTRING v20; // rcx
  _QWORD *v21; // rax
  int v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-40h] BYREF
  HSTRING *p_string; // [rsp+38h] [rbp-38h] BYREF
  HSTRING *v26; // [rsp+40h] [rbp-30h] BYREF
  RTL_SRWLOCK *v27; // [rsp+48h] [rbp-28h] BYREF
  __int128 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 *v29; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B8h] [rbp+48h] BYREF
  __int64 *v32; // [rsp+C0h] [rbp+50h]
  HSTRING v33; // [rsp+C8h] [rbp+58h] BYREF

  v32 = a3;
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING **))(*(_QWORD *)a2 + 584LL))(a2, &v26);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC08,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v23);
  v33 = 0LL;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 56LL);
  WindowsDeleteString(0LL);
  v33 = 0LL;
  v7 = v6(a2, &v33);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC0B,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v23);
  v28 = 0LL;
  v8 = 0LL;
  v29 = 0LL;
  AcquireSRWLockShared(a1 + 59);
  v27 = a1 + 59;
  Ptr = (__int64 *)a1[46].Ptr;
  v10 = (__int64 *)a1[47].Ptr;
  v11 = (__int64 *)*((_QWORD *)&v28 + 1);
  while ( Ptr != v10 )
  {
    wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
      (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))Ptr,
      &v24);
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING **))(*(_QWORD *)v24 + 584LL))(v24, &p_string);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC15,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v12,
        v23);
    string = 0LL;
    v13 = v24;
    v14 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v24 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v15 = v14(v13, &string);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC18,
        (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v15,
        v23);
    if ( v26 == p_string
      && !(unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(
                          (Microsoft::WRL::Wrappers::Details *)v33,
                          string,
                          v16) )
    {
      if ( v11 == v8 )
      {
        std::vector<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>>::_Emplace_reallocate<wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy> const &>(
          (__int64 **)&v28,
          v11,
          Ptr);
        v8 = v29;
        v11 = (__int64 *)*((_QWORD *)&v28 + 1);
      }
      else
      {
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>(
          v11++,
          *Ptr);
        *((_QWORD *)&v28 + 1) = v11;
      }
    }
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v24);
    ++Ptr;
  }
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v27);
  v17 = (__int64 *)v28;
  v18 = (__int64 *)v28;
  for ( i = v32; v18 != v11; ++v18 )
  {
    p_string = &string;
    v20 = (HSTRING)*i;
    string = v20;
    if ( v20 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v20 + 8LL))(v20);
    v21 = wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>::query<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))v18,
            &v27);
    UwpWindowEventDispatcher::RaiseViewEventWithPropertySet(a1, *v21, 4LL);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v27);
  }
  if ( v17 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(v17, v11);
    std::_Deallocate<16,0>(v17, 8 * (v8 - v17));
  }
  WindowsDeleteString(v33);
  v33 = 0LL;
  return Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(i);
}
