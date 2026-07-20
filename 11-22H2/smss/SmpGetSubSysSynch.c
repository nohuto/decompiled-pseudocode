/*
 * XREFs of SmpGetSubSysSynch @ 0x14001AEBC
 * Callers:
 *     SmpCreateKnownSubSys @ 0x1400039F8 (SmpCreateKnownSubSys.c)
 *     SmpWaitForStatusChange @ 0x14001AFA4 (SmpWaitForStatusChange.c)
 * Callees:
 *     <none>
 */

_DWORD *SmpGetSubSysSynch()
{
  _DWORD *v0; // rbx
  __int64 v1; // rdx
  PVOID Heap; // rax

  v0 = 0LL;
  if ( SmpSubSysSynchCache )
  {
    RtlAcquireSRWLockExclusive(&SmpSubSysSynchLock);
    if ( SmpSubSysSynchCache )
    {
      --SmpSubSysSynchCacheSize;
      v0 = (_DWORD *)SmpSubSysSynchCache;
      SmpSubSysSynchCache = *(_QWORD *)SmpSubSysSynchCache;
    }
    RtlReleaseSRWLockExclusive(&SmpSubSysSynchLock, v1);
    if ( v0 )
      goto LABEL_8;
  }
  Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag + 0x80000, 0x10uLL);
  v0 = Heap;
  if ( Heap )
  {
    if ( NtCreateEvent((PHANDLE)Heap + 1, 0x100002u, 0LL, NotificationEvent, 0) < 0 )
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v0);
      return 0LL;
    }
LABEL_8:
    *v0 = 0;
  }
  return v0;
}
