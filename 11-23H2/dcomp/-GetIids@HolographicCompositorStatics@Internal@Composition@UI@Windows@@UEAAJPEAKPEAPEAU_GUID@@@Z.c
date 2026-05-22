/*
 * XREFs of ?GetIids@HolographicCompositorStatics@Internal@Composition@UI@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180102440
 * Callers:
 *     ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositorStatics@Internal@Composition@UI@Windows@@@WRL@Microsoft@@VNil@Details@23@V4523@$0A@@WRL@Microsoft@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A97D0 (-GetIids@-$ActivationFactory@U-$Implements@VFtmBase@WRL@Microsoft@@UIHolographicCompositorStatic.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::Internal::HolographicCompositorStatics::GetIids(
        Windows::UI::Composition::Internal::HolographicCompositorStatics *this,
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
    v6[1] = GUID_eee2edef_f40e_4d91_86d0_265088b38b6b;
    *a2 = 2;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
