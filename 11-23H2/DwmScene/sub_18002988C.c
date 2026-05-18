/*
 * XREFs of sub_18002988C @ 0x18002988C
 * Callers:
 *     sub_180029730 @ 0x180029730 (sub_180029730.c)
 *     sub_1800298CC @ 0x1800298CC (sub_1800298CC.c)
 *     sub_1800A1190 @ 0x1800A1190 (sub_1800A1190.c)
 * Callees:
 *     sub_180027BC8 @ 0x180027BC8 (sub_180027BC8.c)
 */

__int64 __fastcall sub_18002988C(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_180027BC8((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
