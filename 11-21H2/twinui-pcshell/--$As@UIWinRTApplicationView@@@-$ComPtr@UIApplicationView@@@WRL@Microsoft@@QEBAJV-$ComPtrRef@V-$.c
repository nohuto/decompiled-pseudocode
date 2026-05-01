/*
 * XREFs of ??$As@UIWinRTApplicationView@@@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIWinRTApplicationView@@@WRL@Microsoft@@@Details@12@@Z @ 0x18030EF04
 * Callers:
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x1803D1B20 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 *     ?_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAUHWND__@@PEAH@Z @ 0x1803D2480 (-_IsPropertySetActivationSourceAumidForeground@HolographicPositioner@@AEAAJPEAUIPropertySet@Coll.c)
 *     ?_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z @ 0x1804B6748 (-_LoadTitleFromWinRTFrame@SwitchItem@@AEAAJPEAPEAG@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationView>::As<IWinRTApplicationView>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a2);
  return v4(v3, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, a2);
}
