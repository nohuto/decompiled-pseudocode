/*
 * XREFs of RtlAvlRemoveNode @ 0x180077B70
 * Callers:
 *     RtlDeleteFunctionTable @ 0x1800775B0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x1800779E0 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x1800785FC (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 **a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r10
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r8
  __int128 v7; // rax
  char v8; // cl
  _QWORD *v9; // rcx
  unsigned __int64 v10; // r8
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // r10
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  _BYTE *v17; // rdi
  unsigned __int8 v18; // si
  __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  bool v21; // zf
  __int64 v22; // rbx
  char v23; // r15
  __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  char v27; // r8
  unsigned __int8 v28; // cl
  __int64 v29; // r8

  v2 = (_QWORD *)*a2;
  v3 = a2[1];
  v4 = v3;
  if ( *a2 )
    v4 = *a2;
  v7 = -(__int128)*a2;
  if ( (*((_QWORD *)&v7 + 1) & v3) == 0 )
  {
    *((_QWORD *)&v7 + 1) = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v4 )
    {
      if ( *(unsigned __int64 **)(v4 + 16) != a2 )
        goto LABEL_70;
      *(_QWORD *)(v4 + 16) = *((_QWORD *)&v7 + 1);
    }
    if ( *((_QWORD *)&v7 + 1) )
    {
      if ( *(unsigned __int64 **)(*((_QWORD *)&v7 + 1) + 8LL) == a2 )
      {
        v8 = 3;
        *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL) = v4;
        goto LABEL_26;
      }
      if ( **((unsigned __int64 ***)&v7 + 1) == a2 )
      {
        v8 = 1;
        **((_QWORD **)&v7 + 1) = v4;
        goto LABEL_26;
      }
    }
    else if ( *a1 == a2 )
    {
      *a1 = (unsigned __int64 *)v4;
      return v7;
    }
LABEL_70:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    *(_QWORD *)&v7 = v2[1];
    v11 = 0;
    v10 = (unsigned __int64)v2;
    *((_QWORD *)&v7 + 1) = v2;
    if ( (_QWORD)v7 )
    {
      v11 = 1;
      do
      {
        *((_QWORD *)&v7 + 1) = v10;
        v10 = v7;
        *(_QWORD *)&v7 = *(_QWORD *)(v7 + 8);
      }
      while ( (_QWORD)v7 );
    }
    v12 = *(_QWORD *)v10;
  }
  else
  {
    v9 = *(_QWORD **)v3;
    v10 = v3;
    *((_QWORD *)&v7 + 1) = v3;
    v11 = 1;
    if ( *(_QWORD *)v3 )
    {
      v11 = 0;
      do
      {
        *((_QWORD *)&v7 + 1) = v10;
        v10 = (unsigned __int64)v9;
        v9 = (_QWORD *)*v9;
      }
      while ( v9 );
    }
    v12 = *(_QWORD *)(v10 + 8);
  }
  *(_QWORD *)v10 = v2;
  *(_QWORD *)(v10 + 8) = v3;
  v13 = v2[2];
  if ( (unsigned __int64 *)(v13 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_70;
  v2[2] = v10 | v13 & 3;
  v14 = *(_QWORD *)(v3 + 16);
  if ( (unsigned __int64 *)(v14 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_70;
  *(_QWORD *)(v3 + 16) = v10 | v14 & 3;
  if ( (*(_QWORD *)(v10 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != *((_QWORD *)&v7 + 1) )
    goto LABEL_70;
  *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL * v11) = v12;
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 16) != v10 )
      goto LABEL_70;
    *(_QWORD *)(v12 + 16) = *((_QWORD *)&v7 + 1);
  }
  *(_QWORD *)(v10 + 16) = a2[2];
  v8 = v11 != 0 ? 3 : 1;
  v15 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v15 )
  {
    v16 = 0LL;
    if ( *(unsigned __int64 **)(v15 + 8) == a2 )
      v16 = 8LL;
    if ( *(unsigned __int64 **)(v16 + v15) == a2 )
    {
      *(_QWORD *)(v16 + v15) = v10;
      goto LABEL_26;
    }
    goto LABEL_70;
  }
  if ( *a1 != a2 )
    goto LABEL_70;
  *a1 = (unsigned __int64 *)v10;
  while ( 1 )
  {
LABEL_26:
    v17 = (_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL);
    LOBYTE(v7) = *(_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL);
    v18 = v7 & 3;
    if ( (v7 & 3) == ((unsigned __int8)v8 ^ 2) )
    {
      LOBYTE(v7) = v7 & 0xFC;
      *v17 = v7;
      v19 = *(_QWORD *)v17;
      goto LABEL_30;
    }
    if ( !v18 )
    {
      LOBYTE(v7) = v8 | v7 & 0xFC;
      *(_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL) = v7;
      return v7;
    }
    v19 = *(_QWORD *)v17;
    v22 = **((_QWORD **)&v7 + 1);
    if ( v8 == 1 )
      v22 = *(_QWORD *)(*((_QWORD *)&v7 + 1) + 8LL);
    v23 = *(_BYTE *)(v22 + 16) & 3;
    if ( v23 != ((unsigned __int8)v8 ^ 2) )
      break;
    *(_QWORD *)&v7 = RtlpTreeDoubleRotateNodes(a1, *((_QWORD *)&v7 + 1), v22, v8 == 1);
    *v17 &= 0xFCu;
    *((_QWORD *)&v7 + 1) = v7;
    v27 = *(_BYTE *)(v22 + 16) & 0xFC;
    *(_BYTE *)(v22 + 16) = v27;
    v28 = *(_BYTE *)(v7 + 16);
    LODWORD(v7) = v28 & 3;
    if ( v18 == (_DWORD)v7 )
    {
      *v17 &= 0xFCu;
      *v17 |= (v18 ^ 0xFE) & 3;
    }
    else if ( v18 == ((v28 ^ 0xFE) & 3) )
    {
      *(_BYTE *)(v22 + 16) = v18 | v27;
    }
    *(_BYTE *)(*((_QWORD *)&v7 + 1) + 16LL) &= 0xFCu;
LABEL_30:
    v20 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v20 )
      return v7;
    v21 = *(_QWORD *)(v20 + 8) == *((_QWORD *)&v7 + 1);
    v8 = 3;
    *((_QWORD *)&v7 + 1) = v20;
    if ( !v21 )
      v8 = 1;
  }
  if ( (*(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != *((_QWORD *)&v7 + 1) )
    goto LABEL_70;
  v24 = 0LL;
  if ( v8 == 1 )
    v24 = 8LL;
  if ( *(_QWORD *)(v24 + *((_QWORD *)&v7 + 1)) != v22 )
    goto LABEL_70;
  *(_QWORD *)&v7 = v19 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (v19 & 0xFFFFFFFFFFFFFFFCuLL) != 0 )
  {
    if ( *(_QWORD *)(v7 + 8) == *((_QWORD *)&v7 + 1) )
    {
      *(_QWORD *)(v7 + 8) = v22;
    }
    else
    {
      if ( *(_QWORD *)v7 != *((_QWORD *)&v7 + 1) )
        goto LABEL_70;
      *(_QWORD *)v7 = v22;
    }
  }
  else
  {
    if ( *a1 != *((unsigned __int64 **)&v7 + 1) )
      goto LABEL_70;
    *a1 = (unsigned __int64 *)v22;
  }
  *(_QWORD *)(v22 + 16) &= 3uLL;
  *(_QWORD *)(v22 + 16) |= v7;
  v25 = -(__int64)(v8 != 1) & 8;
  v26 = *(_QWORD *)(v25 + v22);
  if ( v26 )
  {
    v29 = *(_QWORD *)(v26 + 16);
    if ( (v29 & 0xFFFFFFFFFFFFFFFCuLL) != v22 )
      goto LABEL_70;
    *(_QWORD *)(v26 + 16) = *((_QWORD *)&v7 + 1) | v29 & 3;
  }
  *(_QWORD *)(v24 + *((_QWORD *)&v7 + 1)) = v26;
  *(_QWORD *)(v25 + v22) = *((_QWORD *)&v7 + 1);
  *(_QWORD *)v17 &= 3uLL;
  *(_QWORD *)v17 |= v22;
  LOBYTE(v7) = *(_BYTE *)(v22 + 16) & 0xFC;
  if ( v23 )
  {
    *(_BYTE *)(v22 + 16) = v7;
    *((_QWORD *)&v7 + 1) = v22;
    *v17 &= 0xFCu;
    goto LABEL_30;
  }
  *(_BYTE *)(v22 + 16) = v7 | (v8 ^ 0xFE) & 3;
  return v7;
}
