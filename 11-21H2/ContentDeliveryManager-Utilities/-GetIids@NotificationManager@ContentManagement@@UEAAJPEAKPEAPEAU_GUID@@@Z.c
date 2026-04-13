/*
 * XREFs of ?GetIids@NotificationManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036210
 * Callers:
 *     ?GetIids@NotificationManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036220 (-GetIids@NotificationManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::NotificationManager::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::INotificationManager>::GetIids(
           this,
           a2,
           a3);
}
