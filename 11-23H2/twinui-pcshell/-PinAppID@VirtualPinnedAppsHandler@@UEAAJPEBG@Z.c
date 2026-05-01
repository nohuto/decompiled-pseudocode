/*
 * XREFs of ?PinAppID@VirtualPinnedAppsHandler@@UEAAJPEBG@Z @ 0x180613470
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18003A7E0 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0IDAAAAAA@U_TlgReflectorTag_Pa.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x1800E1A80 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x18013A728 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x18013A89C (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$emplace_back@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA?A_T$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x1803F7A48 (--$emplace_back@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$vector@V-$basic.c)
 *     ??1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180613180 (--1VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z @ 0x180613BAC (-PinViewInternal@VirtualPinnedAppsHandler@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x180613F50 (-StartActivity@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtualDesktop@@@Z @ 0x1806141F0 (-Stop@VirtualDesktopPinAppActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEBGPEAUIVirtual.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall VirtualPinnedAppsHandler::PinAppID(VirtualPinnedAppsHandler *this, WCHAR *lpString2)
{
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // r14
  const WCHAR *v7; // rcx
  int v9; // eax
  __int64 *v10; // rcx
  __int64 v11; // rax
  int v12; // eax
  __int64 *v13; // rcx
  __int64 v14; // rax
  struct IApplicationView *v15; // rbx
  int v16; // eax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-1F8h]
  struct IVirtualDesktop *v18; // [rsp+40h] [rbp-1D8h] BYREF
  __int64 v19; // [rsp+48h] [rbp-1D0h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-1C8h] BYREF
  struct IApplicationView *v21; // [rsp+58h] [rbp-1C0h] BYREF
  __int64 *v22; // [rsp+60h] [rbp-1B8h]
  RTL_SRWLOCK *v23; // [rsp+68h] [rbp-1B0h] BYREF
  struct IApplicationView *v24; // [rsp+70h] [rbp-1A8h] BYREF
  __int64 v25; // [rsp+78h] [rbp-1A0h] BYREF
  int v26; // [rsp+80h] [rbp-198h]
  __int64 v27; // [rsp+88h] [rbp-190h] BYREF
  __int64 v28; // [rsp+90h] [rbp-188h] BYREF
  __int64 *v29; // [rsp+98h] [rbp-180h]
  _QWORD v30[40]; // [rsp+B0h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, RTL_SRWLOCK **))(**((_QWORD **)this + 9) + 32LL))(*((_QWORD *)this + 9), &v23);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v30,
    (__int64)"VirtualDesktopPinAppActivity");
  v30[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v30);
  if ( !*((_QWORD *)this + 10) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x83,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)0x80070490LL,
      bIgnoreCase);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 424LL))(*((_QWORD *)this + 6)) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x84,
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
    if ( CompareStringOrdinal(v7, -1, lpString2, -1, 1) == 2 )
    {
      VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v30);
      Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
      return 1LL;
    }
    v5 += 32LL;
  }
  LOBYTE(v4) = 1;
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, const wchar_t *, WCHAR *))(**((_QWORD **)this + 7) + 32LL))(
         *((_QWORD *)this + 7),
         v4,
         L"PinnedApps",
         lpString2);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x8B,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v9);
  std::wstring::wstring(&v27, lpString2);
  std::vector<std::wstring>::emplace_back<std::wstring>((__int64 *)this + 11, (__int64)&v27);
  std::wstring::_Tidy_deallocate((__int64)&v27);
  v19 = 0LL;
  v10 = (__int64 *)*((_QWORD *)this + 10);
  v11 = *v10;
  v19 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64 *, WCHAR *, __int64 *))(v11 + 40))(v10, lpString2, &v19);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8F,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
      (const char *)(unsigned int)v12,
      4);
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
    (__int64)&v25,
    v19);
  v20 = 0;
  v21 = 0LL;
  v22 = &v25;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
  LODWORD(v27) = v26;
  v28 = 0LL;
  v29 = &v25;
  details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject((unsigned int *)&v27);
  while ( v20 != (_DWORD)v27 || v22 != v29 )
  {
    v15 = v21;
    v24 = v21;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
    v16 = VirtualPinnedAppsHandler::PinViewInternal(this, v15, 1);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x92,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktoppinnedapphandler.cpp",
        (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v24);
    ++v20;
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v20);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v21);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  v18 = 0LL;
  v13 = (__int64 *)*((_QWORD *)this + 6);
  v14 = *v13;
  v18 = 0LL;
  (*(void (__fastcall **)(__int64 *, struct IVirtualDesktop **))(v14 + 360))(v13, &v18);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::Stop(
    (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v30,
    lpString2,
    v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v19);
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity::~VirtualDesktopPinAppActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopPinAppActivity *)v30);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v23);
  return 0LL;
}
