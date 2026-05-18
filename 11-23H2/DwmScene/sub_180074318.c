/*
 * XREFs of sub_180074318 @ 0x180074318
 * Callers:
 *     sub_18007411C @ 0x18007411C (sub_18007411C.c)
 *     sub_180074220 @ 0x180074220 (sub_180074220.c)
 *     sub_1800A28EC @ 0x1800A28EC (sub_1800A28EC.c)
 *     sub_1800A305C @ 0x1800A305C (sub_1800A305C.c)
 * Callees:
 *     sub_18002AE7C @ 0x18002AE7C (sub_18002AE7C.c)
 */

__int64 __fastcall sub_180074318(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002AE7C((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
