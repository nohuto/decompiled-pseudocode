/*
 * XREFs of EtwpCoverageSamplerQueryStatusInformation @ 0x1409F3484
 * Callers:
 *     EtwpQueryCoverageSamplerInformation @ 0x1409F3D14 (EtwpQueryCoverageSamplerInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpCoverageSamplerQueryStatusInformation(bool *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = qword_140C31C58 != 0;
  return result;
}
