/*
 * XREFs of ??$As@UIImmersiveApplicationInternal@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@Details@12@@Z @ 0x18000FF1C
 * Callers:
 *     ??$FindEx@VCImmersiveAppFinderByTaskWindow@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByTaskWindow@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x18000FBD8 (--$FindEx@VCImmersiveAppFinderByTaskWindow@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicati.c)
 *     ?Compare@CImmersiveAppFinderByFrameProxy@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18000FE54 (-Compare@CImmersiveAppFinderByFrameProxy@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x18003D4C0 (-OnCommand@CApplicationFrameService@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     _lambda_e7bc64b627cbb54866febc88068197a7_::operator() @ 0x1801D7AC0 (_lambda_e7bc64b627cbb54866febc88068197a7_--operator().c)
 *     _lambda_20045b0b3bc9a0c8c612018082f6611c_::operator() @ 0x1803972E4 (_lambda_20045b0b3bc9a0c8c612018082f6611c_--operator().c)
 *     _lambda_bb299bb733d931796faa9380238be063_::operator() @ 0x18039766C (_lambda_bb299bb733d931796faa9380238be063_--operator().c)
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18039857C (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z @ 0x18039FC00 (-RestoreApplicationVisibilityOverride@CApplicationManager@@UEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collections@Foundation@Windows@@PEAUIViewEventArgsForSelectTargetView@ViewManagerInterop@Shell@Internal@5@@Z @ 0x1803A2C30 (-_HandleSelectTargetViewForNavigationRequest@CApplicationManager@@AEAAX_KPEAUIPropertySet@Collec.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x1803AE1E0 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1803B72E4 (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x1803BA0F8 (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplicationInternal>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64),
        __int64 a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  return v4(v3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, a2);
}
