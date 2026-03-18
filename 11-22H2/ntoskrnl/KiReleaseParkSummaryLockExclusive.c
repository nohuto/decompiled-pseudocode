/*
 * XREFs of KiReleaseParkSummaryLockExclusive @ 0x14041072C
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057E2E0 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiReleaseParkSummaryLockExclusive(__int64 a1)
{
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
}
