/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140359EA0
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025EB60 (CcInitializeCacheMapInternal.c)
 *     CcCopyBytesToUserBuffer @ 0x140262440 (CcCopyBytesToUserBuffer.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D2C0 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x14029F3A0 (CcGetVacbMiss.c)
 *     CcAsyncReadPrefetch @ 0x1402BDD8C (CcAsyncReadPrefetch.c)
 *     CcMapAndCopyInToCache @ 0x1402CCB80 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x1402F1230 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x14030ECB0 (CcPerformReadAhead.c)
 *     FsRtlCancelNotify @ 0x14035E360 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x14036BA2C (CcMdlWriteComplete2.c)
 *     CcLockSystemCacheBuffer @ 0x140537CB0 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x14053E150 (FsRtlNormalizeNtstatus.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     RawDispatch @ 0x140791920 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B790 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCopyWrite @ 0x14084FDE0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CF60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D550 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D7B0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  if ( Exception <= -1073741753 )
  {
    if ( Exception != -1073741753
      && Exception != -2147483647
      && Exception != -2147483646
      && Exception != -2147483645
      && Exception != -1073741819
      && Exception != -1073741795
      && Exception != -1073741754 )
    {
      return 1;
    }
  }
  else if ( Exception != -1073741684
         && Exception != -1073741676
         && Exception != -1073741674
         && Exception != -1073741654
         && Exception != -1073740791 )
  {
    return Exception != -1073740768;
  }
  return 0;
}
