/*
 * XREFs of ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180615770
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003A7E0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Move_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x1803F5E40 (--$_Move_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@@std@.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x1806131D8 (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1806140A0 (-StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x180614830 (-Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtu.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID(VirtualPinnedAppsHandler *this, const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rsi
  const WCHAR *v7; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  __int64 *v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-1E8h]
  struct IVirtualDesktop *v22; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v23; // [rsp+38h] [rbp-1D0h] BYREF
  __int64 v24; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-1C0h] BYREF
  __int64 v26; // [rsp+50h] [rbp-1B8h] BYREF
  __int64 *v27; // [rsp+58h] [rbp-1B0h]
  RTL_SRWLOCK *v28; // [rsp+60h] [rbp-1A8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1A0h] BYREF
  __int64 v30; // [rsp+70h] [rbp-198h] BYREF
  unsigned int v31; // [rsp+78h] [rbp-190h]
  unsigned int v32; // [rsp+80h] [rbp-188h] BYREF
  __int64 v33; // [rsp+88h] [rbp-180h] BYREF
  __int64 *v34; // [rsp+90h] [rbp-178h]
  _QWORD v35[40]; // [rsp+A0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v28);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v35,
    (__int64)"VirtualDesktopUnpinAppActivity");
  v35[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v35);
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA1,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x80070490LL,
      bIgnoreCase);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 424LL))(*((_QWORD *)this + 6)) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA2,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x8007139FLL,
      bIgnoreCase);
  v5 = *((_QWORD *)this + 11);
  v6 = *((_QWORD *)this + 12);
  while ( v5 != v6 )
  {
    v7 = (const WCHAR *)v5;
    if ( *(_QWORD *)(v5 + 24) >= 8uLL )
      v7 = *(const WCHAR **)v5;
    if ( CompareStringOrdinal(v7, -1, a2, -1, 1) == 2 )
      break;
    v5 += 32LL;
  }
  if ( v5 == *((_QWORD *)this + 12) )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v35);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v28);
    return 1LL;
  }
  else
  {
    LOBYTE(v4) = 1;
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, const unsigned __int16 *))(**((_QWORD **)this + 7)
                                                                                               + 72LL))(
           *((_QWORD *)this + 7),
           v4,
           L"PinnedApps",
           a2);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAA,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9);
    std::_Move_unchecked<std::wstring *,std::wstring *>(v5 + 32, *((_QWORD *)this + 12), (_OWORD *)v5);
    std::wstring::_Tidy_deallocate(*((_QWORD *)this + 12) - 32LL);
    *((_QWORD *)this + 12) -= 32LL;
    v23 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 10);
    v11 = *v10;
    v23 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, const unsigned __int16 *, __int64 *))(v11 + 40))(v10, a2, &v23);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xAE,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCase);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v30,
      v23);
    v25 = 0;
    v26 = 0LL;
    v27 = &v30;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
    v32 = v31;
    v33 = 0LL;
    v34 = &v30;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v32);
    while ( v25 != v32 || v27 != v34 )
    {
      v16 = v26;
      v29 = v26;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v29);
      v24 = 0LL;
      v17 = (__int64 *)*((_QWORD *)this + 6);
      v18 = *v17;
      v24 = 0LL;
      v19 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v18 + 360))(v17, &v24);
      if ( v19 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xB3,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v19,
          bIgnoreCase);
      v20 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, __int64, __int64))(*(_QWORD *)this + 104LL))(
              this,
              v16,
              v24);
      if ( v20 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xB4,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v20);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v24);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v29);
      ++v25;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v25);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v26);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v30);
    v22 = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 6);
    v14 = *v13;
    v22 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, struct IVirtualDesktop **))(v14 + 360))(v13, &v22);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v15,
        bIgnoreCase);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v35,
      a2,
      v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v35);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v28);
    return 0LL;
  }
}
