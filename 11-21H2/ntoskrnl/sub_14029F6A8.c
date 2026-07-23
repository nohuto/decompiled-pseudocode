/*
 * XREFs of sub_14029F6A8 @ 0x14029F6A8
 * Callers:
 *     FsRtlLookupPerFileObjectContext @ 0x14021C390 (FsRtlLookupPerFileObjectContext.c)
 *     ExTryAcquirePushLockSharedEx @ 0x140220540 (ExTryAcquirePushLockSharedEx.c)
 *     sub_140259A00 @ 0x140259A00 (sub_140259A00.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     sub_14028A370 @ 0x14028A370 (sub_14028A370.c)
 *     CcSetDirtyPinnedData @ 0x14029D3D0 (CcSetDirtyPinnedData.c)
 *     sub_14029D860 @ 0x14029D860 (sub_14029D860.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x14029EDB0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x14029EFF0 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     sub_14029FB3C @ 0x14029FB3C (sub_14029FB3C.c)
 *     sub_14029FDC4 @ 0x14029FDC4 (sub_14029FDC4.c)
 *     sub_1402A1AEC @ 0x1402A1AEC (sub_1402A1AEC.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402A3C30 (ExAcquireAutoExpandPushLockExclusive.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlCheckOplockEx2 @ 0x1402A5D00 (FsRtlCheckOplockEx2.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1402AE630 (FsRtlLookupPerStreamContextInternal.c)
 *     sub_1402C7DF0 @ 0x1402C7DF0 (sub_1402C7DF0.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1402F62C0 (ExTryAcquirePushLockExclusiveEx.c)
 *     FsRtlInsertPerStreamContext @ 0x1402F8CF0 (FsRtlInsertPerStreamContext.c)
 *     sub_140310450 @ 0x140310450 (sub_140310450.c)
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_140356E00 @ 0x140356E00 (sub_140356E00.c)
 *     sub_140356F50 @ 0x140356F50 (sub_140356F50.c)
 *     FsRtlReleaseEofLock @ 0x140358CC0 (FsRtlReleaseEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140359B80 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     FsRtlAcquireEofLock @ 0x14035D230 (FsRtlAcquireEofLock.c)
 *     sub_140360258 @ 0x140360258 (sub_140360258.c)
 *     sub_140360FD4 @ 0x140360FD4 (sub_140360FD4.c)
 *     sub_140361290 @ 0x140361290 (sub_140361290.c)
 *     sub_14037CE7C @ 0x14037CE7C (sub_14037CE7C.c)
 *     sub_140386944 @ 0x140386944 (sub_140386944.c)
 *     sub_1403A0424 @ 0x1403A0424 (sub_1403A0424.c)
 *     sub_1403A61E8 @ 0x1403A61E8 (sub_1403A61E8.c)
 *     sub_140559C3C @ 0x140559C3C (sub_140559C3C.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     sub_14063DABC @ 0x14063DABC (sub_14063DABC.c)
 *     ExInitializeDeviceAts @ 0x14063E8C0 (ExInitializeDeviceAts.c)
 *     sub_14063EC3C @ 0x14063EC3C (sub_14063EC3C.c)
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 *     ExSvmBeginDeviceReset @ 0x140640500 (ExSvmBeginDeviceReset.c)
 *     ExSvmFinalizeDeviceReset @ 0x140640800 (ExSvmFinalizeDeviceReset.c)
 *     sub_140641354 @ 0x140641354 (sub_140641354.c)
 *     sub_140643104 @ 0x140643104 (sub_140643104.c)
 *     sub_140AFF910 @ 0x140AFF910 (sub_140AFF910.c)
 *     sub_140B240EC @ 0x140B240EC (sub_140B240EC.c)
 *     sub_140B50C78 @ 0x140B50C78 (sub_140B50C78.c)
 * Callees:
 *     sub_14062D4BC @ 0x14062D4BC (sub_14062D4BC.c)
 */

__int64 __fastcall sub_14029F6A8(__int64 a1, __int64 a2)
{
  char v4; // dl

  if ( *(_BYTE *)(a2 + 870) )
  {
    v4 = *(_BYTE *)(a2 + 870);
    *(_BYTE *)(a2 + 870) = 0;
    return (unsigned int)v4;
  }
  else
  {
    if ( (*(_DWORD *)(a2 + 120) & 0x10000) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a2 + 120), 0x10u);
    _enable();
    if ( (WORD2(xmmword_140D06900) & 0x200) != 0 )
      sub_14062D4BC(a2, a1);
    return 0LL;
  }
}
