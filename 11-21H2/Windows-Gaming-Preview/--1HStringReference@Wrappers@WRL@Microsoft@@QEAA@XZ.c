/*
 * XREFs of ??1HStringReference@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180013B0C
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::GameConfigAppDisplayInfoServer::_GetFileDescription_::_1_::dtor$0 @ 0x18004C7AE (_Windows--Gaming--Preview--GamesEnumeration--GameConfigAppDisplayInfoServer--_GetFileDescription.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$6 @ 0x18004C973 (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$6.c)
 *     __lambda_c7e28edb760347053732171cef665d5d_::operator()_::_1_::dtor$2 @ 0x18004CB9B (__lambda_c7e28edb760347053732171cef665d5d_--operator()_--_1_--dtor$2.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$1 @ 0x18004CC19 (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$1.c)
 *     __lambda_88afd6bbfe2a61dd98f4359340091e1e_::operator()_::_1_::dtor$3 @ 0x18004CC2B (__lambda_88afd6bbfe2a61dd98f4359340091e1e_--operator()_--_1_--dtor$3.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_CreateStorageFileForFilePath_::_1_::dtor$2 @ 0x18004CE9D (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_CreateStorageFileForFilePath_.c)
 *     _Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer::_InitializeProperties_::_1_::dtor$5 @ 0x18004CEC1 (_Windows--Gaming--Preview--GamesEnumeration--GameListEntryServer--_InitializeProper_ea_18004CEC1.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::~HStringReference(
        Microsoft::WRL::Wrappers::HStringReference *this)
{
  *((_QWORD *)this + 3) = 0LL;
}
