/*
 * XREFs of sub_180093378 @ 0x180093378
 * Callers:
 *     sub_180093340 @ 0x180093340 (sub_180093340.c)
 * Callees:
 *     sub_180091F90 @ 0x180091F90 (sub_180091F90.c)
 */

float *__fastcall sub_180093378(__int64 a1, __int64 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_180091F90(a1, a2, 2LL);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
