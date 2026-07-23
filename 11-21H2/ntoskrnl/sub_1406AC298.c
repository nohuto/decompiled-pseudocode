/*
 * XREFs of sub_1406AC298 @ 0x1406AC298
 * Callers:
 *     sub_1406A62C8 @ 0x1406A62C8 (sub_1406A62C8.c)
 *     sub_1406A6C04 @ 0x1406A6C04 (sub_1406A6C04.c)
 *     sub_1406AC130 @ 0x1406AC130 (sub_1406AC130.c)
 *     sub_1406AC258 @ 0x1406AC258 (sub_1406AC258.c)
 *     sub_1409F9244 @ 0x1409F9244 (sub_1409F9244.c)
 * Callees:
 *     PsReturnProcessPagedPoolQuota @ 0x1402331E0 (PsReturnProcessPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1406AC298(__int64 a1, void *a2, __int64 a3)
{
  ExFreePoolWithTag(a2, 0x6274624Fu);
  if ( a1 )
    PsReturnProcessPagedPoolQuota(a1, a3);
}
