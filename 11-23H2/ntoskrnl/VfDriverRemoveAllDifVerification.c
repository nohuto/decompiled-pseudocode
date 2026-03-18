/*
 * XREFs of VfDriverRemoveAllDifVerification @ 0x1405CEEA0
 * Callers:
 *     VfDriverProcessUnload @ 0x1405CEE20 (VfDriverProcessUnload.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D680 (ExAcquireResourceSharedLite.c)
 *     RtlEqualUnicodeString @ 0x1406DA2F0 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140ACA76C (VfDriverLock.c)
 *     VfDriverUnlock @ 0x140ACA890 (VfDriverUnlock.c)
 *     VfSuspectRemoveDifVolatileVerification @ 0x140ADACA4 (VfSuspectRemoveDifVolatileVerification.c)
 */

__int64 VfDriverRemoveAllDifVerification()
{
  __int64 i; // rdi
  PVOID *j; // rbx

  VfDriverLock();
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  for ( i = VfSuspectDriversList; (__int64 *)i != &VfSuspectDriversList; i = *(_QWORD *)i )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      if ( ((_DWORD)j[13] & 0x2000000) != 0
        && RtlEqualUnicodeString((PCUNICODE_STRING)(i + 24), (PCUNICODE_STRING)(j + 11), 1u) )
      {
        VfSuspectRemoveDifVolatileVerification(j);
      }
    }
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return VfDriverUnlock();
}
