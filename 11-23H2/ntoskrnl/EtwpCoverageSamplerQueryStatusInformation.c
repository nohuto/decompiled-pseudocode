/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1409F31F4
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3A84 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C31CB8 != 0;
  return result;
}
