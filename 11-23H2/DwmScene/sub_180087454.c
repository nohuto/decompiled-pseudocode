/*
 * XREFs of sub_180087454 @ 0x180087454
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 *     sub_180086BE0 @ 0x180086BE0 (sub_180086BE0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011DD0 @ 0x180011DD0 (sub_180011DD0.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001F84C @ 0x18001F84C (sub_18001F84C.c)
 *     sub_18004FECC @ 0x18004FECC (sub_18004FECC.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 *     sub_1800877F4 @ 0x1800877F4 (sub_1800877F4.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180087454(__int64 a1, _QWORD *a2, unsigned int a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  __int64 v12; // [rsp+28h] [rbp-48h] BYREF
  __int64 v13; // [rsp+30h] [rbp-40h]
  __int64 v14; // [rsp+38h] [rbp-38h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h]
  _QWORD v16[5]; // [rsp+48h] [rbp-28h] BYREF

  v6 = (_QWORD *)(a1 + 16 * ((int)a3 + 24LL));
  if ( *v6 )
  {
    sub_18001246C(a2, v6);
  }
  else if ( sub_18001F84C(a1 + 32 * ((int)a3 + 6LL)) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v7 = *(_QWORD *)sub_180060D9C(*(_QWORD *)(a1 + 16), &v14);
    v9 = sub_180017648(v16, v8);
    sub_18004FECC(v7, &v12, (__int64)v9);
    if ( v15 )
      sub_180010530(v15);
    if ( sub_180011DD0(&v12) )
    {
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( v13 )
        sub_180010530(v13);
    }
    else
    {
      v10 = sub_18001246C(&v14, &v12);
      sub_1800877F4(a1, a3, v10);
      *a2 = v12;
      a2[1] = v13;
    }
  }
  return a2;
}
