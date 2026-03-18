/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x1409221DC
 * Callers:
 *     HvpCopyModifiedData @ 0x14091AAA0 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140AB44A4 (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
