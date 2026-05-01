/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180013FB0
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x18004D692 (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$6 @ 0x18004D869 (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$6.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$2 @ 0x18004DAC7 (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$2.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$1 @ 0x18004DB57 (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$1.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$3 @ 0x18004DB69 (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x18004DDB7 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFileForFilePath_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x18004DDDB (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004DDDB.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
