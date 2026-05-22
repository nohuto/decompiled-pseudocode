/*
 * XREFs of ?GetIids@CompositionIslandEnvironmentStatics@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180102240
 * Callers:
 *     ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmentStatics@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A9750 (-GetIids@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UICompositionIslandEnvironmen.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::CompositionIslandEnvironmentStatics::GetIids(
        Windows::UI::Composition::CompositionIslandEnvironmentStatics *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x20uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_132e54b7_bd29_5cf0_b131_c1dea47235ec;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
