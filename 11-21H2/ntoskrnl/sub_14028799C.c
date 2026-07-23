/*
 * XREFs of sub_14028799C @ 0x14028799C
 * Callers:
 *     sub_1402874E8 @ 0x1402874E8 (sub_1402874E8.c)
 *     sub_1405AC580 @ 0x1405AC580 (sub_1405AC580.c)
 *     MmGetSectionInformation @ 0x14066C980 (MmGetSectionInformation.c)
 *     sub_1406F4878 @ 0x1406F4878 (sub_1406F4878.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407F854C @ 0x1407F854C (sub_1407F854C.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14028799C(__int64 a1)
{
  return !*(_QWORD *)(a1 + 64) && (*(_DWORD *)(a1 + 56) & 0x400) == 0 && (*(_DWORD *)(a1 + 92) & 0x20000) != 0;
}
