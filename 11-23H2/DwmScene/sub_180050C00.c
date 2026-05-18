/*
 * XREFs of sub_180050C00 @ 0x180050C00
 * Callers:
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 * Callees:
 *     sub_18004D9DC @ 0x18004D9DC (sub_18004D9DC.c)
 */

__int64 __fastcall sub_180050C00(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18004D9DC((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
