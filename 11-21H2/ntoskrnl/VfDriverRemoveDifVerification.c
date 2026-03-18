/*
 * XREFs of VfDriverRemoveDifVerification @ 0x140A89D94
 * Callers:
 *     MmEnableOrDisableVerifierForDriver @ 0x140A812D0 (MmEnableOrDisableVerifierForDriver.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     ExClearPoolFlags @ 0x14063A5D8 (ExClearPoolFlags.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140A89D58 (VfDriverLock.c)
 *     VfSuspectDifRemoveEntry @ 0x140A9A540 (VfSuspectDifRemoveEntry.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140A9AEC0 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 __fastcall VfDriverRemoveDifVerification(__int64 a1)
{
  unsigned int v2; // esi
  const UNICODE_STRING *v3; // rdi
  PVOID *i; // rbx

  v2 = 0;
  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v3 = (const UNICODE_STRING *)(a1 + 24);
  if ( RtlEqualUnicodeString(&VfKernelImageName, v3, 1u) )
  {
    if ( (VfRuleClasses & 8) != 0 || (VfRuleClasses & 1) != 0 )
      ExClearPoolFlags(8);
    VfSuspectDifRemoveEntry(v3);
    KernelVerifier = 0;
  }
  else
  {
    for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
    {
      if ( RtlEqualUnicodeString(v3, (PCUNICODE_STRING)(i + 11), 1u) )
      {
        v2 = VfSuspectRemoveDifVolatileVerification(i);
        break;
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  return v2;
}
