/*
 * XREFs of RtlGetUnloadEventTraceEx @ 0x1800DA7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlGetUnloadEventTraceEx(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *result; // rax

  *a1 = &RtlpUnloadEventTraceExSize;
  *a2 = &RtlpUnloadEventTraceExNumber;
  result = &RtlpUnloadEventTraceEx;
  *a3 = &RtlpUnloadEventTraceEx;
  return result;
}
