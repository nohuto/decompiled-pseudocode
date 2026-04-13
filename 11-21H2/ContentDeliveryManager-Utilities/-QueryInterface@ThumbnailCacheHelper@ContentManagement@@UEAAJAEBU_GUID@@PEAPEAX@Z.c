/*
 * XREFs of ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F060
 * Callers:
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F070 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F090 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003F0B0 (-QueryInterface@ThumbnailCacheHelper@ContentManagement@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ThumbnailCacheHelper::QueryInterface(__int64 this, _DWORD *a2, _QWORD *a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IThumbnailCacheHelper>::QueryInterface(
           this,
           a2,
           a3);
}
