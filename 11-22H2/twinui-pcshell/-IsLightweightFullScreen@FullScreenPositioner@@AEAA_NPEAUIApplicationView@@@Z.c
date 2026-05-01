/*
 * XREFs of ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803ED85C
 * Callers:
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800DF470 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803ED0C0 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803EDA44 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAsInt32@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEAJ@Z @ 0x1803EBC50 (--$GetAsInt32@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ??$GetBoolean@U_tagpropertykey@@@?$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropertykey@@PEA_N@Z @ 0x1803EBCEC (--$GetBoolean@U_tagpropertykey@@@-$CPropertyStoreHelperBase@UIPropertyStore@@@@QEBAJU_tagpropert.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1807461F0 (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=4
bool __fastcall FullScreenPositioner::IsLightweightFullScreen(FullScreenPositioner *this, struct IApplicationView *a2)
{
  bool v2; // si
  struct IImmersiveApplication *ApplicationFromView; // rbx
  int (__fastcall *v4)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *); // rdi
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  struct IImmersiveApplication *v8; // [rsp+38h] [rbp-28h] BYREF
  __int128 v9; // [rsp+40h] [rbp-20h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  bool v11; // [rsp+90h] [rbp+30h] BYREF
  LONG v12; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+48h] BYREF

  v2 = 0;
  v11 = 0;
  if ( !*((_BYTE *)this + 392) )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v8 = ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
    v13 = 0LL;
    if ( ApplicationFromView )
    {
      v4 = *(int (__fastcall **)(struct IImmersiveApplication *, _QWORD, GUID *, __int64 *))(*(_QWORD *)ApplicationFromView
                                                                                           + 48LL);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
      if ( v4(ApplicationFromView, 0LL, &GUID_886d8eeb_8cf2_4446_8d02_cdba1dbdcf99, &v13) >= 0 )
      {
        v7 = v13;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v9 = PKEY_ImmersiveApplication_FullScreenSystemOverlayMode;
        v10 = 11;
        if ( (int)CPropertyStoreHelperBase<IPropertyStore>::GetAsInt32<_tagpropertykey>(&v7, &v9, &v12) < 0 || !v12 )
        {
          v9 = PKEY_ImmersiveApplication_LightweightFullScreenModeAllowed;
          v10 = 13;
          v5 = CPropertyStoreHelperBase<IPropertyStore>::GetBoolean<_tagpropertykey>(&v7, &v9, &v11);
          v2 = v11;
          if ( v5 < 0 )
            v2 = 0;
        }
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  }
  return v2;
}
