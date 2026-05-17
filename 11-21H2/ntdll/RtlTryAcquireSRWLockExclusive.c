/*
 * XREFs of RtlTryAcquireSRWLockExclusive @ 0x18006D4B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall RtlTryAcquireSRWLockExclusive(volatile signed __int32 *a1)
{
  return !_interlockedbittestandset64(a1, 0LL);
}
