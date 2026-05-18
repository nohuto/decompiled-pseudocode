/*
 * XREFs of sub_180040B40 @ 0x180040B40
 * Callers:
 *     sub_180040BEC @ 0x180040BEC (sub_180040BEC.c)
 *     sub_1800705E8 @ 0x1800705E8 (sub_1800705E8.c)
 * Callees:
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

_QWORD *__fastcall sub_180040B40(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rcx

  sub_180043668(a1);
  v4 = *(_QWORD **)(a1 + 32);
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v4 != *(_QWORD **)(a1 + 40) )
  {
    v5 = v4[1];
    if ( v5 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v5 = v4[1];
    }
    *a2 = *v4;
    a2[1] = v5;
  }
  return a2;
}
