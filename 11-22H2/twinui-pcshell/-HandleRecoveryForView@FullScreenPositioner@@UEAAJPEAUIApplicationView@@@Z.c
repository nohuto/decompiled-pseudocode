/*
 * XREFs of ?HandleRecoveryForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803ED580
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EC840 (-AddView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803EE0E0 (-SetPositionerMonitor@FullScreenPositioner@@CAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803EE2E8 (-SetVisibleView@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositioner::HandleRecoveryForView(
        struct IImmersiveMonitor **this,
        struct IApplicationView *a2)
{
  HWND ForegroundWindow; // rbp
  struct IImmersiveMonitor *v5; // rdi
  void (__fastcall *v6)(struct IImmersiveMonitor *, HWND, struct IUnknown **); // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v10; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown *v11; // [rsp+48h] [rbp+10h] BYREF

  FullScreenPositioner::SetPositionerMonitor(a2, this[12]);
  if ( (*(int (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)a2 + 88LL))(a2, &v10) >= 0 && v10 )
  {
    v11 = 0LL;
    ForegroundWindow = GetForegroundWindow();
    if ( ForegroundWindow )
    {
      v5 = this[10];
      v6 = *(void (__fastcall **)(struct IImmersiveMonitor *, HWND, struct IUnknown **))(*(_QWORD *)v5 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
      v6(v5, ForegroundWindow, &v11);
    }
    v7 = FullScreenPositioner::AddView((FullScreenPositioner *)(this - 15), a2);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x25F,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v7);
    if ( (unsigned int)SHIsSameObject((struct IUnknown *)a2, v11) )
      FullScreenPositioner::SetVisibleView((FullScreenPositioner *)(this - 15), a2);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v11);
  }
  return 0LL;
}
