/*
 * XREFs of ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1805A66C0
 * Callers:
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1805A63AC (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180044940 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SurfaceHubPositioner::_SetPositionerMonitor(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IImmersiveMonitor *a2)
{
  __int64 *AddressOf; // rax
  struct IImmersiveApplication **v5; // r8
  int ApplicationFromView; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v11);
  ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(this, (struct IApplicationView *)AddressOf, v5);
  v7 = ApplicationFromView;
  if ( ApplicationFromView >= 0 )
  {
    ApplicationFromView = (*(__int64 (__fastcall **)(__int64, struct IImmersiveMonitor *))(*(_QWORD *)v11 + 360LL))(
                            v11,
                            a2);
    v7 = ApplicationFromView;
    if ( ApplicationFromView >= 0 )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v8 = 654LL;
  }
  else
  {
    v8 = 649LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)ApplicationFromView);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v7;
}
