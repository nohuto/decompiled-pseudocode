/*
 * XREFs of ?GetIids@CompositionCapabilitiesFactory@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1801021C0
 * Callers:
 *     ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@U?$Implements@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIInspectable@@UICompositionCapabilitiesStatics@Composition@UI@Windows@@U?$CloakedIid@UICompositionCapabilitiesInteropFactory@Desktop@Composition@UI@Windows@@@23@@23@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A96F0 (-GetIids@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@U-$Implements@U-$RuntimeClass.c)
 *     ?GetIids@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A9710 (-GetIids@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A9730 (-GetIids@CompositionCapabilitiesFactory@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionCapabilitiesFactory::GetIids(
        Windows::UI::Composition::CompositionCapabilitiesFactory *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[2] = GUID_f7b7a86e_6416_49e5_8ddf_afe949e20562;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
