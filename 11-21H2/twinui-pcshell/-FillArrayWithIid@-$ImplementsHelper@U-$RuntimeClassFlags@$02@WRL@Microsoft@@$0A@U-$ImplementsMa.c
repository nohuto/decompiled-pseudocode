/*
 * XREFs of ?FillArrayWithIid@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveWindowFactoryBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAXPEAKPEAU_GUID@@@Z @ 0x18061A7FC
 * Callers:
 *     ?GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18061A850 (-GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>::FillArrayWithIid(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  unsigned int v3; // r9d

  v3 = *a2;
  *(GUID *)(a3 + 16LL * *a2) = GUID_cd292360_2763_4085_8a9f_74b224a29175;
  *a2 = v3 + 1;
  return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::FillArrayWithIid(
           a1 + 176,
           a2,
           a3);
}
