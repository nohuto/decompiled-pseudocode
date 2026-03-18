/*
 * XREFs of KiReleaseParkSummaryLockExclusive @ 0x1404110B0
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057E250 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiReleaseParkSummaryLockExclusive(__int64 a1)
{
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
}
