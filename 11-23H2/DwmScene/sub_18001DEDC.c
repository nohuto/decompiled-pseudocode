/*
 * XREFs of sub_18001DEDC @ 0x18001DEDC
 * Callers:
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     sub_18001C9D4 @ 0x18001C9D4 (sub_18001C9D4.c)
 */

__int64 __fastcall sub_18001DEDC(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18001C9D4((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
