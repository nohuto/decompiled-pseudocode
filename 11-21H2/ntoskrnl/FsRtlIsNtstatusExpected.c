/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140247160
 * Callers:
 *     FsRtlCancelNotify @ 0x14024CCD0 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1402581E0 (CcMdlWriteComplete2.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     CcGetVacbMiss @ 0x1402858A0 (CcGetVacbMiss.c)
 *     CcAcquireByteRangeForWrite @ 0x140289260 (CcAcquireByteRangeForWrite.c)
 *     CcAsyncReadPrefetch @ 0x14029C970 (CcAsyncReadPrefetch.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     CcCopyBytesToUserBuffer @ 0x14032A7D0 (CcCopyBytesToUserBuffer.c)
 *     CcPerformReadAhead @ 0x14035E3C4 (CcPerformReadAhead.c)
 *     FsRtlNormalizeNtstatus @ 0x140377040 (FsRtlNormalizeNtstatus.c)
 *     CcLockSystemCacheBuffer @ 0x14053A460 (CcLockSystemCacheBuffer.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     RawDispatch @ 0x14074B9B0 (RawDispatch.c)
 *     FsRtlCopyRead @ 0x14092D040 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14092D2C0 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14092DA90 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14092DCF0 (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  bool v1; // zf

  if ( Exception > -1073741676 )
  {
    if ( Exception == -1073741674 || Exception == -1073741654 || Exception == -1073740791 )
      return 0;
    v1 = Exception == -1073740768;
    goto LABEL_6;
  }
  if ( Exception != -1073741676 )
  {
    if ( Exception == 0x80000000 )
      return 1;
    if ( Exception > -2147483645 && Exception != -1073741819 && Exception != -1073741795 )
    {
      if ( Exception <= -1073741755 )
        return 1;
      if ( Exception > -1073741753 )
      {
        v1 = Exception == -1073741684;
LABEL_6:
        if ( !v1 )
          return 1;
      }
    }
  }
  return 0;
}
