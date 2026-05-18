/*
 * XREFs of sub_180046A58 @ 0x180046A58
 * Callers:
 *     sub_18007DEA0 @ 0x18007DEA0 (sub_18007DEA0.c)
 *     sub_18007FC90 @ 0x18007FC90 (sub_18007FC90.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800613A4 @ 0x1800613A4 (sub_1800613A4.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180046A58(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  sub_18004F718(a1, &v7, 8LL);
  sub_18008214C(v7, &unk_1801D7CE8, 7LL, 256LL);
  sub_180082B30(v7);
  v3 = sub_18001246C(v9, &v7);
  result = sub_1800613A4(v4, v3);
  if ( v8 )
    result = sub_180010530(v8);
  v6 = *(_QWORD *)(a2 + 8);
  if ( v6 )
    return sub_180010530(v6);
  return result;
}
