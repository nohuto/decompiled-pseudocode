/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x18006D4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL);
}
