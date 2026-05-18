/*
 * XREFs of sub_18006EBB0 @ 0x18006EBB0
 * Callers:
 *     sub_18006ED08 @ 0x18006ED08 (sub_18006ED08.c)
 * Callees:
 *     sub_18001EA34 @ 0x18001EA34 (sub_18001EA34.c)
 *     sub_18006E494 @ 0x18006E494 (sub_18006E494.c)
 */

_QWORD *__fastcall sub_18006EBB0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r15
  _QWORD *v10; // rcx
  bool v11; // cf
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // r11
  __int64 v15; // r14
  _QWORD *v16; // rax
  bool v17; // bl
  _QWORD *v18; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rax
  _QWORD *v22; // rbp
  bool v23; // bl
  _QWORD *v24; // [rsp+20h] [rbp-58h] BYREF
  _QWORD *v25; // [rsp+28h] [rbp-50h]
  _QWORD *v26; // [rsp+30h] [rbp-48h]
  _QWORD *v27; // [rsp+88h] [rbp+10h]
  _QWORD *v28; // [rsp+90h] [rbp+18h]

  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a2[1];
    v7 = a1 + 1;
    v8 = a1[3];
    v9 = (_QWORD *)a1[1];
    v10 = a2 + 2;
    v11 = a2[5] < 8uLL;
    v26 = a2;
    v12 = a2[4];
    v24 = v7;
    v25 = v6;
    if ( !v11 )
      v10 = (_QWORD *)*v10;
    v13 = sub_18001EA34((__int64)v10, v12);
    v15 = 2 * (a1[6] & v13);
    v27 = *(_QWORD **)(v8 + 16 * (a1[6] & v13));
    v16 = *(_QWORD **)(v8 + 16 * (a1[6] & v13) + 8);
    v28 = v16;
    while ( 1 )
    {
      v17 = v14 == v16;
      sub_18006E494(&v24);
      if ( v17 )
        break;
      v14 = v26;
      v16 = v28;
      if ( v26 == a3 )
      {
        if ( v27 == a2 )
LABEL_8:
          *(_QWORD *)(v8 + 8 * v15) = v14;
        goto LABEL_9;
      }
    }
    if ( v27 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v15) = v9;
      v6 = v9;
    }
    for ( *(_QWORD *)(v8 + 8 * v15 + 8) = v6; ; *(_QWORD *)(v8 + 8 * v15 + 8) = v9 )
    {
      v14 = v26;
      if ( v26 == a3 )
        break;
      v20 = v26 + 2;
      if ( v26[5] >= 8uLL )
        v20 = (_QWORD *)*v20;
      v21 = sub_18001EA34((__int64)v20, v26[4]);
      v15 = 2 * (a1[6] & v21);
      v22 = *(_QWORD **)(v8 + 16 * (a1[6] & v21) + 8);
      while ( 1 )
      {
        v23 = v14 == v22;
        sub_18006E494(&v24);
        if ( v23 )
          break;
        v14 = v26;
        if ( v26 == a3 )
          goto LABEL_8;
      }
      *(_QWORD *)(v8 + 8 * v15) = v9;
    }
LABEL_9:
    v18 = v25;
    *v25 = v14;
    v14[1] = v18;
  }
  return a3;
}
