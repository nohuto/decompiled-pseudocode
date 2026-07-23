/*
 * XREFs of RtlLockMemoryBlockLookaside @ 0x1800521D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpRegisterLockedMemoryBlockLookaside @ 0x1800520E0 (RtlpRegisterLockedMemoryBlockLookaside.c)
 *     RtlLockMemoryZone @ 0x180052250 (RtlLockMemoryZone.c)
 *     RtlUnlockMemoryZone @ 0x1800523F0 (RtlUnlockMemoryZone.c)
 */

NTSTATUS __cdecl RtlLockMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  NTSTATUS locked; // edi
  void *v4; // rcx

  locked = 0;
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  if ( *((_DWORD *)MemoryBlockLookaside + 11) )
    goto LABEL_5;
  locked = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
  if ( locked >= 0 )
  {
    locked = RtlLockMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
    if ( locked < 0 )
    {
      v4 = (void *)*((_QWORD *)MemoryBlockLookaside + 1);
    }
    else
    {
      locked = RtlpRegisterLockedMemoryBlockLookaside();
      if ( locked >= 0 )
      {
LABEL_5:
        ++*((_DWORD *)MemoryBlockLookaside + 11);
        goto LABEL_6;
      }
      RtlUnlockMemoryZone(*((PVOID *)MemoryBlockLookaside + 1));
      v4 = (void *)*((_QWORD *)MemoryBlockLookaside + 2);
    }
    RtlUnlockMemoryZone(v4);
  }
LABEL_6:
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return locked;
}
