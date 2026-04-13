/*
 * XREFs of ?GetIids@ContentManagementBrokerServer@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E5E0
 * Callers:
 *     ?GetIids@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E5F0 (-GetIids@ContentManagementBrokerServer@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementBrokerServer::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContentManagementBroker>::GetIids(
           this,
           a2,
           a3);
}
