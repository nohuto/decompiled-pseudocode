/*
 * XREFs of FsRtlNotifyReportChange @ 0x1409301C0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 */

void __fastcall FsRtlNotifyReportChange(
        struct _REAL_NOTIFY_SYNC *a1,
        _LIST_ENTRY *a2,
        STRING *a3,
        _WORD *a4,
        ULONG FilterMatch)
{
  FsRtlNotifyFilterReportChange(a1, a2, a3, a3->Length - *a4, 0LL, 0LL, FilterMatch, 0, 0LL, 0LL);
}
