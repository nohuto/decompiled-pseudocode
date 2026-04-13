/*
 * XREFs of ?GetIids@ContextualSuggestionsManager@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036150
 * Callers:
 *     ?GetIids@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180036160 (-GetIids@ContextualSuggestionsManager@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContextualSuggestionsManager::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IContextualSuggestionsManager>::GetIids(
           this,
           a2,
           a3);
}
