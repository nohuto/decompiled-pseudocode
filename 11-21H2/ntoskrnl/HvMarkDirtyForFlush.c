/*
 * XREFs of HvMarkDirtyForFlush @ 0x14020AEB4
 * Callers:
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x14091D3F0 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x14071F430 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}
