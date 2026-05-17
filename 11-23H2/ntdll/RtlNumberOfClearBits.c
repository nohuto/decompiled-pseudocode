/*
 * XREFs of RtlNumberOfClearBits @ 0x18008CC60
 * Callers:
 *     <none>
 * Callees:
 *     RtlNumberOfSetBits @ 0x180080370 (RtlNumberOfSetBits.c)
 */

__int64 __fastcall RtlNumberOfClearBits(unsigned int *a1)
{
  return *a1 - (unsigned int)RtlNumberOfSetBits(a1);
}
