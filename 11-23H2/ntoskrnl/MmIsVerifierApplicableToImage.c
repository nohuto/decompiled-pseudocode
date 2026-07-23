/*
 * XREFs of MmIsVerifierApplicableToImage @ 0x14061C59C
 * Callers:
 *     MiReapplyImportOptimizationWorker @ 0x1406413D0 (MiReapplyImportOptimizationWorker.c)
 *     VfDriverApplyDifVerification @ 0x140ACA2F8 (VfDriverApplyDifVerification.c)
 *     VfDriverEnableVerifier @ 0x140ACA4B8 (VfDriverEnableVerifier.c)
 *     MmApplyVerifierToRunningImage @ 0x140AE7FA0 (MmApplyVerifierToRunningImage.c)
 * Callees:
 *     KeIsNmiCallbackRegisteredForDriver @ 0x14056CBC0 (KeIsNmiCallbackRegisteredForDriver.c)
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
