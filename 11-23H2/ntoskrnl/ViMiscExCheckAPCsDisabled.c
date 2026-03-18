/*
 * XREFs of ViMiscExCheckAPCsDisabled @ 0x140AE15A4
 * Callers:
 *     VfMiscExAcquireFastMutexUnsafe_Entry @ 0x140ADFAA0 (VfMiscExAcquireFastMutexUnsafe_Entry.c)
 *     VfMiscExReleaseFastMutexUnsafe_Entry @ 0x140ADFC40 (VfMiscExReleaseFastMutexUnsafe_Entry.c)
 *     VfMiscExReleaseFastMutex_Entry @ 0x140ADFC60 (VfMiscExReleaseFastMutex_Entry.c)
 *     VfMiscExfAcquirePushLockExclusive_Entry @ 0x140ADFCA0 (VfMiscExfAcquirePushLockExclusive_Entry.c)
 *     VfMiscExfReleasePushLockShared_Entry @ 0x140ADFCC0 (VfMiscExfReleasePushLockShared_Entry.c)
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACD2B4 (VerifierBugCheckIfAppropriate.c)
 */

unsigned __int8 __fastcall ViMiscExCheckAPCsDisabled(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 1
    && (KeGetCurrentThread()->MiscFlags & 0x400) == 0
    && !KeGetCurrentThread()->WaitBlock[3].SpareLong )
  {
    VerifierBugCheckIfAppropriate(
      0xC4u,
      (unsigned int)BugCheckParameter1,
      CurrentIrql,
      KeGetCurrentThread()->CombinedApcDisable,
      a2);
  }
  return CurrentIrql;
}
