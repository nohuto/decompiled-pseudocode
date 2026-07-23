/*
 * XREFs of MmApplyVerifierToRunningImage @ 0x140AE7FA0
 * Callers:
 *     VfThunkApplyDriverAddedThunks @ 0x140ADB180 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkApplyPristineCurrentSession @ 0x140ADB5AC (ViThunkApplyPristineCurrentSession.c)
 *     ViThunkApplyWdmThunksCurrentSession @ 0x140ADB6DC (ViThunkApplyWdmThunksCurrentSession.c)
 * Callees:
 *     MiIsImportOptimizationEnabled @ 0x14020EBB8 (MiIsImportOptimizationEnabled.c)
 *     MiLookupDataTableEntry @ 0x1402136A0 (MiLookupDataTableEntry.c)
 *     MmIsVerifierApplicableToImage @ 0x14061C59C (MmIsVerifierApplicableToImage.c)
 *     MiReapplyImportOptimizationForDriverVerifier @ 0x140640E38 (MiReapplyImportOptimizationForDriverVerifier.c)
 *     MmHasImageBeenImportOptimized @ 0x14069707C (MmHasImageBeenImportOptimized.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     MmReplaceImportEntriesForVerifier @ 0x140A2D8FC (MmReplaceImportEntriesForVerifier.c)
 */

__int64 __fastcall MmApplyVerifierToRunningImage(_QWORD *a1, int *a2, unsigned int a3)
{
  struct _KTHREAD *Lock; // rsi
  int IsVerifierApplicableToImage; // ebx
  ULONG_PTR v8; // rcx
  int v9; // eax

  Lock = 0LL;
  if ( (MiFlags & 0x30) == 0x10 )
  {
    Lock = MmAcquireLoadLock();
    a1 = MiLookupDataTableEntry(a1[6], 1);
  }
  IsVerifierApplicableToImage = MmIsVerifierApplicableToImage((__int64)a1);
  if ( IsVerifierApplicableToImage >= 0 )
  {
    if ( MiIsImportOptimizationEnabled() && (unsigned int)MmHasImageBeenImportOptimized() )
      v9 = MiReapplyImportOptimizationForDriverVerifier(v8, a2, a3);
    else
      v9 = MmReplaceImportEntriesForVerifier((__int64)a1, a2, a3);
    IsVerifierApplicableToImage = v9;
  }
  if ( Lock )
    MmReleaseLoadLock((__int64)Lock);
  return (unsigned int)IsVerifierApplicableToImage;
}
