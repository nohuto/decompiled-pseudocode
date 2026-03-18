/*
 * XREFs of HUBDSM_ComputingLPMTimeoutValuesInUnconfigured @ 0x1C00256D0
 * Callers:
 *     <none>
 * Callees:
 *     HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice @ 0x1C003077C (HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice.c)
 */

__int64 __fastcall HUBDSM_ComputingLPMTimeoutValuesInUnconfigured(__int64 a1)
{
  return HUBMISC_CheckIfU2ShouldBeSetForEnumeratedDevice(*(_QWORD *)(a1 + 960));
}
