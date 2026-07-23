/*
 * XREFs of sub_1403833EC @ 0x1403833EC
 * Callers:
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 * Callees:
 *     sub_140380950 @ 0x140380950 (sub_140380950.c)
 *     sub_1403830D4 @ 0x1403830D4 (sub_1403830D4.c)
 *     sub_140396008 @ 0x140396008 (sub_140396008.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405F66DC @ 0x1405F66DC (sub_1405F66DC.c)
 */

_BYTE *__fastcall sub_1403833EC(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  _BYTE *v4; // r15
  _QWORD *v5; // r13
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  __int64 v9; // rbp
  int *v10; // r9
  int v11; // eax
  int *v12; // r12
  unsigned int v13; // edx
  _QWORD *v14; // r12
  int v15; // eax
  int v16; // ecx
  char v17; // dl
  __int64 v18; // rcx
  __int64 v19; // r8
  _BYTE *v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rdx
  int v24; // r8d
  __int128 v25; // [rsp+20h] [rbp-48h] BYREF
  __int16 v27; // [rsp+80h] [rbp+18h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v6 = *v5;
  v7 = sub_1403830D4(a1, *(unsigned __int8 *)(*v5 + 3LL), *(_BYTE *)(*v5 + 2LL));
  v8 = v7;
  if ( !v7 )
    return (_BYTE *)v3;
  DWORD1(v25) = 0;
  *((_QWORD *)&v25 + 1) = v7;
  v9 = (*(_DWORD *)v6 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v6 + 3) )
  {
    v10 = (int *)(v6 + 16 + 4 * v9);
    if ( (*(_DWORD *)v6 & 1) != 0 && (unsigned __int64)(v10 + 1) < v5[1] )
    {
      ++v10;
      LODWORD(v9) = v9 + 1;
    }
    v11 = *v10;
    v12 = 0LL;
  }
  else
  {
    v10 = 0LL;
    v12 = (int *)(v6 + 16 * (((*(_DWORD *)v6 >> 1) & 0x7FFF) + 1LL));
    v11 = *v12;
  }
  LODWORD(v25) = v11;
  v13 = (unsigned __int16)*(_DWORD *)v6 - (_DWORD)v9;
  v27 = *(_DWORD *)v6 - v9;
  if ( *(_BYTE *)(v6 + 3) )
  {
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
      *((_QWORD *)v8 + 1) = *(_QWORD *)(v6 + 8);
    memmove(v8 + 16, v10, 4LL * v13);
  }
  else
  {
    v27 = v13 - 1;
    memmove(v8 + 16, v12 + 4, 16LL * (v13 - 1));
    *((_QWORD *)v8 + 1) = *((_QWORD *)v12 + 1);
  }
  *(_WORD *)v8 = v27;
  if ( *(_QWORD *)a1 == v6 )
  {
    v21 = sub_1403830D4(a1, 0LL, *(_BYTE *)(v6 + 2) + 1);
    v4 = v21;
    if ( v21 )
    {
      v23 = v21 + 8;
      v24 = 1;
      *((_QWORD *)v21 + 1) = v6;
      *((_OWORD *)v21 + 1) = v25;
      *(_WORD *)v21 = 1;
      *(_QWORD *)a1 = v21;
      if ( *(_BYTE *)(v6 + 3) && **(_DWORD **)(a1 + 16) != -1 )
      {
        *v23 |= 1u;
        sub_1405F66DC(v22, v23);
      }
      v14 = (_QWORD *)a2;
      memmove(v5 + 2, v5, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - v24));
      *v5 = v4;
      v5[1] = v4 + 16;
      v16 = ++*(_DWORD *)(a2 + 24);
      goto LABEL_11;
    }
  }
  else
  {
    v14 = (_QWORD *)a2;
    --*(_DWORD *)(a2 + 24);
    v15 = sub_140380950(a1, a2, &v25);
    v16 = ++*(_DWORD *)(a2 + 24);
    if ( v15 >= 0 )
    {
LABEL_11:
      v17 = *(_BYTE *)(v6 + 3);
      if ( v17 )
      {
        v18 = 2LL * (unsigned int)(v16 - 2);
        v19 = *(_QWORD *)(*v14 + 8 * v18 + 8);
        if ( **(_DWORD **)(a1 + 16) != -1 )
        {
          *(_DWORD *)(v19 + 8) |= 1u;
          sub_1405F66DC(v18, v19 + 8);
          v17 = *(_BYTE *)(v6 + 3);
        }
      }
      *(_WORD *)v6 = v9;
      if ( v17 && **(_DWORD **)(a1 + 16) == -1 )
        *(_QWORD *)(v6 + 8) = v8;
      return v8;
    }
  }
  sub_140396008(a1, v8);
  if ( v4 )
    sub_140396008(a1, v4);
  return (_BYTE *)v3;
}
