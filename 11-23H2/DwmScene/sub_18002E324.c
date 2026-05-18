/*
 * XREFs of sub_18002E324 @ 0x18002E324
 * Callers:
 *     sub_180033188 @ 0x180033188 (sub_180033188.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800317B8 @ 0x1800317B8 (sub_1800317B8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002E324(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( *(_QWORD *)(a1 + 8) == 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("list too long");
  v9 = a1;
  v10 = 0LL;
  v6 = (_QWORD *)sub_18001090C(0x20uLL);
  sub_18001246C(v6 + 2, a3);
  ++*(_QWORD *)(a1 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  *v6 = a2;
  v6[1] = v7;
  v10 = 0LL;
  *(_QWORD *)(a2 + 8) = v6;
  *v7 = v6;
  sub_1800317B8(&v9);
  return v6;
}
