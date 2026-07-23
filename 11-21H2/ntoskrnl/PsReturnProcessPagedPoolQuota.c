/*
 * XREFs of PsReturnProcessPagedPoolQuota @ 0x1402331E0
 * Callers:
 *     sub_14024CCD0 @ 0x14024CCD0 (sub_14024CCD0.c)
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_1406A6AF8 @ 0x1406A6AF8 (sub_1406A6AF8.c)
 *     FsRtlNotifyFilterReportChange @ 0x1406AA510 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x1406AB670 (FsRtlNotifyFilterReportChangeLiteEx.c)
 *     sub_1406ABC90 @ 0x1406ABC90 (sub_1406ABC90.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     sub_1406AC298 @ 0x1406AC298 (sub_1406AC298.c)
 *     sub_1406AC2DC @ 0x1406AC2DC (sub_1406AC2DC.c)
 *     sub_1407A7378 @ 0x1407A7378 (sub_1407A7378.c)
 *     sub_1407BC8F0 @ 0x1407BC8F0 (sub_1407BC8F0.c)
 *     sub_1407E0CE4 @ 0x1407E0CE4 (sub_1407E0CE4.c)
 *     sub_140977F8C @ 0x140977F8C (sub_140977F8C.c)
 * Callees:
 *     sub_1403493B0 @ 0x1403493B0 (sub_1403493B0.c)
 */

__int64 __fastcall PsReturnProcessPagedPoolQuota(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return sub_1403493B0(*(_QWORD *)(a1 + 1384), a1, 1LL, a2);
  return result;
}
