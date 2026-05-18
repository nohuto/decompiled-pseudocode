/*
 * XREFs of sub_180016C68 @ 0x180016C68
 * Callers:
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 * Callees:
 *     sub_180016DC4 @ 0x180016DC4 (sub_180016DC4.c)
 *     sub_18001B628 @ 0x18001B628 (sub_18001B628.c)
 */

__int64 __fastcall sub_180016C68(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 2 > (unsigned __int64)((__int64)(a1[2] - *a1) >> 2) )
    sub_18001B628();
  result = sub_180016DC4(a2);
  a1[1] = result;
  return result;
}
