/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140356E38
 * Callers:
 *     SeTokenCanImpersonate @ 0x140735190 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x1407C7284 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x1407C7390 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
