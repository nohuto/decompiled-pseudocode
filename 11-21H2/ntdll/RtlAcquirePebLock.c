/*
 * XREFs of RtlAcquirePebLock @ 0x180083270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlAcquirePebLock(void)
{
  return RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
}
