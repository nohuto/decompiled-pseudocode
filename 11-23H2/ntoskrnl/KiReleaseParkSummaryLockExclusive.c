/*
 * XREFs of KiReleaseParkSummaryLockExclusive @ 0x1404112BC
 * Callers:
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140289750 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

void __fastcall KiReleaseParkSummaryLockExclusive(__int64 a1)
{
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
}
