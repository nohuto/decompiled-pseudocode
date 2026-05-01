/*
 * XREFs of ?_AddViewToGlom@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIImmersiveApplicationInternal@@W4IWM_ACTION_TYPE@@PEAUITaskWindow@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800109E8
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E474 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180398A20 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiveApplicationInternal@@1PEBUTransferWindowOptions@@@Z @ 0x1803A161C (-TransferWindowBetweenGlomsWorker@CApplicationManager@@AEAAJAEBVCTaskWindowFinder@@PEAUIImmersiv.c)
 * Callees:
 *     ?PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18000E8D0 (-PositionNewCreatedApp@CActivationBasedAppAndGlomCollection@@QEAAJAEBV-$ComPtr@UIImmersiveApplic.c)
 *     ??1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ @ 0x180010B70 (--1AddWindowToGlom@CAppManagerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z @ 0x180011C04 (-StartActivity@AddWindowToGlom@CAppManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800227B4 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro_ea_1800227B4.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180132FE0 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_AddViewToGlom(
        __int64 a1,
        __int64 a2,
        struct IImmersiveApplicationInternal *a3,
        int a4,
        __int64 a5,
        __int64 (__fastcall ***a6)(_QWORD, GUID *, unsigned __int64 *))
{
  const unsigned __int16 *v10; // rbx
  int v11; // ebx
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  struct IImmersiveApplicationInternal *v14; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v15[40]; // [rsp+50h] [rbp-B0h] BYREF

  v10 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)a3 + 24LL))(a3);
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    v15,
    "AddWindowToGlom");
  v15[0] = &CAppManagerTelemetry::AddWindowToGlom::`vftable';
  CAppManagerTelemetry::AddWindowToGlom::StartActivity((CAppManagerTelemetry::AddWindowToGlom *)v15, v10);
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 576) + 32LL))(
          *(_QWORD *)(a1 + 576),
          0LL,
          &GUID_91b0050a_78af_434e_ae0c_89943ac0ffee,
          &v13);
  if ( v11 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, struct IImmersiveApplicationInternal *, _QWORD, __int64, int, __int64))(*(_QWORD *)v13 + 48LL))(
            v13,
            a3,
            0LL,
            a2,
            a4,
            a5);
    if ( v11 >= 0 && !a4 )
    {
      v14 = a3;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v14);
      v11 = CActivationBasedAppAndGlomCollection::PositionNewCreatedApp((_QWORD *)(a1 + 624), &v14, a6);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v14);
    }
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v15, (unsigned int)v11);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  CAppManagerTelemetry::AddWindowToGlom::~AddWindowToGlom((CAppManagerTelemetry::AddWindowToGlom *)v15);
  return (unsigned int)v11;
}
