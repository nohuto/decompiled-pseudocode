/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140356C98
 * Callers:
 *     SeTokenCanImpersonate @ 0x140734FA0 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C6FB4 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x1407C70C0 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
