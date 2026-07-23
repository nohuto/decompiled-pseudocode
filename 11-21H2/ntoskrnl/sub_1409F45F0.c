/*
 * XREFs of sub_1409F45F0 @ 0x1409F45F0
 * Callers:
 *     sub_1406CEEB0 @ 0x1406CEEB0 (sub_1406CEEB0.c)
 * Callees:
 *     strnlen @ 0x1403E2F80 (strnlen.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1409F5070 @ 0x1409F5070 (sub_1409F5070.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409F45F0(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // r13
  _BYTE *Pool2; // rsi
  char *v10; // rbp
  char v11; // al
  __int64 v12; // rax
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // edi
  char *v16; // r12
  unsigned int v17; // eax
  unsigned int v18; // r11d
  __int64 v19; // r9
  unsigned __int8 *v20; // rdi
  __int64 v21; // r8
  unsigned __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rax
  int v25; // r9d
  int v26; // r9d
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  int v30; // r9d
  _QWORD *v31; // r9
  unsigned int v32; // edi
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned int v35; // [rsp+70h] [rbp+8h]
  _QWORD *v37; // [rsp+80h] [rbp+18h]
  __int64 v38; // [rsp+80h] [rbp+18h]
  char *v39; // [rsp+88h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  if ( v2 < 0x18 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
  if ( !*(_WORD *)(*(_QWORD *)a1 + 18LL) )
    return 3221225485LL;
  v6 = v2 - 20;
  if ( (unsigned int)v6 < 2 * v5 )
    return 3221225485LL;
  v7 = 24 * v5;
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, v7 + v6 + 40, 1182233669LL);
  if ( !Pool2 )
    return 3221225495LL;
  v10 = (char *)ExAllocatePool2(64LL, 256LL, 1182233669LL);
  if ( !v10 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return 3221225495LL;
  }
  *Pool2 = *(_BYTE *)(v4 + 17);
  v11 = *(_BYTE *)(v4 + 16);
  if ( !v11 )
    v11 = -1;
  Pool2[1] = v11;
  v12 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    v12 = -1LL;
  *((_QWORD *)Pool2 + 1) = v12;
  *((_QWORD *)Pool2 + 2) = *(_QWORD *)(v4 + 8);
  v37 = Pool2 + 40;
  v39 = &Pool2[v7 + 40];
  memmove(v39, (const void *)(v4 + 20), (unsigned int)v6);
  *((_DWORD *)Pool2 + 6) = 0;
  *((_QWORD *)Pool2 + 4) = v10;
  *((_DWORD *)Pool2 + 7) = 1024;
  if ( (v10 + 256 >= v10 ? 0x20 : 0) != 0 )
    memset64(v10, (unsigned __int64)(Pool2 + 24) | 1, v10 + 256 >= v10 ? 0x20 : 0);
  v35 = 0;
  v13 = 0;
  if ( v5 )
  {
    v14 = v6 - 1;
    while ( 1 )
    {
      if ( v13 >= v14 )
        goto LABEL_42;
      v15 = v6 - v13;
      v16 = &v39[v13];
      v17 = v16 ? strnlen(&v39[v13], v15) : 0;
      v18 = v17 + 1;
      if ( v17 + 1 > v15 || v17 == -1 )
        goto LABEL_42;
      v19 = v17;
      v20 = (unsigned __int8 *)&v39[v13];
      v21 = 314159LL;
      if ( v17 >= 8uLL )
      {
        v22 = (unsigned __int64)v17 >> 3;
        v19 = v17 - 8 * v22;
        do
        {
          v23 = v20[6]
              + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v21))))));
          v24 = v20[7];
          v20 += 8;
          v21 = v24 + 37 * v23;
          --v22;
        }
        while ( v22 );
      }
      if ( (unsigned __int64)(v19 - 1) <= 6 )
      {
        v25 = v19 - 1;
        if ( !v25 )
          goto LABEL_39;
        v26 = v25 - 1;
        if ( !v26 )
          goto LABEL_38;
        v27 = v26 - 1;
        if ( !v27 )
          goto LABEL_37;
        v28 = v27 - 1;
        if ( !v28 )
          goto LABEL_36;
        v29 = v28 - 1;
        if ( !v29 )
          goto LABEL_35;
        v30 = v29 - 1;
        if ( !v30 )
          goto LABEL_34;
        if ( v30 == 1 )
          break;
      }
LABEL_40:
      v31 = v37;
      v13 += v18;
      v37[1] = v21;
      v37[2] = v16;
      v32 = *((_DWORD *)Pool2 + 7);
      v38 = v21 & (-1LL << (v32 & 0x1F));
      v33 = *((_QWORD *)Pool2 + 4);
      v34 = (37
           * (BYTE6(v38)
            + 37
            * (BYTE5(v38)
             + 37
             * (BYTE4(v38)
              + 37
              * ((((unsigned int)v21 & (-1 << (v32 & 0x1F))) >> 24)
               + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
           + HIBYTE(v38)) & ((v32 >> 5) - 1);
      *v31 = *(_QWORD *)(v33 + 8 * v34);
      v14 = v6 - 1;
      *(_QWORD *)(v33 + 8 * v34) = v31;
      ++*((_DWORD *)Pool2 + 6);
      ++v35;
      v37 = v31 + 3;
      if ( v35 >= v5 )
        goto LABEL_41;
    }
    v21 = *v20++ + 37 * v21;
LABEL_34:
    v21 = *v20++ + 37 * v21;
LABEL_35:
    v21 = *v20++ + 37 * v21;
LABEL_36:
    v21 = *v20++ + 37 * v21;
LABEL_37:
    v21 = *v20++ + 37 * v21;
LABEL_38:
    v21 = *v20++ + 37 * v21;
LABEL_39:
    v21 = *v20 + 37 * v21;
    goto LABEL_40;
  }
LABEL_41:
  if ( v13 == (_DWORD)v6 )
  {
    *a2 = Pool2;
  }
  else
  {
LABEL_42:
    sub_1409F5070(Pool2);
    return (unsigned int)-1073741811;
  }
  return v3;
}
