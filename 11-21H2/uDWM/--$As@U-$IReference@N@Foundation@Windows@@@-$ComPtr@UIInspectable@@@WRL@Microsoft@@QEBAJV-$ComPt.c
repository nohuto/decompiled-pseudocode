/*
 * XREFs of ??$As@U?$IReference@N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180056750
 * Callers:
 *     ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x180056590 (-GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU-$IReference@N@Foundation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E570 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<double>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v3)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v3 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a2);
  return v4(v3, &GUID_2f2d6c29_5473_5f3e_92e7_96572bb990e2, a2);
}
