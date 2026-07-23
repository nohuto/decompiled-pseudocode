/*
 * XREFs of KiIsThreadEligibleForPreemptionSwap @ 0x140462346
 * Callers:
 *     KiCheckPreferredHeteroProcessor @ 0x1402C8720 (KiCheckPreferredHeteroProcessor.c)
 *     KiHeteroAttemptPreemptionSwap @ 0x140461BA8 (KiHeteroAttemptPreemptionSwap.c)
 * Callees:
 *     <none>
 */

bool __fastcall KiIsThreadEligibleForPreemptionSwap(_DWORD *a1)
{
  return (KiVelocityFlags & 0x4000) != 0 && !a1[1] && a1[2] == 1 && (unsigned int)(a1[3] - 1) <= 1 && a1[5] == 0;
}
