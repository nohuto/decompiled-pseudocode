/*
 * XREFs of ??1?$MakeAllocator@VFindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18000FD5C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___&_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager___Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler____::_1_::dtor$0 @ 0x18004C6B1 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameList.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer__GUID_const_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler____::_1_::dtor$0 @ 0x18004C6E7 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_18004C6E7.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004C9FD (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServer--RuntimeClassInitialize_--_1_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_OnTileAdded_::_1_::dtor$1 @ 0x18004CA69 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_OnTileAdde_ea_18004CA69.c)
 *     __lambda_f9c49c7b293ed1d0382b2914a11b6bf4_::operator()_::_1_::dtor$2 @ 0x18004CA9F (__lambda_f9c49c7b293ed1d0382b2914a11b6bf4_--operator()_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$1 @ 0x18004CBE3 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameCon_ea_18004CBE3.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer_WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTile___WindowsInternal::Shell::UnifiedTile::Shim::IUnifiedTileManager___Windows::Gaming::Preview::GamesEnumeration::GameListEntryUpdateHandler____::_1_::dtor$0 @ 0x18004CCFB (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumerat_ea_18004CCFB.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer_Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer__GUID_&_std::unique_ptr_ExecutionModel::GameConfig_gameconfig_delete__std::shared_ptr_ExecutionModel::IGameConfigStore__const_&__::_1_::dtor$0 @ 0x18004CF63 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Gaming--Preview--GamesEnumeration--GameMode.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004AC78 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>::~MakeAllocator<Windows::Gaming::Preview::GamesEnumeration::FindAllOperation>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, 1uLL);
}
