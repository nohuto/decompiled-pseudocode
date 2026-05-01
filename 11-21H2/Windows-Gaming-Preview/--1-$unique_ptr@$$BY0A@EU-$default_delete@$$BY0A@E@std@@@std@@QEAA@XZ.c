/*
 * XREFs of ??1?$unique_ptr@$$BY0A@EU?$default_delete@$$BY0A@E@std@@@std@@QEAA@XZ @ 0x18001AA4C
 * Callers:
 *     _GetGameFromGameConfigStore_::_1_::dtor$0 @ 0x18004C808 (_GetGameFromGameConfigStore_--_1_--dtor$0.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$0 @ 0x18004C81A (_DoWorkOnGameConfigStore_--_1_--dtor$0.c)
 *     _DoWorkOnGameConfigStore_::_1_::dtor$2 @ 0x18004C83E (_DoWorkOnGameConfigStore_--_1_--dtor$2.c)
 *     _GetRelatedProcessesFromGameConfigStore_::_1_::dtor$0 @ 0x18004C92B (_GetRelatedProcessesFromGameConfigStore_--_1_--dtor$0.c)
 *     _GetGlobalRelatedProcessesFromGameConfigStore_::_1_::dtor$0 @ 0x18004C94F (_GetGlobalRelatedProcessesFromGameConfigStore_--_1_--dtor$0.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServerImpl::_AddGameConfigsToGameListEntry_::_1_::dtor$0 @ 0x18004CBD1 (_Windows--Gaming--Preview--GamesEnumeration--GameListFactoryServerImpl--_AddGameConfigsToGameLis.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$10 @ 0x18004CC73 (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$10.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x18004D1BC (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x18004D1E0 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned char [0]>::~unique_ptr<unsigned char [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
