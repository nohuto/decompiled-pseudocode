/*
 * XREFs of RtlReleasePebLock @ 0x18007D9F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlReleasePebLock()
{
  return RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
}
