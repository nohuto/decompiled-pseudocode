/*
 * XREFs of ??$As@UIImmersiveApplication2@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveApplication2@@@WRL@Microsoft@@@Details@12@@Z @ 0x180055BA0
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800386C0 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z @ 0x180055A00 (-IsEqualByHostId@CWinRTApplicationView@@UEAAJ_KPEAH@Z.c)
 *     ?UpdateEngagementFlags@CWinRTApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z @ 0x180055C00 (-UpdateEngagementFlags@CWinRTApplicationView@@UEAAJW4VIEW_ENGAGEMENT_FLAGS@@0@Z.c)
 *     ??$FindEx@VCImmersiveAppFinderByHostId@@@?$CTSimpleFixedArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEBAJAEBVCImmersiveAppFinderByHostId@@AEBV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800E930C (--$FindEx@VCImmersiveAppFinderByHostId@@@-$CTSimpleFixedArray@V-$ComPtr@UIImmersiveApplicationIn.c)
 *     ?Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x1802E1FAC (-Compare@CImmersiveAppFinderByHostIdAndGlomId@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z @ 0x180314260 (-GetHostId@CWinRTApplicationView@@UEAAJPEA_K@Z.c)
 *     ?SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z @ 0x180314790 (-SetForceActiveWindowAppearance@CWinRTApplicationView@@UEAAJH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IUnknown>::As<IImmersiveApplication2>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, a2);
}
