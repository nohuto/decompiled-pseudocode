/*
 * XREFs of VfAddVerifierEntry @ 0x140ADD650
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x1402B0200 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     MmAcquireLoadLock @ 0x1407047C0 (MmAcquireLoadLock.c)
 *     MmReleaseLoadLock @ 0x140704B40 (MmReleaseLoadLock.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D08 (VfInitSystemNoRebootNeeded.c)
 *     VfDriverEnableVerifierForAll @ 0x140ACA638 (VfDriverEnableVerifierForAll.c)
 *     VfDriverLock @ 0x140ACA75C (VfDriverLock.c)
 *     VfSuspectDriversAllocateEntry @ 0x140ADA3B4 (VfSuspectDriversAllocateEntry.c)
 *     MmEnableOrDisableVerifierForDriver @ 0x140AE805C (MmEnableOrDisableVerifierForDriver.c)
 */

__int64 __fastcall VfAddVerifierEntry(const void **String2)
{
  unsigned int v2; // edi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KTHREAD *Lock; // rbx
  __int64 Entry; // rax
  void *v9; // rbx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  DestinationString = 0LL;
  if ( InitSafeBootMode )
  {
    v2 = -1073738742;
LABEL_13:
    if ( ViWdmThunksWithIatIndex )
    {
      ExFreePoolWithTag(ViWdmThunksWithIatIndex, 0x6D4D7644u);
      ViWdmThunksWithIatIndex = 0LL;
    }
    return v2;
  }
  if ( ViWdmThunksWithIatIndex )
    return 3221228555LL;
  VfDriverLock();
  VfInitSystemNoRebootNeeded(v4, 0, v5, v6);
  ViDriversLoadLockOwner = 0LL;
  KeReleaseMutex(&ViDriversLoadLock, 0);
  ViWdmThunksWithIatIndex = (PVOID)ExAllocatePool2(64LL, 24LL * (unsigned int)ViNumberOfWdmThunks, 0x6D4D7644u);
  if ( ViWdmThunksWithIatIndex )
  {
    RtlInitUnicodeString(&DestinationString, L"*");
    if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)String2, 1u) )
    {
      Lock = MmAcquireLoadLock();
      v2 = VfDriverEnableVerifierForAll();
      MmReleaseLoadLock((__int64)Lock);
    }
    else
    {
      Entry = VfSuspectDriversAllocateEntry(String2);
      v9 = (void *)Entry;
      if ( Entry )
      {
        v2 = MmEnableOrDisableVerifierForDriver(Entry, &v11, 1LL);
        if ( !v11 )
          ExFreePoolWithTag(v9, 0);
      }
      else
      {
        v2 = -1073741670;
      }
    }
    goto LABEL_13;
  }
  return (unsigned int)-1073741801;
}
