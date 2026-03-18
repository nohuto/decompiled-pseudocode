/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140359D00
 * Callers:
 *     CcInitializeCacheMapInternal @ 0x14025E8D0 (CcInitializeCacheMapInternal.c)
 *     CcCopyBytesToUserBuffer @ 0x1402621B0 (CcCopyBytesToUserBuffer.c)
 *     CcAcquireByteRangeForWrite @ 0x14029D030 (CcAcquireByteRangeForWrite.c)
 *     CcGetVacbMiss @ 0x14029F110 (CcGetVacbMiss.c)
 *     CcAsyncReadPrefetch @ 0x1402BDAFC (CcAsyncReadPrefetch.c)
 *     CcMapAndCopyInToCache @ 0x1402CC8F0 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x1402F0FA0 (CcSetFileSizesEx.c)
 *     CcPerformReadAhead @ 0x14030EA20 (CcPerformReadAhead.c)
 *     FsRtlCancelNotify @ 0x14035E1C0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x14036B88C (CcMdlWriteComplete2.c)
 *     CcLockSystemCacheBuffer @ 0x140537760 (CcLockSystemCacheBuffer.c)
 *     FsRtlNormalizeNtstatus @ 0x14053DC00 (FsRtlNormalizeNtstatus.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14068A3A0 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     RawDispatch @ 0x140791730 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x14084B490 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCopyWrite @ 0x14084FAE0 (FsRtlCopyWrite.c)
 *     FsRtlCopyRead @ 0x14093CD60 (FsRtlCopyRead.c)
 *     FsRtlMdlReadDev @ 0x14093D350 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14093D5B0 (FsRtlPrepareMdlWriteDev.c)
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
