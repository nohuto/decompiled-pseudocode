/*
 * XREFs of IopReleaseFileObjectLock @ 0x1402314E0
 * Callers:
 *     IopValidateAndGetWriteParameters @ 0x140223D30 (IopValidateAndGetWriteParameters.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x140224220 (IopAllocateAndPopulateWriteIrp.c)
 *     NtSetInformationFile @ 0x1402A6BF0 (NtSetInformationFile.c)
 *     IopFlushBuffersFile @ 0x140686004 (IopFlushBuffersFile.c)
 *     NtQueryVolumeInformationFile @ 0x140686AF0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x14069C1D0 (IopGetSetSecurityObject.c)
 *     IopWriteFile @ 0x1406B6DD0 (IopWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1406E3E90 (IopSynchronousServiceTail.c)
 *     IopXxxControlFile @ 0x1406E54E0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140725070 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140730000 (IopCloseFile.c)
 *     IopReadFile @ 0x14074C1C0 (IopReadFile.c)
 *     IopQueryXxxInformation @ 0x14075D28C (IopQueryXxxInformation.c)
 *     NtReadFileScatter @ 0x1407E7070 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x1407E82F0 (NtWriteFileGather.c)
 *     IoSetInformation @ 0x1408831F0 (IoSetInformation.c)
 *     IopAllocateIrpCleanup @ 0x140944144 (IopAllocateIrpCleanup.c)
 *     IopExceptionCleanupEx @ 0x140944978 (IopExceptionCleanupEx.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     KeSetEventBoostPriorityEx @ 0x1402BBFD0 (KeSetEventBoostPriorityEx.c)
 */

void __fastcall IopReleaseFileObjectLock(volatile __int32 *Object)
{
  int Priority; // [rsp+40h] [rbp+8h] BYREF
  char v3; // [rsp+48h] [rbp+10h] BYREF

  Priority = KeGetCurrentThread()->Priority;
  _InterlockedExchange(Object + 29, 0);
  if ( *((_DWORD *)Object + 28) )
    KeSetEventBoostPriorityEx(
      (_DWORD)Object + 128,
      (unsigned int)&v3,
      (unsigned int)&Priority,
      (_DWORD)Object + 128,
      0,
      1);
  KeAbPostRelease((ULONG_PTR)(Object + 32));
  ObfDereferenceObject((PVOID)Object);
  KeLeaveCriticalRegion();
}
