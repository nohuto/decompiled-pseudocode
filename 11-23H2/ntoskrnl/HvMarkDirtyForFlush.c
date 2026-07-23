/*
 * XREFs of HvMarkDirtyForFlush @ 0x1402F66EC
 * Callers:
 *     CmpFlushHive @ 0x140753078 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140A20CB0 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x140747300 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}
