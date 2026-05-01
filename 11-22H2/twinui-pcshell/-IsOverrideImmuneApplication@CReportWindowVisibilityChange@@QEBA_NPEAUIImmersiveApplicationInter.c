/*
 * XREFs of ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802CF282
 * Callers:
 *     ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180021550 (-SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPD.c)
 *     ?HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z @ 0x1802D0E80 (-HandleSessionIdleStateChanged@CImmersiveApp@@UEAAXW4SESSION_IDLE_STATE@@@Z.c)
 *     ?ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE@@W4OVERRIDE_IMMUNITY_CHANGE@@W4ReportVisibilityOverrideOptions@@@Z @ 0x1802D0FD0 (-ReportVisibilityOverride@CImmersiveApp@@UEAA_NW4WINDOW_PRESENTED_OVERRIDE@@W4SESSION_IDLE_STATE.c)
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18039FC00 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x1803A0460 (-SetOverrideImmuneApplication@CReportWindowVisibilityChange@@QEAAJPEAUIImmersiveApplicationInter.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall CReportWindowVisibilityChange::IsOverrideImmuneApplication(
        CReportWindowVisibilityChange *this,
        struct IUnknown *a2)
{
  struct IUnknown **v4; // rdi
  struct IUnknown **v5; // rbp
  bool v6; // bl
  struct IUnknown *v8; // [rsp+40h] [rbp+8h] BYREF
  struct IUnknown **v9; // [rsp+48h] [rbp+10h]

  v4 = (struct IUnknown **)*((_QWORD *)this + 6);
  v5 = (struct IUnknown **)*((_QWORD *)this + 7);
  if ( v4 != v5 )
  {
    v9 = &v8;
    do
    {
      v8 = *v4;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
      v6 = (unsigned int)SHIsSameObject(a2, v8) != 0;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
      if ( v6 )
        break;
      ++v4;
    }
    while ( v4 != v5 );
  }
  return v4 != *((struct IUnknown ***)this + 7);
}
