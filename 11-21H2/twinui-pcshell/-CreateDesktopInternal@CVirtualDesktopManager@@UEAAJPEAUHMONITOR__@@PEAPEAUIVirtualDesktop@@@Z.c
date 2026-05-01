/*
 * XREFs of ?CreateDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180544F50
 * Callers:
 *     ?CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z @ 0x180545140 (-CreateDesktopW@CVirtualDesktopManager@@UEAAJPEAUHMONITOR__@@PEAPEAUIVirtualDesktop@@@Z.c)
 *     ?TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B414 (-TransitionToGlobalMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@.c)
 *     ?TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@WRL@Microsoft@@@Z @ 0x18054B82C (-TransitionToPerMonitorMode@CVirtualDesktopManager@@AEAAJAEBVSyncLockExclusive@Details@Wrappers@.c)
 *     ?TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV?$unordered_map@PEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@U?$hash@PEAUHMONITOR__@@@3@U?$equal_to@PEAUHMONITOR__@@@3@V?$allocator@U?$pair@QEAUHMONITOR__@@V?$vector@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIApplicationView@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@3@@std@@PEAUIVirtualDesktop@@22PEAPEAU5@@Z @ 0x18054BC7C (-TransitionViewsInMonitor@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@AEBV-$unordered_map@PEAUH.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ACAC8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Par.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z @ 0x1805442A0 (--0-$com_ptr_t@UIObjectArray@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIObjectArray@@@Z.c)
 *     ??1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ @ 0x180544908 (--1VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAA@XZ.c)
 *     ?GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z @ 0x180545B6C (-GetMonitorsToNotify@CVirtualDesktopManager@@AEAAPEAUIObjectArray@@PEAUHMONITOR__@@@Z.c)
 *     ?StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ @ 0x1805486B0 (-StartActivity@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXXZ.c)
 *     ?Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDesktop@@PEAUIVirtualDesktopCollection@@@Z @ 0x180548AD0 (-Stop@VirtualDesktopCreatedActivity@VirtualDesktopTelemetry@VirtualDesktop@@QEAAXPEAUIVirtualDes.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVirtualDesktopManager::CreateDesktopInternal(
        CVirtualDesktopManager *this,
        HMONITOR a2,
        struct IVirtualDesktop **a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, HMONITOR, struct IVirtualDesktop **); // rbx
  int v9; // eax
  struct IObjectArray *MonitorsToNotify; // rax
  int v11; // eax
  struct IVirtualDesktop *v12; // rax
  struct IVirtualDesktop *v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v16[40]; // [rsp+30h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"VirtualDesktopCreatedActivity");
  v16[0] = &VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::`vftable';
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::StartActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v16);
  if ( a3 )
    *a3 = 0LL;
  if ( *((_DWORD *)this + 69) )
  {
    v6 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1FF,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v14 = 0LL;
    v7 = *((_QWORD *)this + 11);
    v8 = *(__int64 (__fastcall **)(__int64, HMONITOR, struct IVirtualDesktop **))(*(_QWORD *)v7 + 56LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
    v9 = v8(v7, a2, &v14);
    v6 = v9;
    if ( v9 >= 0 )
    {
      MonitorsToNotify = CVirtualDesktopManager::GetMonitorsToNotify((CVirtualDesktopManager *)((char *)this - 8), a2);
      wil::com_ptr_t<IObjectArray,wil::err_returncode_policy>::com_ptr_t<IObjectArray,wil::err_returncode_policy>(
        &v15,
        (__int64)MonitorsToNotify);
      v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IVirtualDesktop *))(**((_QWORD **)this + 14) + 24LL))(
              *((_QWORD *)this + 14),
              v15,
              v14);
      v6 = v11;
      if ( v11 >= 0 )
      {
        VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::Stop(
          (VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v16,
          v14,
          *((struct IVirtualDesktopCollection **)this + 11));
        if ( a3 )
        {
          v12 = v14;
          v14 = 0LL;
          *a3 = v12;
        }
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x205,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)v11);
      }
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x202,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)v9);
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  }
  VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity::~VirtualDesktopCreatedActivity((VirtualDesktop::VirtualDesktopTelemetry::VirtualDesktopCreatedActivity *)v16);
  return v6;
}
