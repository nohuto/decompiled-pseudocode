/*
 * XREFs of ?GetIids@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180035200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ThumbnailCacheHelper::GetIids(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::GetIids(
           a1 - 48,
           a2,
           a3);
}
