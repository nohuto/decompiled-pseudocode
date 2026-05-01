/*
 * XREFs of ??1?$unique_ptr@$$BY0A@$$CBGU?$default_delete@$$BY0A@$$CBG@std@@@std@@QEAA@XZ @ 0x1803DDA98
 * Callers:
 *     _CQueryKnownGameList::GetGameEntryFromPID_::_1_::dtor$0 @ 0x1802BE0A5 (_CQueryKnownGameList--GetGameEntryFromPID_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetProcessNameByPID_::_1_::dtor$2 @ 0x1802BE0C9 (_CQueryKnownGameList--GetProcessNameByPID_--_1_--dtor$2.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$0 @ 0x1802BE0E0 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$4 @ 0x1802BE100 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$4.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$5 @ 0x1802BE120 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$5.c)
 *     _CQueryKnownGameList::GetGameEntryByIdentifier_::_1_::dtor$6 @ 0x1802BE140 (_CQueryKnownGameList--GetGameEntryByIdentifier_--_1_--dtor$6.c)
 *     _IsGameManager::ScanKGLForFSECompat_::_1_::dtor$2 @ 0x1803E019D (_IsGameManager--ScanKGLForFSECompat_--_1_--dtor$2.c)
 *     _Util::InProcPropertyStore::TryGetValue_::_1_::dtor$1 @ 0x18071950F (_Util--InProcPropertyStore--TryGetValue_--_1_--dtor$1.c)
 *     _CQueryKnownGameList::GetGameEntryFromGameConfig_::_1_::dtor$0 @ 0x18073FE15 (_CQueryKnownGameList--GetGameEntryFromGameConfig_--_1_--dtor$0.c)
 *     _CQueryKnownGameList::GetProcessArgsByPID_::_1_::dtor$2 @ 0x180740059 (_CQueryKnownGameList--GetProcessArgsByPID_--_1_--dtor$2.c)
 *     _CQueryKnownGameList::GetProcessParentDirectoryByPID_::_1_::dtor$2 @ 0x1807404BB (_CQueryKnownGameList--GetProcessParentDirectoryByPID_--_1_--dtor$2.c)
 *     _CQueryKnownGameList::GetProcessWorkingDirectoryByPID_::_1_::dtor$2 @ 0x18074072F (_CQueryKnownGameList--GetProcessWorkingDirectoryByPID_--_1_--dtor$2.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<unsigned short const [0]>::~unique_ptr<unsigned short const [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete[](v1);
}
