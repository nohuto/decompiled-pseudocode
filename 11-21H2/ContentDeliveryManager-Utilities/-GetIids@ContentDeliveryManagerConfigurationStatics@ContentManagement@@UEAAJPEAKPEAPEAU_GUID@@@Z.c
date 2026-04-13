/*
 * XREFs of ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E5B0
 * Callers:
 *     ?GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E5C0 (-GetIids@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCI@EAAJPEAKPEAPEAU_GUID@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::GetIids(
        __int64 this,
        _DWORD *a2,
        GUID **a3)
{
  return Microsoft::WRL::ActivationFactory<Microsoft::WRL::Implements<Microsoft::WRL::FtmBase,ContentManagement::IContentDeliveryManagerConfiguration>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::GetIids(
           this,
           a2,
           a3);
}
