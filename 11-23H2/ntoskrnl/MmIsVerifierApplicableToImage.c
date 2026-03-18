/*
 * XREFs of MmIsVerifierApplicableToImage @ 0x14061C04C
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x140640E80 (MiReapplyImportOptimizationWorker.c)
 *     VfDriverApplyDifVerification @ 0x140ACA308 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4C8 (VfDriverEnableVerifier.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FB0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     KeIsNmiCallbackRegisteredForDriver @ 0x14056C500 (KeIsNmiCallbackRegisteredForDriver.c)
 */

__int64 __fastcall MmIsVerifierApplicableToImage(__int64 a1)
{
  if ( (MiFlags & 0x8000) != 0 )
    return 0LL;
  else
    return (unsigned int)KeIsNmiCallbackRegisteredForDriver(
                           *(_QWORD *)(a1 + 48),
                           *(_QWORD *)(a1 + 48) + *(unsigned int *)(a1 + 64)) != 0
         ? 0xC0000C0E
         : 0;
}
