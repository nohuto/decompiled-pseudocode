/*
 * XREFs of ?ApplyPresentationChanges@FullScreenPositioner@@AEAAXPEAUIApplicationView@@PEAUIPresentationRequestedArgs@@@Z @ 0x1803EC8C4
 * Callers:
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803ECD70 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@Z @ 0x1803EDD60 (-PresentationChangedForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAUIInspectable@@@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1807461F0 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall FullScreenPositioner::ApplyPresentationChanges(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        struct IPresentationRequestedArgs *a3)
{
  struct IApplicationView *v4; // rdx
  BOOL v5; // esi
  struct IImmersiveApplication *ApplicationFromView; // rbx
  __int64 (__fastcall *v7)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *); // rdi
  int v8; // eax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // [rsp+20h] [rbp-30h]
  __int16 v12; // [rsp+38h] [rbp-18h] BYREF
  BOOL v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v15; // [rsp+70h] [rbp+20h] BYREF
  int v16; // [rsp+74h] [rbp+24h]
  __int64 v17; // [rsp+80h] [rbp+30h] BYREF
  struct IImmersiveApplication *v18; // [rsp+88h] [rbp+38h] BYREF

  v16 = HIDWORD(this);
  v15 = 0;
  if ( (*(int (__fastcall **)(struct IPresentationRequestedArgs *, int *))(*(_QWORD *)a3 + 112LL))(a3, &v15) >= 0 )
  {
    v5 = v15 != 0;
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, v4);
    v18 = ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
    if ( !ApplicationFromView )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x450,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)0x80004001LL,
        v11);
    v17 = 0LL;
    v7 = *(__int64 (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ApplicationFromView
                                                                                             + 48LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v8 = v7(ApplicationFromView, 0LL, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &v17);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x453,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v8,
        v11);
    v9 = v17;
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v12 = 3;
    v13 = v5;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *, __int16 *))(*(_QWORD *)v9 + 48LL))(
            v9,
            &PKEY_ImmersiveApplication_FullScreenSystemOverlayMode,
            &v12);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x456,
        (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        (const char *)(unsigned int)v10,
        v11);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v18);
  }
}
