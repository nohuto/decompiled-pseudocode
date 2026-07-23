/*
 * XREFs of RtlReleasePebLock @ 0x180081AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS RtlReleasePebLock(void)
{
  return RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
}
