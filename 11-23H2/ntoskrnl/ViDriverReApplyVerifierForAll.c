/*
 * XREFs of ViDriverReApplyVerifierForAll @ 0x140ACA954
 * Callers:
 *     VfDriverInitSuccess @ 0x140ABD420 (VfDriverInitSuccess.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140ADB180 (VfThunkApplyDriverAddedThunks.c)
 *     VfSuspectDriversIsLoaded @ 0x140B96D64 (VfSuspectDriversIsLoaded.c)
 */

__int64 __fastcall ViDriverReApplyVerifierForAll(__int64 **a1)
{
  unsigned int v1; // esi
  __int64 *i; // rbx

  v1 = 0;
  if ( !(_QWORD)ViVerifierDriverAddedThunkListHead )
    return 0LL;
  for ( i = *a1; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    if ( !RtlEqualUnicodeString(&VfKernelImageName, (PCUNICODE_STRING)(i + 11), 1u) && (i[13] & 0x2000000) != 0 )
    {
      VfDriverLock();
      if ( (unsigned int)VfSuspectDriversIsLoaded(i + 11) )
        v1 = VfThunkApplyDriverAddedThunks(i);
      ViDriversLoadLockOwner = 0LL;
      KeReleaseMutex(&ViDriversLoadLock, 0);
    }
  }
  return v1;
}
