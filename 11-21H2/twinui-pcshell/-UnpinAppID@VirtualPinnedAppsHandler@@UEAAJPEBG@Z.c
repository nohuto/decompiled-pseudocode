/*
 * XREFs of ?UnpinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180559520
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z @ 0x180074B3C (-GetMonitorFromApplicationView@VirtualDesktopHelpers@@YAPEAUHMONITOR__@@PEAUIApplicationView@@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18009FDE0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800FE4F8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180168FA0 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1802378EC (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$03$0DAAAAAA@U_TlgReflectorTag_Par.c)
 *     ??$_Move_unchecked@PEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAV12@@std@@YAPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEAV10@00@Z @ 0x180328B3C (--$_Move_unchecked@PEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEAV12@@std@.c)
 *     ??1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180556EE8 (--1VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180557DF0 (-StartActivity@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x18055859C (-Stop@VirtualDesktopUnpinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtu.c)
 */

// Hidden C++ exception states: #wind=12 #try_helpers=1
__int64 __fastcall VirtualPinnedAppsHandler::UnpinAppID(VirtualPinnedAppsHandler *this, const unsigned __int16 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 i; // rsi
  const WCHAR *v7; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rbx
  struct IApplicationView *v17; // rdx
  VirtualDesktopHelpers *v18; // rcx
  HMONITOR MonitorFromApplicationView; // r15
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, HMONITOR, __int64 *); // r12
  __int64 v22; // rcx
  int v23; // eax
  int v24; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-1F8h]
  __int64 v26; // [rsp+30h] [rbp-1E8h] BYREF
  struct IVirtualDesktop *v27; // [rsp+38h] [rbp-1E0h] BYREF
  __int64 v28; // [rsp+40h] [rbp-1D8h] BYREF
  unsigned int v29; // [rsp+48h] [rbp-1D0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-1C8h] BYREF
  __int64 *v31; // [rsp+58h] [rbp-1C0h]
  RTL_SRWLOCK *v32; // [rsp+60h] [rbp-1B8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-1B0h] BYREF
  __int64 v34; // [rsp+70h] [rbp-1A8h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-1A0h]
  unsigned int v36; // [rsp+80h] [rbp-198h] BYREF
  __int64 v37; // [rsp+88h] [rbp-190h] BYREF
  __int64 *v38; // [rsp+90h] [rbp-188h]
  _QWORD v39[40]; // [rsp+A0h] [rbp-178h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v32);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,4,50331648,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v39,
    (__int64)"VirtualDesktopUnpinAppActivity");
  v39[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v39);
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAA,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x80070490LL,
      bIgnoreCase);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 376LL))(*((_QWORD *)this + 6)) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xAB,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x8007139FLL,
      bIgnoreCase);
  v5 = *((_QWORD *)this + 12);
  for ( i = *((_QWORD *)this + 13); v5 != i; v5 += 32LL )
  {
    v7 = (const WCHAR *)v5;
    if ( *(_QWORD *)(v5 + 24) >= 8uLL )
      v7 = *(const WCHAR **)v5;
    if ( CompareStringOrdinal(v7, -1, a2, -1, 1) == 2 )
      break;
  }
  if ( v5 == *((_QWORD *)this + 13) )
  {
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v39);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v32);
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
        (void *)0xB3,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v9);
    std::_Move_unchecked<std::wstring *,std::wstring *>(v5 + 32, *((_QWORD *)this + 13), (_OWORD *)v5);
    std::wstring::_Tidy_deallocate(*((_QWORD *)this + 13) - 32LL);
    *((_QWORD *)this + 13) -= 32LL;
    v28 = 0LL;
    v10 = (__int64 *)*((_QWORD *)this + 10);
    v11 = *v10;
    v28 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64 *, const unsigned __int16 *, __int64 *))(v11 + 40))(v10, a2, &v28);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xB7,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v12,
        bIgnoreCase);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v34,
      v28);
    v29 = 0;
    v30 = 0LL;
    v31 = &v34;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v29);
    v36 = v35;
    v37 = 0LL;
    v38 = &v34;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v36);
    while ( v29 != v36 || v31 != v38 )
    {
      v16 = v30;
      v33 = v30;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v33);
      v26 = 0LL;
      MonitorFromApplicationView = VirtualDesktopHelpers::GetMonitorFromApplicationView(v18, v17);
      v20 = *((_QWORD *)this + 6);
      v21 = *(__int64 (__fastcall **)(__int64, HMONITOR, __int64 *))(*(_QWORD *)v20 + 312LL);
      v22 = v26;
      v26 = 0LL;
      if ( v22 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v23 = v21(v20, MonitorFromApplicationView, &v26);
      if ( v23 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBD,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v23,
          bIgnoreCase);
      v24 = (*(__int64 (__fastcall **)(VirtualPinnedAppsHandler *, __int64, __int64))(*(_QWORD *)this + 104LL))(
              this,
              v16,
              v26);
      if ( v24 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBE,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
          (const char *)(unsigned int)v24);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v26);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v33);
      ++v29;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v29);
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v37);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    v27 = 0LL;
    v13 = (__int64 *)*((_QWORD *)this + 6);
    v14 = *v13;
    v27 = 0LL;
    v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, struct IVirtualDesktop **))(v14 + 312))(v13, 0LL, &v27);
    if ( v15 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xC3,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v15,
        bIgnoreCase);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::Stop(
      (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v39,
      a2,
      v27);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v27);
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v28);
    VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity::~VirtualDesktopUnpinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopUnpinAppActivity *)v39);
    Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v32);
    return 0LL;
  }
}
