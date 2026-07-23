/*
 * XREFs of sub_14093C6D4 @ 0x14093C6D4
 * Callers:
 *     sub_14093DA18 @ 0x14093DA18 (sub_14093DA18.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_14093C6D4(_QWORD *a1, __int64 a2, _QWORD *a3, _DWORD *a4, _QWORD *a5)
{
  __int64 v5; // r11
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r13
  int v15; // r9d
  char v16; // r8
  unsigned __int64 v17; // rdi
  int v18; // r14d
  unsigned __int64 v19; // rax
  int v20; // ebp
  bool v21; // cf
  signed __int64 *v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+8h] [rbp-60h]
  unsigned __int64 v27; // [rsp+18h] [rbp-50h]

  v5 = a1[30];
  v7 = a1[24];
  if ( v5 == v7 && a1[34] == a1[25] )
  {
LABEL_34:
    *a4 = 0;
    return 0;
  }
  v8 = a1[28];
  v9 = v7 - v5;
  v10 = a1[27];
  v11 = 0LL;
  v12 = a1[25] - a1[34];
  v27 = v8 % (unsigned int)dword_140C0CBE8;
  v13 = a1[32] % (unsigned __int64)(unsigned int)dword_140C0CBE8;
  v25 = v10 + v8 / (unsigned int)dword_140C0CBE8;
  v26 = v10 + a1[32] / (unsigned __int64)(unsigned int)dword_140C0CBE8;
  v14 = (unsigned int)dword_140C0CBE8;
  v15 = 0;
  if ( ((unsigned int)dword_140C0CBE8 - v27) >> 12 <= v9 )
    v9 = ((unsigned int)dword_140C0CBE8 - v27) >> 12;
  if ( ((unsigned int)dword_140C0CBE8 - v13) >> 12 <= v12 )
    v12 = ((unsigned int)dword_140C0CBE8 - v13) >> 12;
  v16 = 1;
  while ( 1 )
  {
    v17 = 0LL;
    if ( v9 )
    {
      v18 = 1;
      v17 = *(_QWORD *)((a1[29] + 8 * v11) % v14 + *(_QWORD *)(a1[94] + 8 * ((a1[29] + 8 * v11) / v14 + a1[27]))) >> 12;
    }
    else
    {
      v18 = 0;
    }
    v19 = 0LL;
    if ( v12 )
    {
      v20 = 1;
      v19 = *(_QWORD *)((a1[33] + 8 * (unsigned __int64)(unsigned int)v11) % v14
                      + *(_QWORD *)(a1[94] + 8 * ((a1[33] + 8 * (unsigned __int64)(unsigned int)v11) / v14 + a1[27]))) >> 12;
    }
    else
    {
      v20 = 0;
    }
    if ( !v15 )
    {
      if ( !v18 )
      {
        if ( !v20 )
          goto LABEL_33;
        v15 = 1;
        goto LABEL_29;
      }
      if ( !v20 )
      {
        v15 = 2;
        goto LABEL_29;
      }
      v15 = 2 - (v19 < v17);
    }
    if ( v15 != 1 )
      break;
    if ( !v20 )
      goto LABEL_33;
    if ( v18 )
    {
      v21 = v17 < v19;
      goto LABEL_28;
    }
LABEL_29:
    if ( v15 == 1 )
    {
      *(_QWORD *)(a2 + 8LL * (unsigned int)v11) = v19;
      --v12;
      v22 = (signed __int64 *)a1[80];
    }
    else
    {
      *(_QWORD *)(a2 + 8LL * (unsigned int)v11) = v17;
      --v9;
      v22 = (signed __int64 *)a1[78];
      v19 = v17;
    }
    _bittestandset64(v22, v19);
    v11 = (unsigned int)(v11 + 1);
  }
  if ( !v18 )
    goto LABEL_33;
  if ( !v20 )
    goto LABEL_29;
  v21 = v19 < v17;
LABEL_28:
  if ( !v21 )
    goto LABEL_29;
LABEL_33:
  if ( !(_DWORD)v11 )
    goto LABEL_34;
  v24 = a1[94];
  if ( v15 == 1 )
  {
    *a5 = v26;
    *a3 = *(_QWORD *)(v24 + 8 * v26) + v13;
    if ( v12 || a1[35] == v26 )
      v16 = 0;
    a1[34] += (unsigned int)v11;
    a1[32] += (unsigned int)((_DWORD)v11 << 12);
    a1[33] += 8LL * (unsigned int)v11;
  }
  else
  {
    *a5 = v25;
    *a3 = *(_QWORD *)(v24 + 8 * v25) + v27;
    if ( v9 || a1[31] == v25 )
      v16 = 0;
    a1[30] += (unsigned int)v11;
    a1[28] += (unsigned int)((_DWORD)v11 << 12);
    a1[29] += 8LL * (unsigned int)v11;
  }
  *a4 = v11;
  return v16;
}
