/*
 * XREFs of ??$As@UIDCompositionVisualPartnerWinRTInterop@@@?$ComPtr@UIDCompositionVisual2@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompositionVisualPartnerWinRTInterop@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004C5E4
 * Callers:
 *     ?InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x18004BF1C (-InitializeDComp@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 *     ?ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ @ 0x18004C4DC (-ReleaseResources@CAccentAcrylicBlurBehind@@AEAAXXZ.c)
 *     ?Initialize@CSystemBackdropVisual@@UEAAJXZ @ 0x1800E12A0 (-Initialize@CSystemBackdropVisual@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EA6C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IDCompositionVisual2>::As<IDCompositionVisualPartnerWinRTInterop>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_fe93b735_e574_4a5d_a21a_f705c21945fa, a2);
}
