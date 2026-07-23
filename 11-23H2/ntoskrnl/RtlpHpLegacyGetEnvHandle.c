/*
 * XREFs of RtlpHpLegacyGetEnvHandle @ 0x140363010
 * Callers:
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall RtlpHpLegacyGetEnvHandle(_OWORD *a1)
{
  _OWORD *result; // rax

  result = a1;
  *a1 = RtlpHpLegacyEnvHandle;
  return result;
}
