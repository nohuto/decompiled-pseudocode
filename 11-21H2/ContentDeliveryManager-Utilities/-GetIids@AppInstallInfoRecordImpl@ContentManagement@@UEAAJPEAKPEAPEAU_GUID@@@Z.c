/*
 * XREFs of ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E580
 * Callers:
 *     ?GetIids@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E590 (-GetIids@AppInstallInfoRecordImpl@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::AppInstallInfoRecordImpl::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IAppInstallInfoRecord>::GetIids(
           this,
           a2,
           a3);
}
