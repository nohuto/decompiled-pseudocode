/*
 * XREFs of sub_18001E924 @ 0x18001E924
 * Callers:
 *     sub_18001F1F8 @ 0x18001F1F8 (sub_18001F1F8.c)
 * Callees:
 *     sub_18001E984 @ 0x18001E984 (sub_18001E984.c)
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 */

__int64 __fastcall sub_18001E924(_QWORD *a1, void *a2, __int64 a3)
{
  __int64 result; // rax

  if ( (a3 - (__int64)a2) >> 2 > (unsigned __int64)((__int64)(a1[2] - *a1) >> 2) )
    sub_18001F6A8();
  result = sub_18001E984(a2);
  a1[1] = result;
  return result;
}
