/*
 * XREFs of sub_14064A2A8 @ 0x14064A2A8
 * Callers:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 * Callees:
 *     sub_140205370 @ 0x140205370 (sub_140205370.c)
 *     sub_140376790 @ 0x140376790 (sub_140376790.c)
 */

__int64 __fastcall sub_14064A2A8(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 result; // rax

  v1 = a1 + 8;
  for ( i = *(_QWORD *)(a1 + 8); i != v1; i = *(_QWORD *)i )
  {
    *(_DWORD *)(i + 56) |= 4u;
    sub_140205370(a1, i, 0, 1);
    result = sub_140376790(i);
  }
  return result;
}
