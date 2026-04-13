/*
 * XREFs of ?GetIids@ThumbnailCacheHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036270
 * Callers:
 *     ?GetIids@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036280 (-GetIids@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::GetIids(
           this,
           a2,
           a3);
}
