/*
 * XREFs of sub_180074358 @ 0x180074358
 * Callers:
 *     sub_180074458 @ 0x180074458 (sub_180074458.c)
 * Callees:
 *     sub_1800743B8 @ 0x1800743B8 (sub_1800743B8.c)
 *     sub_18007454C @ 0x18007454C (sub_18007454C.c)
 */

__int64 __fastcall sub_180074358(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 3 > (unsigned __int64)((__int64)(a1[2] - *a1) >> 3) )
    sub_18007454C();
  result = sub_1800743B8(a2);
  a1[1] = result;
  return result;
}
