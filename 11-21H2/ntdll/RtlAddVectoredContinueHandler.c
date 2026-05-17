/*
 * XREFs of RtlAddVectoredContinueHandler @ 0x1800E4D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlAddVectoredContinueHandler(int a1, __int64 a2)
{
  return RtlpAddVectoredHandler(a1, a2, 1u);
}
