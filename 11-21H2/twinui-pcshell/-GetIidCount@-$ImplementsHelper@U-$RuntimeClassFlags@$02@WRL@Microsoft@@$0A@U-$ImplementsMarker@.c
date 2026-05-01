/*
 * XREFs of ?GetIidCount@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCImmersiveWindowFactoryBase@@@Details@23@UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18061A82C
 * Callers:
 *     ?GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18061A850 (-GetIids@CImmersiveWindowFactory@@UEAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     ?GetIidCount@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18030B88C (-GetIidCount@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIWeakReferenceSource.c)
 */

__int64 Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<CImmersiveWindowFactoryBase>,IWeakReferenceSource>::GetIidCount()
{
  return (unsigned int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource>::GetIidCount()
       + 1;
}
