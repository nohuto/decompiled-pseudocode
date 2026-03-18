/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1402F634C
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F659C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080D490 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x140854EE0 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7294 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x140419130 (CmpAdjustFileCFSafety.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140750CBC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140751734 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x1407EA52C (HvUnlockHiveFilePages.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF6670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF668C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpRecheckHiveVolumePolicy(__int64 a1)
{
  int v2; // ecx
  bool v3; // cf
  __int64 v4; // rcx
  int v5; // ebx

  CmpLockRegistry();
  HvLockHiveFlusherExclusive(a1);
  if ( *(_QWORD *)(a1 + 4792) )
  {
    if ( (unsigned __int8)CmpVolumeContextMustHiveFilePagesBeKeptLocal()
      || (v2 = *(_DWORD *)(a1 + 4112), (v2 & 0x20) != 0) )
    {
      if ( (unsigned __int8)HvViewMapContainsLockedPages(a1 + 224) )
        CmpArmLazyWriter(2LL, 0LL, 0);
    }
    else if ( (*(_DWORD *)(a1 + 160) & 0x8000) == 0 )
    {
      v3 = (v2 & 0x10000) != 0;
      v4 = a1;
      if ( !v3 )
      {
        HvUnlockHiveFlusherExclusive(a1);
        CmpUnlockRegistry();
        v5 = CmpAdjustFileCFSafety(*(HANDLE *)(a1 + 1544));
        CmpLockRegistry();
        HvLockHiveFlusherExclusive(a1);
        if ( v5 < 0 )
          goto LABEL_11;
        *(_DWORD *)(a1 + 4112) |= 0x10000u;
        v4 = a1;
      }
      HvUnlockHiveFilePages(v4);
    }
  }
LABEL_11:
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry();
}
