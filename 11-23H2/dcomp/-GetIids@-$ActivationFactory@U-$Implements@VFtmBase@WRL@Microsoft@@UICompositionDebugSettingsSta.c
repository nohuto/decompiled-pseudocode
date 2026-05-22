/*
 * XREFs of ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionDebugSettingsStatics@Diagnostics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180106930
 * Callers:
 *     ?GetIids@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA250 (-GetIids@CompositionDebugSettingsFactory@Diagnostics@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,Windows::UI::Composition::Diagnostics::ICompositionDebugSettingsStatics>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_64ec1f1e_6af8_4af8_b814_c870fd5a9505;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
