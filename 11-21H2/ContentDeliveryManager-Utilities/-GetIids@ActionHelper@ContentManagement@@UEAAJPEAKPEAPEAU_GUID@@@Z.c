/*
 * XREFs of ?GetIids@ActionHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036120
 * Callers:
 *     ?GetIids@ActionHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036130 (-GetIids@ActionHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ActionHelper::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IActionHelper>::GetIids(
           this,
           a2,
           a3);
}
