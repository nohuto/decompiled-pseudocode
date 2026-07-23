/*
 * XREFs of CmpRecheckHiveVolumePolicy @ 0x1402F65DC
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402F682C (CmpLoadKeyCommon.c)
 *     CmpCreateHive @ 0x1407025DC (CmpCreateHive.c)
 *     CmpFinishSystemHivesLoad @ 0x14080B1E0 (CmpFinishSystemHivesLoad.c)
 *     CmpHandlePageFileOpenNotification @ 0x1408542D0 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     CmpArmLazyWriter @ 0x1402E7524 (CmpArmLazyWriter.c)
 *     CmpAdjustFileCFSafety @ 0x140419B70 (CmpAdjustFileCFSafety.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14075099C (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvViewMapContainsLockedPages @ 0x140751414 (HvViewMapContainsLockedPages.c)
 *     HvUnlockHiveFilePages @ 0x1407EA27C (HvUnlockHiveFilePages.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
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
