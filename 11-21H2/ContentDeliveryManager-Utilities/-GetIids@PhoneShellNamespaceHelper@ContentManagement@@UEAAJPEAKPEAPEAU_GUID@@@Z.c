/*
 * XREFs of ?GetIids@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036240
 * Callers:
 *     ?GetIids@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036250 (-GetIids@PhoneShellNamespaceHelper@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::PhoneShellNamespaceHelper::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IPhoneShellNamespaceHelper>::GetIids(
           this,
           a2,
           a3);
}
