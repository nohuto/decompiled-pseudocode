/*
 * XREFs of RtlEnableEarlyCriticalSectionEventCreation @ 0x1800F39A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _PEB *RtlEnableEarlyCriticalSectionEventCreation()
{
  struct _PEB *result; // rax

  result = NtCurrentPeb();
  result->NtGlobalFlag |= 0x10000000u;
  return result;
}
