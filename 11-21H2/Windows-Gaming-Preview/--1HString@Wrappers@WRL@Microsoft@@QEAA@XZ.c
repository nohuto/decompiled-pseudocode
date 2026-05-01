/*
 * XREFs of ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180013B1C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::GetAllLastRunProcessPaths_::_1_::dtor$1 @ 0x18004C478 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--GetAllLastRunProcessPa.c)
 *     _SetRelatedProcessesToGameConfigStore_::_1_::dtor$1 @ 0x18004C4AE (_SetRelatedProcessesToGameConfigStore_--_1_--dtor$1.c)
 *     __lambda_8d476462564c7429b3edd0aaa6c2160c_::operator()_::_1_::dtor$7 @ 0x18004C4C0 (__lambda_8d476462564c7429b3edd0aaa6c2160c_--operator()_--_1_--dtor$7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::FindAllOperation::_FilterTile_::_1_::dtor$11 @ 0x18004C4E4 (_Windows--Gaming--Preview--GamesEnumeration--FindAllOperation--_FilterTile_--_1_--dtor$11.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_AttachGameModeConfig_::_1_::dtor$4 @ 0x18004C54A (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_AttachGameModeConfig_--_1_--d.c)
 *     __lambda_8d476462564c7429b3edd0aaa6c2160c_::operator()_::_1_::dtor$1 @ 0x18004C55C (__lambda_8d476462564c7429b3edd0aaa6c2160c_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$9 @ 0x18004C7E4 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFi_ea_18004C7E4.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_LoadPropertyValues_::_1_::dtor$1 @ 0x18004C8E3 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_LoadPropertyValues_--.c)
 *     _Windows::Foundation::Collections::Internal::SimpleKeyValuePair_HSTRING_____IInspectable___Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_IInspectable____1_::Make_::_1_::dtor$7 @ 0x18004C8F5 (_Windows--Foundation--Collections--Internal--SimpleKeyValuePair_HSTRING_____IInspectable___Windo.c)
 *     _SerializeRelatedProcessArray_::_1_::dtor$5 @ 0x18004C907 (_SerializeRelatedProcessArray_--_1_--dtor$5.c)
 *     __lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator()_::_1_::dtor$1 @ 0x18004C919 (__lambda_ef8eb52c9e6883c3173b82c9be862a9c_--operator()_--_1_--dtor$1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeCategoryFromStateRepository_::_1_::dtor$1 @ 0x18004CDD7 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeCatego_ea_18004CDD7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeAppDisplayInfo_::_1_::dtor$0 @ 0x18004CE1F (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeAppDisplayInfo_--_1.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$16 @ 0x18004CE31 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004CE31.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$6 @ 0x18004CE67 (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$6.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$5 @ 0x18004CE8B (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$8 @ 0x18004CEE5 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004CEE5.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$1 @ 0x18004CF09 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGameConfigStore.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_SetTitleIdInternal_::_1_::dtor$0 @ 0x18004CF51 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_SetTitleIdInternal_--_1_--dto.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HString::~HString(HSTRING *this)
{
  WindowsDeleteString(*this);
  *this = 0LL;
}
