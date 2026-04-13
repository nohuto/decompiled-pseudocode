/*
 * XREFs of ?Release@ContentManagementService@ContentManagement@@UEAAKXZ @ 0x180050D80
 * Callers:
 *     ?Release@ContentManagementService@ContentManagement@@W7EAAKXZ @ 0x180050D90 (-Release@ContentManagementService@ContentManagement@@W7EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ @ 0x180050DB0 (-Release@ContentManagementService@ContentManagement@@WCI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ @ 0x180050DD0 (-Release@ContentManagementService@ContentManagement@@WDA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ @ 0x180050DF0 (-Release@ContentManagementService@ContentManagement@@WDI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ @ 0x180050E10 (-Release@ContentManagementService@ContentManagement@@WEA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ @ 0x180050E30 (-Release@ContentManagementService@ContentManagement@@WEI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ @ 0x180050E50 (-Release@ContentManagementService@ContentManagement@@WFA@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ @ 0x180050E70 (-Release@ContentManagementService@ContentManagement@@WFI@EAAKXZ.c)
 *     ?Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ @ 0x180050E90 (-Release@ContentManagementService@ContentManagement@@WGA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ContentManagement::ContentManagementService::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,ContentManagement::IProcessCreativeEvent,ContentManagement::IProcessLockScreenEvent,ContentManagement::IProcessStartMenuEvent,ContentManagement::IProcessContextualSuggestionsEvent,ContentManagement::ILayoutResolver,ContentManagement::ILockScreenRegistrySettingProvider,ContentManagement::ITaskBarAppProperties>::Release(this);
}
