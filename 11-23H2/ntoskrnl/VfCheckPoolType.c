/*
 * XREFs of VfCheckPoolType @ 0x140AC3920
 * Callers:
 *     VfCheckNxPoolType @ 0x1405CE3B0 (VfCheckNxPoolType.c)
 *     VerifierExAllocatePoolWithTag @ 0x140ABFFD0 (VerifierExAllocatePoolWithTag.c)
 *     VerifierExAllocatePool @ 0x140AD08F0 (VerifierExAllocatePool.c)
 *     VerifierExAllocatePool2 @ 0x140AD0A10 (VerifierExAllocatePool2.c)
 *     VerifierExAllocatePoolEx @ 0x140AD0C70 (VerifierExAllocatePoolEx.c)
 *     VerifierExAllocatePoolWithQuota @ 0x140AD0D00 (VerifierExAllocatePoolWithQuota.c)
 *     VerifierExAllocatePoolWithQuotaTag @ 0x140AD0DD0 (VerifierExAllocatePoolWithQuotaTag.c)
 *     VerifierExAllocatePoolWithTagPriority @ 0x140AD0EB0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VerifierExAllocateCacheAwareRundownProtection @ 0x140ADD210 (VerifierExAllocateCacheAwareRundownProtection.c)
 *     VerifierExInitializeLookasideListEx @ 0x140AE1EC0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x140AE1FD0 (VerifierExInitializeNPagedLookasideList.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x1405CFD00 (VfReportIssueWithOptions.c)
 *     ViCiPreprocessOptions @ 0x140AC3A0C (ViCiPreprocessOptions.c)
 *     ViTargetIncrementCounter @ 0x140ACBC0C (ViTargetIncrementCounter.c)
 */

void __fastcall VfCheckPoolType(int a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v4; // rbx
  ULONG_PTR v5; // rdi
  const char *v6; // rdx

  if ( (MmVerifierData & 0x2000000) != 0 && (a1 & 1) == 0 && (a1 & 0x200) == 0 )
  {
    v4 = a3;
    v5 = a1;
    v6 = "The caller 0x%p specified an executable pool type 0x%x.";
    if ( a3 )
      v6 = "The caller 0x%p specified an executable pool type 0x%x (tag 0x%x).";
    ViCiPreprocessOptions(byte_140C0DDA0, v6, 0x2000LL, a2, a1, a3);
    VfReportIssueWithOptions(0xC4u, 0x2000uLL, a2, v5, v4, byte_140C0DDA0);
    if ( (MmVerifierData & 0x1000) != 0 )
      ViTargetIncrementCounter(a2, 280LL);
    _InterlockedIncrement(&dword_140C139B8);
  }
}
