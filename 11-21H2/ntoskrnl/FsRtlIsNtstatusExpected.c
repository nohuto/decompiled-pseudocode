/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140247160
 * Callers:
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     sub_1402581E0 @ 0x1402581E0 (sub_1402581E0.c)
 *     CcSetFileSizesEx @ 0x1402823F0 (CcSetFileSizesEx.c)
 *     sub_1402858A0 @ 0x1402858A0 (sub_1402858A0.c)
 *     sub_140289260 @ 0x140289260 (sub_140289260.c)
 *     sub_14029C970 @ 0x14029C970 (sub_14029C970.c)
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 *     CcInitializeCacheMapEx @ 0x140310F10 (CcInitializeCacheMapEx.c)
 *     sub_14032A7D0 @ 0x14032A7D0 (sub_14032A7D0.c)
 *     sub_14035E3C4 @ 0x14035E3C4 (sub_14035E3C4.c)
 *     FsRtlNormalizeNtstatus @ 0x140377040 (FsRtlNormalizeNtstatus.c)
 *     sub_14053A460 @ 0x14053A460 (sub_14053A460.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     sub_14074B9B0 @ 0x14074B9B0 (sub_14074B9B0.c)
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
