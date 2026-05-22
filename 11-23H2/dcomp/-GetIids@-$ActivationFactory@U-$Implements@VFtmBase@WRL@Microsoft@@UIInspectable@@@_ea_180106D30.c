/*
 * XREFs of ?GetIids@?$ActivationFactory@U?$Implements@VFtmBase@WRL@Microsoft@@UIInspectable@@@WRL@Microsoft@@UIAnimationControllerStatics@Composition@UI@Windows@@VNil@Details@23@$0A@@WRL@Microsoft@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180106D30
 * Callers:
 *     ?GetIids@AnimationControllerFactory@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA350 (-GetIids@AnimationControllerFactory@Composition@UI@Windows@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@AnimationControllerFactory@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AA370 (-GetIids@AnimationControllerFactory@Composition@UI@Windows@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,IInspectable>,Windows::UI::Composition::IAnimationControllerStatics,Microsoft::WRL::Details::Nil,0>::GetIids(
        __int64 a1,
        _DWORD *a2,
        GUID **a3)
{
  unsigned int v3; // ebx
  GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_00000035_0000_0000_c000_000000000046;
    v6[1] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    v6[2] = GUID_e71164df_651b_4800_b9e5_6a3bcfed3365;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
