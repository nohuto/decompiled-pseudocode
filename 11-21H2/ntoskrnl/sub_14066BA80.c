/*
 * XREFs of sub_14066BA80 @ 0x14066BA80
 * Callers:
 *     FsRtlCreateSectionForDataScan @ 0x1402031E0 (FsRtlCreateSectionForDataScan.c)
 *     sub_140702604 @ 0x140702604 (sub_140702604.c)
 * Callees:
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 */

__int64 __fastcall sub_14066BA80(__int64 a1)
{
  unsigned __int64 v1; // rax

  v1 = sub_140287970(a1);
  return sub_14027A794(v1, 1953261124LL);
}
