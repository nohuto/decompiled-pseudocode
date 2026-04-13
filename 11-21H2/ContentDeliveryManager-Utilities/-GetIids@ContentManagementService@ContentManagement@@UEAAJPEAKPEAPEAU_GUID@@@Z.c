/*
 * XREFs of ?GetIids@ContentManagementService@ContentManagement@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E610
 * Callers:
 *     ?GetIids@ContentManagementService@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E620 (-GetIids@ContentManagementService@ContentManagement@@WDA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E640 (-GetIids@ContentManagementService@ContentManagement@@WDI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E660 (-GetIids@ContentManagementService@ContentManagement@@WEA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E680 (-GetIids@ContentManagementService@ContentManagement@@WEI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E6A0 (-GetIids@ContentManagementService@ContentManagement@@WFA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WFI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E6C0 (-GetIids@ContentManagementService@ContentManagement@@WFI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x18004E6E0 (-GetIids@ContentManagementService@ContentManagement@@WGA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::GetIids(
           this,
           a2,
           a3);
}
