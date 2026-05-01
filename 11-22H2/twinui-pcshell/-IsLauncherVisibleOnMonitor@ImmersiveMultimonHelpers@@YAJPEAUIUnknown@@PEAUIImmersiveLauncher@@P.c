/*
 * XREFs of ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1805978F8
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180598838 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 *     ?IsLauncherVisible@TabletModePositioner@@AEAA_NXZ @ 0x1805BD6D8 (-IsLauncherVisible@TabletModePositioner@@AEAA_NXZ.c)
 *     ?IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ @ 0x1805C3B5C (-IsLauncherOrSwitcherVisibleOnThisMonitor@TabletModeViewManager@@AEAA_NXZ.c)
 *     ?ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z @ 0x1805D43BC (-ShowView@WindowArrangementView@@AEAAJPEAUtagRECT@@AEBUtagPOINT@@0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIImmersiveLauncher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveLauncher@@@Z @ 0x1805971A0 (--4-$ComPtr@UIImmersiveLauncher@@@WRL@Microsoft@@QEAAAEAV012@PEAUIImmersiveLauncher@@@Z.c)
 */

__int64 __fastcall ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(
        IUnknown *punk,
        struct IUnknown *a2,
        struct IImmersiveLauncher *a3,
        bool *a4)
{
  __int64 *v6; // rbx
  HRESULT Service; // ebx
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 **v10; // rax
  __int64 *AddressOf; // rax
  __int64 *v12; // rbx
  struct IUnknown *v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF
  __int64 v17; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v18; // [rsp+78h] [rbp+48h] BYREF

  v17 = 0LL;
  *(_BYTE *)a3 = 0;
  if ( a2 )
  {
    Microsoft::WRL::ComPtr<IImmersiveLauncher>::operator=(&v17, (__int64)a2);
  }
  else
  {
    v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v17, &v16);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
    Service = IUnknown_QueryService(
                punk,
                (const GUID *const)&SID_ImmersiveLauncher,
                &GUID_d8d60399_a0f1_f987_5551_321fd1b49864,
                (void **)v6);
    if ( Service < 0 )
      goto LABEL_12;
  }
  Service = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 56LL))(v17, &v16);
  if ( Service >= 0 && (_DWORD)v16 )
  {
    v8 = v17;
    v14 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 88LL);
    v10 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v14, &v18);
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(*v10);
    Service = v9(v8, AddressOf);
    if ( Service >= 0 )
    {
      v18 = 0LL;
      v12 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v15);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v12);
      Service = IUnknown_QueryService(
                  punk,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                  (void **)v12);
      if ( Service >= 0 )
        *(_BYTE *)a3 = (unsigned int)SHIsSameObject(v14, v18) != 0;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v14);
  }
LABEL_12:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return (unsigned int)Service;
}
