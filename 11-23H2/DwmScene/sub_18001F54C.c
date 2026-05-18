/*
 * XREFs of sub_18001F54C @ 0x18001F54C
 * Callers:
 *     sub_18001F6A8 @ 0x18001F6A8 (sub_18001F6A8.c)
 *     sub_180081A84 @ 0x180081A84 (sub_180081A84.c)
 *     sub_180085C40 @ 0x180085C40 (sub_180085C40.c)
 *     sub_18008F290 @ 0x18008F290 (sub_18008F290.c)
 *     sub_18009FED4 @ 0x18009FED4 (sub_18009FED4.c)
 *     sub_1800DACE4 @ 0x1800DACE4 (sub_1800DACE4.c)
 *     sub_1800DADD4 @ 0x1800DADD4 (sub_1800DADD4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F54C(_QWORD *a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9

  result = 0x3FFFFFFFFFFFFFFFLL;
  v3 = (__int64)(a1[2] - *a1) >> 2;
  v4 = v3 >> 1;
  if ( v3 <= 0x3FFFFFFFFFFFFFFFLL - (v3 >> 1) )
  {
    result = v4 + v3;
    if ( v4 + v3 < a2 )
      return a2;
  }
  return result;
}
