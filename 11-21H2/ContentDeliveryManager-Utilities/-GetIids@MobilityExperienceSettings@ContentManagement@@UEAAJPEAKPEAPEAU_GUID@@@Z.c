/*
 * XREFs of ?GetIids@MobilityExperienceSettings@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800361E0
 * Callers:
 *     ?GetIids@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800361F0 (-GetIids@MobilityExperienceSettings@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::MobilityExperienceSettings::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IMobilityExperienceSettings>::GetIids(
           this,
           a2,
           a3);
}
