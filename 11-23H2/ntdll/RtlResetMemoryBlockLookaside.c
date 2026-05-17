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

__int64 __fastcall RtlResetMemoryBlockLookaside(__int64 a1)
{
  unsigned int i; // ebx
  unsigned int v3; // ebx

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)a1);
  for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
    RtlInitializeSListHead((PSLIST_HEADER)(32LL * i + a1 + 48));
  v3 = RtlResetMemoryZone(*(_QWORD *)(a1 + 16));
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)a1);
  return v3;
}
