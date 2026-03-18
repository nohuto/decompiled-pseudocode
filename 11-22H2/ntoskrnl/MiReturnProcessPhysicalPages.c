/*
 * XREFs of MiReturnProcessPhysicalPages @ 0x140A43C90
 * Callers:
 *     MiCommitExistingVad @ 0x140276910 (MiCommitExistingVad.c)
 *     MiFreePhysicalPageChain @ 0x14064A1E0 (MiFreePhysicalPageChain.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReturnProcessPhysicalPages(__int64 a1, __int64 a2)
{
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2032), -a2);
}
