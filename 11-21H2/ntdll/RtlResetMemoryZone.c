/*
 * XREFs of RtlResetMemoryZone @ 0x1800F5E60
 * Callers:
 *     RtlResetMemoryBlockLookaside @ 0x1800F5E00 (RtlResetMemoryBlockLookaside.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 */

__int64 __fastcall RtlResetMemoryZone(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 *i; // rdx

  RtlAcquireSRWLockExclusive(a1 + 32, a2, a3, a4);
  for ( i = *(__int64 **)(a1 + 48); i != (__int64 *)a1; i = (__int64 *)*i )
    _InterlockedExchange64(i + 2, (__int64)(i + 4));
  _InterlockedExchange64((volatile __int64 *)(a1 + 16), a1 + 56);
  RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 32));
  return 0LL;
}
