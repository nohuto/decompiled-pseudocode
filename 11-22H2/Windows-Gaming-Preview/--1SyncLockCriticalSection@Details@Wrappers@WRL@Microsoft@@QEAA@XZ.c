/*
 * XREFs of ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x18003EDEC
 * Callers:
 *     __lambda_8d476462564c7429b3edd0aaa6c2160c_::operator()_::_1_::dtor$0 @ 0x18004DD15 (__lambda_8d476462564c7429b3edd0aaa6c2160c_--operator()_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializePackageFamilyName_::_1_::dtor$0 @ 0x18004DD27 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializePackageFamilyName_-.c)
 *     __lambda_75b78523e3da460933f50e5d76bfa16b_::operator()_::_1_::dtor$4 @ 0x18004DD93 (__lambda_75b78523e3da460933f50e5d76bfa16b_--operator()_--_1_--dtor$4.c)
 *     __lambda_ef8eb52c9e6883c3173b82c9be862a9c_::operator()_::_1_::dtor$2 @ 0x18004DE59 (__lambda_ef8eb52c9e6883c3173b82c9be862a9c_--operator()_--_1_--dtor$2.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_SaveToGameConfigStore_::_1_::dtor$0 @ 0x18004DFB6 (_Windows--Gaming--Preview--GamesEnumeration--GameModeConfigurationServer--_SaveToGa_ea_18004DFB6.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::PopulateAsync_::_1_::dtor$0 @ 0x18004DFEC (_Windows--Gaming--Preview--GamesEnumeration--SystemDefaults--PopulateAsync_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection(
        struct _RTL_CRITICAL_SECTION **this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    LeaveCriticalSection(v2);
    *this = 0LL;
  }
}
