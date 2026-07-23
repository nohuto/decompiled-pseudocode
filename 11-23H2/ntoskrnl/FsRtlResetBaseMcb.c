/*
 * XREFs of FsRtlResetBaseMcb @ 0x14036E000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall FsRtlResetBaseMcb(PBASE_MCB Mcb)
{
  Mcb->PairCount = 0;
}
