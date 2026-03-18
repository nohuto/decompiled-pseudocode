/*
 * XREFs of HvpMapEntryReleaseBlockAddress @ 0x1407E8C90
 * Callers:
 *     HvpCopyModifiedData @ 0x1407FED30 (HvpCopyModifiedData.c)
 * Callees:
 *     HvpMapEntryReleaseBinAddress @ 0x140AF62DC (HvpMapEntryReleaseBinAddress.c)
 */

__int64 __fastcall HvpMapEntryReleaseBlockAddress(__int64 a1, __int64 a2, __int64 a3)
{
  return HvpMapEntryReleaseBinAddress(a1, a2, a3);
}
