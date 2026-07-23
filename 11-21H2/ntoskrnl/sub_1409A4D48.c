/*
 * XREFs of sub_1409A4D48 @ 0x1409A4D48
 * Callers:
 *     sub_1409A3B80 @ 0x1409A3B80 (sub_1409A3B80.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall sub_1409A4D48(_QWORD *a1)
{
  *a1 = 0LL;
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
}
