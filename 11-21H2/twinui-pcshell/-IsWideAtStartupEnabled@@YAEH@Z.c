/*
 * XREFs of ?IsWideAtStartupEnabled@@YAEH@Z @ 0x18036F578
 * Callers:
 *     ?GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z @ 0x18036EE8C (-GetDefaultCortanaWidthWithoutGutter@@YAHPEBUtagRECT@@H@Z.c)
 *     ?PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z @ 0x18039CFF8 (-PositionCortanaWindow@SearchAppDesktopExperienceView@@AEAAJ_N0@Z.c)
 *     ?PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z @ 0x1803AB1F8 (-PositionCortanaWindow@CortanaDesktopExperienceView@@AEAAJ_N0@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UIUISettings2@ViewManagement@UI@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIUISettings2@ViewManagement@UI@1@@Z @ 0x18036DFCC (--$ActivateInstance@UIUISettings2@ViewManagement@UI@Windows@@@Foundation@Windows@@YAJPEAUHSTRING.c)
 *     ?GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z @ 0x18036EDF4 (-GetDWORD@CortanaFeatureConfiguration@@YAJW4FeatureId@1@PEAK@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall IsWideAtStartupEnabled(int a1)
{
  char v2; // di
  __int64 v3; // rbx
  double v5; // [rsp+20h] [rbp-40h] BYREF
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+48h] [rbp-18h]

  v2 = 0;
  v6 = 0LL;
  v8 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.UI.ViewManagement.UISettings",
    0x25u,
    0x24u);
  v3 = v8;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  Windows::Foundation::ActivateInstance<Windows::UI::ViewManagement::IUISettings2>(v3, &v6);
  if ( v6
    && (v5 = DOUBLE_1_0, (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v6 + 48LL))(v6, &v5) >= 0)
    && v5 > 1.25
    || (LODWORD(v5) = 0, (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x38, &v5) >= 0)
    && a1 >= SLODWORD(v5)
    && (int)CortanaFeatureConfiguration::GetDWORD((CortanaFeatureConfiguration *)0x37, &v5) >= 0
    && LODWORD(v5) )
  {
    v2 = 1;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v6);
  return v2;
}
