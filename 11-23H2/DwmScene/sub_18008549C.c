/*
 * XREFs of sub_18008549C @ 0x18008549C
 * Callers:
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_180084F30 @ 0x180084F30 (sub_180084F30.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18008549C(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  sub_1800124F8((__int64 *)(a1 + 112), a2);
  *(_DWORD *)(a1 + 104) = *(_DWORD *)(*a2 + 80LL) - 1;
  result = sub_180084F30(a1);
  v5 = a2[1];
  if ( v5 )
    return sub_180010530(v5);
  return result;
}
