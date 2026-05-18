/*
 * XREFs of sub_18009720C @ 0x18009720C
 * Callers:
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

__int64 *__fastcall sub_18009720C(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *i; // rdi
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a1; i != a2; i += 2 )
  {
    v6 = sub_18001246C(v11, i);
    v7 = *v6;
    *v6 = *a3;
    *a3 = v7;
    v8 = v6[1];
    v6[1] = a3[1];
    v9 = v11[1];
    a3[1] = v8;
    if ( v9 )
      sub_180010530(v9);
    a3 += 2;
  }
  return a3;
}
