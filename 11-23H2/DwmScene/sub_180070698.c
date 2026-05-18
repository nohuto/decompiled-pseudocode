/*
 * XREFs of sub_180070698 @ 0x180070698
 * Callers:
 *     sub_180070408 @ 0x180070408 (sub_180070408.c)
 * Callees:
 *     sub_18002EB00 @ 0x18002EB00 (sub_18002EB00.c)
 */

__int64 __fastcall sub_180070698(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002EB00((__int64)a1, (__int64)a1, *(_QWORD *)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
