/*
 * XREFs of sub_1402AF060 @ 0x1402AF060
 * Callers:
 *     ExReinitializeResourceLite @ 0x14021A5F0 (ExReinitializeResourceLite.c)
 *     sub_14021A7D0 @ 0x14021A7D0 (sub_14021A7D0.c)
 *     ExDeleteResourceLite @ 0x14028A7C0 (ExDeleteResourceLite.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1402AEF40 (ExReleaseResourceAndLeaveCriticalRegion.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1402AF060(__int64 a1)
{
  return (*(_BYTE *)(a1 + 26) & 1) != 0 || dword_140C11740;
}
