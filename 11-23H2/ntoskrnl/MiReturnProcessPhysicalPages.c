/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140A43C20
 * Callers:
 *     MiCommitExistingVad @ 0x140276A30 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x14064A170 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
