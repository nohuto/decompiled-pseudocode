/*
 * XREFs of sub_180038658 @ 0x180038658
 * Callers:
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 * Callees:
 *     sub_18002E9DC @ 0x18002E9DC (sub_18002E9DC.c)
 */

__int64 __fastcall sub_180038658(_QWORD *a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax

  v1 = (_QWORD *)*a1;
  result = sub_18002E9DC((__int64)a1, (__int64)a1, *(__int64 **)(*a1 + 8LL));
  v1[1] = v1;
  *v1 = v1;
  v1[2] = v1;
  a1[1] = 0LL;
  return result;
}
