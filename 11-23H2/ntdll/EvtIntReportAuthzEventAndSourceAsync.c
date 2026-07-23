/*
 * XREFs of EvtIntReportAuthzEventAndSourceAsync @ 0x1801263B0
 * Callers:
 *     <none>
 * Callees:
 *     EvtIntReportEventWorker @ 0x1800531D0 (EvtIntReportEventWorker.c)
 */

_BOOL8 __fastcall EvtIntReportAuthzEventAndSourceAsync(
        __int64 a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned __int16 a4,
        char a5,
        unsigned __int8 *a6,
        unsigned __int16 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  return EvtIntReportEventWorker(a1, 1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
}
