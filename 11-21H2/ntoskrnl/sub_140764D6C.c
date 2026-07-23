/*
 * XREFs of sub_140764D6C @ 0x140764D6C
 * Callers:
 *     sub_140764CE4 @ 0x140764CE4 (sub_140764CE4.c)
 *     sub_140764D24 @ 0x140764D24 (sub_140764D24.c)
 *     sub_140951DE0 @ 0x140951DE0 (sub_140951DE0.c)
 * Callees:
 *     sub_140764D24 @ 0x140764D24 (sub_140764D24.c)
 */

__int64 __fastcall sub_140764D6C(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 result; // rax
  __int64 v6; // rcx

  v3 = *(_QWORD **)(a1 + 8);
  for ( result = 0LL; v3 && (int)result >= 0; result = sub_140764D24(v6, a3) )
  {
    v6 = (__int64)v3;
    v3 = (_QWORD *)*v3;
  }
  return result;
}
