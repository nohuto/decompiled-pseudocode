/*
 * XREFs of RtlResetMemoryBlockLookaside @ 0x1800F6F80
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlInitializeSListHead @ 0x180070F90 (RtlInitializeSListHead.c)
 *     RtlResetMemoryZone @ 0x1800F70F0 (RtlResetMemoryZone.c)
 */

NTSTATUS __cdecl RtlResetMemoryBlockLookaside(PVOID MemoryBlockLookaside)
{
  unsigned int i; // ebx
  NTSTATUS v3; // ebx

  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  for ( i = 0; i < *((_DWORD *)MemoryBlockLookaside + 10); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)MemoryBlockLookaside + 2 * i + 3);
  v3 = RtlResetMemoryZone(*((PVOID *)MemoryBlockLookaside + 2));
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)MemoryBlockLookaside);
  return v3;
}
