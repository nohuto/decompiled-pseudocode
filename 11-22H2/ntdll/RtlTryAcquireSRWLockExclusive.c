/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x180075D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlTryAcquireSRWLockExclusive(PRTL_SRWLOCK SRWLock)
{
  return !_interlockedbittestandset64((volatile signed __int32 *)SRWLock, 0LL);
}
