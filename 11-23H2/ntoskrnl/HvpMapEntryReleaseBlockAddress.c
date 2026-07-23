/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x1407E89E0
 * Callers:
 *     HvpCopyModifiedData @ 0x1407FE950 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140AF52DC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
