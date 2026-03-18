/*
 * XREFs of HvMarkDirtyForFlush @ 0x1402F645C
 * Callers:
 *     CmpFlushHive @ 0x140752E88 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140A20A00 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x140747110 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}
