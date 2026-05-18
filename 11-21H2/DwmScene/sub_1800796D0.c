/*
 * XREFs of sub_1800796D0 @ 0x1800796D0
 * Callers:
 *     sub_180079890 @ 0x180079890 (sub_180079890.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001FFD8 @ 0x18001FFD8 (sub_18001FFD8.c)
 */

_QWORD *__fastcall sub_1800796D0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // r14
  _QWORD *v9; // rcx
  bool v10; // cf
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // r15
  _QWORD *v15; // r12
  unsigned __int64 v16; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rbp
  unsigned __int64 v22; // rdx
  _QWORD *v23; // [rsp+78h] [rbp+10h]
  _QWORD *v24; // [rsp+78h] [rbp+10h]
  _QWORD *v25; // [rsp+80h] [rbp+18h]
  _QWORD *v26; // [rsp+88h] [rbp+20h]

  if ( a2 != a3 )
  {
    v6 = (_QWORD *)a1[1];
    v7 = a2;
    v8 = a1[3];
    v9 = a2 + 2;
    v10 = a2[5] < 8uLL;
    v11 = (_QWORD *)a2[1];
    v12 = a2[4];
    v25 = v6;
    if ( !v10 )
      v9 = (_QWORD *)*v9;
    v13 = sub_18001FFD8((__int64)v9, v12);
    v14 = 2 * (a1[6] & v13);
    v23 = *(_QWORD **)(v8 + 16 * (a1[6] & v13));
    v26 = *(_QWORD **)(v8 + 16 * (a1[6] & v13) + 8);
    while ( 1 )
    {
      v15 = v7;
      v7 = (_QWORD *)*v7;
      v16 = v15[5];
      if ( v16 >= 8 )
        sub_180010884((char *)v15[2], 2 * v16 + 2);
      v15[4] = 0LL;
      v15[5] = 7LL;
      *((_WORD *)v15 + 8) = 0;
      sub_180010884((char *)v15, 0x30uLL);
      --a1[2];
      if ( v15 == v26 )
        break;
      if ( v7 == a3 )
      {
        if ( v23 == a2 )
LABEL_10:
          *(_QWORD *)(v8 + 8 * v14) = v7;
        goto LABEL_11;
      }
    }
    if ( v23 == a2 )
    {
      *(_QWORD *)(v8 + 8 * v14) = v25;
      v18 = v25;
    }
    else
    {
      v18 = v11;
    }
    *(_QWORD *)(v8 + 8 * v14 + 8) = v18;
    while ( v7 != a3 )
    {
      v19 = v7 + 2;
      if ( v7[5] >= 8uLL )
        v19 = (_QWORD *)*v19;
      v20 = sub_18001FFD8((__int64)v19, v7[4]);
      v14 = 2 * (a1[6] & v20);
      v24 = *(_QWORD **)(v8 + 16 * (a1[6] & v20) + 8);
      while ( 1 )
      {
        v21 = v7;
        v7 = (_QWORD *)*v7;
        v22 = v21[5];
        if ( v22 >= 8 )
          sub_180010884((char *)v21[2], 2 * v22 + 2);
        v21[5] = 7LL;
        v21[4] = 0LL;
        *((_WORD *)v21 + 8) = 0;
        sub_180010884((char *)v21, 0x30uLL);
        --a1[2];
        if ( v21 == v24 )
          break;
        if ( v7 == a3 )
          goto LABEL_10;
      }
      *(_QWORD *)(v8 + 8 * v14) = v25;
      *(_QWORD *)(v8 + 8 * v14 + 8) = v25;
    }
LABEL_11:
    *v11 = v7;
    v7[1] = v11;
  }
  return a3;
}
