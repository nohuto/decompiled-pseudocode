/*
 * XREFs of sub_180084C14 @ 0x180084C14
 * Callers:
 *     sub_180084A30 @ 0x180084A30 (sub_180084A30.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180015630 @ 0x180015630 (sub_180015630.c)
 *     sub_180054270 @ 0x180054270 (sub_180054270.c)
 */

_QWORD *__fastcall sub_180084C14(__int64 a1, _QWORD *a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *v9; // rax
  _QWORD *result; // rax
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = *(_DWORD *)(*a2 + 88LL);
  sub_180054270((__int64 *)(a1 + 112), (__int64)&v13, &v14);
  v4 = sub_18001246C(&v11, a2);
  v6 = *v4;
  *v4 = *(_QWORD *)(v5 + 40);
  *(_QWORD *)(v5 + 40) = v6;
  v7 = v4[1];
  v4[1] = *(_QWORD *)(v5 + 48);
  v8 = v12;
  *(_QWORD *)(v5 + 48) = v7;
  if ( v8 )
    sub_180010530(v8);
  v9 = (__int64 *)sub_180011D4C(a1 + 96, &v11);
  result = sub_180015630((_QWORD *)(*a2 + 104LL), v9);
  if ( v12 )
    return (_QWORD *)sub_180010530(v12);
  return result;
}
