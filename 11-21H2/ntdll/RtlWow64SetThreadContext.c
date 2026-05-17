/*
 * XREFs of RtlWow64SetThreadContext @ 0x1800E7A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlWow64SetThreadContext()
{
  return NtSetInformationThread();
}
