/*
 * XREFs of KeQueryNodeMaximumProcessorCount @ 0x1403DD630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

USHORT __stdcall KeQueryNodeMaximumProcessorCount(USHORT NodeNumber)
{
  if ( NodeNumber >= (unsigned __int16)word_140D05000 )
    return 0;
  _mm_lfence();
  return *(_WORD *)(qword_140D31700[NodeNumber] + 8);
}
