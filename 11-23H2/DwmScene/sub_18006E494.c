/*
 * XREFs of sub_18006E494 @ 0x18006E494
 * Callers:
 *     sub_18006EBB0 @ 0x18006EBB0 (sub_18006EBB0.c)
 * Callees:
 *     sub_180062D08 @ 0x180062D08 (sub_180062D08.c)
 */

__int64 __fastcall sub_18006E494(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_180062D08((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
