/*
 * XREFs of ??1?$unique_ptr@$$BY0A@$$CBGU?$default_delete@$$BY0A@$$CBG@std@@@std@@QEAA@XZ @ 0x180049D0C
 * Callers:
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x18004E0C4 (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x18004E10C (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x18004E11E (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x18004E130 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$3 @ 0x18004E142 (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(void **a1)
{
  operator delete[](*a1);
}
