/*
 * XREFs of sub_18003B728 @ 0x18003B728
 * Callers:
 *     sub_18003D504 @ 0x18003D504 (sub_18003D504.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002E5A8 @ 0x18002E5A8 (sub_18002E5A8.c)
 *     sub_18003D4D0 @ 0x18003D4D0 (sub_18003D4D0.c)
 *     sub_18003D8B4 @ 0x18003D8B4 (sub_18003D8B4.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18003B728(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_18003E370();
  if ( (__int64)(*(_QWORD *)(a1 + 40) - *(_QWORD *)(a1 + 32)) >> 4 )
  {
    sub_18001246C(&v6, (_QWORD *)(*(_QWORD *)(a1 + 40) - 16LL));
    sub_18003D4D0(v6, a2);
    sub_18003D8B4(*a2, &v6);
    if ( v7 )
      sub_180010530(v7);
  }
  v4 = *(_QWORD **)(a1 + 40);
  if ( v4 == *(_QWORD **)(a1 + 48) )
    return sub_18002E5A8((_QWORD *)(a1 + 32), *(char **)(a1 + 40), a2);
  result = sub_18001246C(v4, a2);
  *(_QWORD *)(a1 + 40) += 16LL;
  return result;
}
