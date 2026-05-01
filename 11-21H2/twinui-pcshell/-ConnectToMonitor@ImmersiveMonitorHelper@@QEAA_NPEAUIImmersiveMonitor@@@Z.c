/*
 * XREFs of ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUIImmersiveMonitor@@@Z @ 0x1800D4FC0
 * Callers:
 *     ?AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ @ 0x180027450 (-AdjustMonitorConnectedIfNeeded@ImmersiveMonitorHelper@@QEAAJXZ.c)
 *     ?RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherState@@@Z @ 0x1800D4DD4 (-RuntimeClassInitialize@ImmersiveMonitorHelper@@QEAAJPEAUIServiceProvider@@PEAUIXamlLauncherStat.c)
 *     _lambda_fed9ba16c3d217f0d904c8b3d5c7d5f7_::operator() @ 0x1801ACC4C (_lambda_fed9ba16c3d217f0d904c8b3d5c7d5f7_--operator().c)
 *     ?ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044AA80 (-ConnectToMonitor@XamlLauncher@@UEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUHWND__@@UtagPOINT@@@Z @ 0x18044C8AC (-ConnectToMonitor@ImmersiveMonitorHelper@@QEAA_NPEAUHWND__@@UtagPOINT@@@Z.c)
 *     ?MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18044CD5C (-MoveStartToMonitorWithoutHiding@ImmersiveMonitorHelper@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z @ 0x1800D5664 (--4-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveMonitor@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall ImmersiveMonitorHelper::ConnectToMonitor(ImmersiveMonitorHelper *this, struct IUnknown *a2)
{
  bool v4; // bl
  HRESULT v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *ppvOut; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  if ( !(unsigned int)SHIsSameObject(*((struct IUnknown **)this + 8), a2) )
  {
    Microsoft::WRL::ComPtr<IImmersiveMonitor>::operator=((char *)this + 64, a2);
    v4 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 104LL))(*((_QWORD *)this + 10)) != 0;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  v5 = IUnknown_QueryService(
         a2,
         &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2,
         &GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2,
         &ppvOut);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x155,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\immersivemonitorhelper.cpp",
      (const char *)(unsigned int)v5);
  else
    (*(void (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 10) + 48LL))(*((_QWORD *)this + 10), ppvOut);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&ppvOut);
  return v4;
}
