/*
 * XREFs of sub_14029C568 @ 0x14029C568
 * Callers:
 *     sub_14029BAD0 @ 0x14029BAD0 (sub_14029BAD0.c)
 *     sub_1403428E0 @ 0x1403428E0 (sub_1403428E0.c)
 * Callees:
 *     sub_14029C5B0 @ 0x14029C5B0 (sub_14029C5B0.c)
 *     sub_140584F10 @ 0x140584F10 (sub_140584F10.c)
 */

__int64 __fastcall sub_14029C568(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  bool v7; // zf
  __int64 v8; // r8
  __int64 result; // rax

  v7 = a3 == 0;
  v8 = 1LL;
  if ( v7 )
    v8 = a3;
  sub_14029C5B0(a1, 0LL, v8);
  result = (unsigned int)dword_140D06994;
  if ( (dword_140D06994 & 1) != 0 )
    return sub_140584F10(a1, *(_QWORD *)(*(_QWORD *)(a4 + 8) + 8LL * a5 + 112), a4);
  return result;
}
