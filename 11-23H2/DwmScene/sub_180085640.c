/*
 * XREFs of sub_180085640 @ 0x180085640
 * Callers:
 *     sub_180085608 @ 0x180085608 (sub_180085608.c)
 * Callees:
 *     sub_18008472C @ 0x18008472C (sub_18008472C.c)
 */

float *__fastcall sub_180085640(__int64 a1, __int64 a2, float a3)
{
  float *result; // rax

  result = (float *)sub_18008472C(a1, a2, 2LL);
  if ( *result != a3 )
  {
    *result = a3;
    ++*(_DWORD *)(a1 + 80);
  }
  return result;
}
