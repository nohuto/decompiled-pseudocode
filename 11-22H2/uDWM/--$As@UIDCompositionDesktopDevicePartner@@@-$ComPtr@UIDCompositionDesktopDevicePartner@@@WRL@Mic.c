/*
 * XREFs of ??$As@UIDCompositionDesktopDevicePartner@@@?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionDesktopDevicePartner@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009EC04
 * Callers:
 *     ?EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18009F5C0 (-EnsureNoiseSurfaceBrush@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180014868 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionDesktopDevicePartner>::As<IDCompositionDesktopDevicePartner>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_d14b6158_c3fa_4bce_9c1f_b61d8665eab0, a2);
}
