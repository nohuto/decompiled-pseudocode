/*
 * XREFs of SmKmFreeMdlForLock @ 0x1405CB500
 * Callers:
 *     SmFpCleanup @ 0x140344318 (SmFpCleanup.c)
 *     SmFpFree @ 0x1404660A8 (SmFpFree.c)
 * Callees:
 *     SmAcquireReleaseCharges @ 0x1403439FC (SmAcquireReleaseCharges.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SmKmFreeMdlForLock(__int64 a1, unsigned int *a2)
{
  SmAcquireReleaseCharges(a1, a2[10], 3, 1);
  ExFreePoolWithTag(a2, 0);
}
