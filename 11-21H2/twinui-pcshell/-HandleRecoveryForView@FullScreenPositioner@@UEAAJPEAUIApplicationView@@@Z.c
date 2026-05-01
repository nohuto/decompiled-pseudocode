/*
 * XREFs of ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x18031FB40
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18031E8A0 (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803207F0 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x180320AC8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::HandleRecoveryForView(
        struct IImmersiveMonitor **this,
        struct IApplicationView *a2)
{
  HWND ForegroundWindow; // rbp
  struct IImmersiveMonitor *v5; // rdi
  void (__fastcall *v6)(struct IImmersiveMonitor *, HWND, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v12; // [rsp+48h] [rbp+10h] BYREF

  FullScreenPositioner::SetPositionerMonitor(a2, this[13]);
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v11) >= 0 && v11 )
  {
    v12 = 0LL;
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow )
    {
      v5 = this[11];
      v6 = *(void (__fastcall **)(struct IImmersiveMonitor *, HWND, __int64 *))(*(_QWORD *)v5 + 48LL);
      AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v12);
      v6(v5, ForegroundWindow, AddressOf);
    }
    v8 = FullScreenPositioner::AddView((FullScreenPositioner *)(this - 16), a2);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x29E,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8);
    if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v12) )
      FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(this - 16), a2);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v12);
  }
  return 0LL;
}
