/*
 * XREFs of RtlAvlRemoveNode @ 0x1800724B0
 * Callers:
 *     RtlDeleteGrowableFunctionTable @ 0x180072330 (RtlDeleteGrowableFunctionTable.c)
 *     RtlDeleteFunctionTable @ 0x18008CC90 (RtlDeleteFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x180072CA8 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r10
  unsigned __int64 v3; // r11
  unsigned __int64 v4; // r8
  __int64 v6; // rax
  unsigned __int64 v8; // rdx
  char v9; // cl
  _BYTE *v10; // rdi
  char v11; // al
  unsigned __int8 v12; // si
  __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  bool v15; // zf
  _QWORD *v16; // rcx
  unsigned __int64 v17; // r8
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // r10
  unsigned __int64 v22; // rax
  __int64 v23; // r10
  unsigned __int64 v24; // rbx
  char v25; // r15
  __int64 v26; // r11
  unsigned __int64 v27; // r8
  __int64 v28; // r10
  __int64 v29; // r9
  _QWORD *v30; // rax
  char v31; // r8
  unsigned __int8 v32; // cl
  __int64 v33; // r8

  v2 = *a2;
  v3 = a2[1];
  v4 = v3;
  if ( *a2 )
    v4 = *a2;
  v6 = -(__int64)*a2;
  if ( (-(__int64)(*a2 != 0) & v3) == 0 )
  {
    v8 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v4 )
    {
      if ( *(unsigned __int64 **)(v4 + 16) != a2 )
        goto LABEL_71;
      *(_QWORD *)(v4 + 16) = v8;
    }
    if ( v8 )
    {
      if ( *(unsigned __int64 **)(v8 + 8) == a2 )
      {
        v9 = 3;
        *(_QWORD *)(v8 + 8) = v4;
        goto LABEL_11;
      }
      if ( *(unsigned __int64 **)v8 == a2 )
      {
        v9 = 1;
        *(_QWORD *)v8 = v4;
        goto LABEL_11;
      }
    }
    else if ( (unsigned __int64 *)*a1 == a2 )
    {
      *a1 = v4;
      return v6;
    }
LABEL_71:
    __fastfail(0x1Du);
  }
  if ( (a2[2] & 3) == 3 )
  {
    v30 = *(_QWORD **)(v2 + 8);
    v17 = *a2;
    v8 = *a2;
    v18 = 0;
    if ( v30 )
    {
      v18 = 1;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v30;
        v30 = (_QWORD *)v30[1];
      }
      while ( v30 );
    }
    v19 = *(_QWORD *)v17;
  }
  else
  {
    v16 = *(_QWORD **)v3;
    v17 = a2[1];
    v8 = v17;
    v18 = 1;
    if ( *(_QWORD *)v3 )
    {
      v18 = 0;
      do
      {
        v8 = v17;
        v17 = (unsigned __int64)v16;
        v16 = (_QWORD *)*v16;
      }
      while ( v16 );
    }
    v19 = *(_QWORD *)(v17 + 8);
  }
  *(_QWORD *)v17 = v2;
  *(_QWORD *)(v17 + 8) = v3;
  v20 = *(_QWORD *)(v2 + 16);
  if ( (unsigned __int64 *)(v20 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_71;
  *(_QWORD *)(v2 + 16) = v17 | v20 & 3;
  v21 = *(_QWORD *)(v3 + 16);
  if ( (unsigned __int64 *)(v21 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    goto LABEL_71;
  *(_QWORD *)(v3 + 16) = v17 | v21 & 3;
  if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_71;
  *(_QWORD *)(v8 + 8LL * v18) = v19;
  if ( v19 )
  {
    if ( *(_QWORD *)(v19 + 16) != v17 )
      goto LABEL_71;
    *(_QWORD *)(v19 + 16) = v8;
  }
  *(_QWORD *)(v17 + 16) = a2[2];
  v9 = v18 != 0 ? 3 : 1;
  v22 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v22 )
  {
    v23 = 0LL;
    if ( *(unsigned __int64 **)(v22 + 8) == a2 )
      v23 = 8LL;
    if ( *(unsigned __int64 **)(v23 + v22) == a2 )
    {
      *(_QWORD *)(v23 + v22) = v17;
      goto LABEL_11;
    }
    goto LABEL_71;
  }
  if ( (unsigned __int64 *)*a1 != a2 )
    goto LABEL_71;
  *a1 = v17;
  while ( 1 )
  {
LABEL_11:
    v10 = (_BYTE *)(v8 + 16);
    v11 = *(_BYTE *)(v8 + 16);
    v12 = v11 & 3;
    if ( (v11 & 3) == ((unsigned __int8)v9 ^ 2) )
    {
      LOBYTE(v6) = v11 & 0xFC;
      *v10 = v6;
      v13 = *(_QWORD *)v10;
      goto LABEL_15;
    }
    if ( !v12 )
    {
      LOBYTE(v6) = v9 | v11 & 0xFC;
      *v10 = v6;
      return v6;
    }
    v13 = *(_QWORD *)v10;
    v24 = *(_QWORD *)v8;
    if ( v9 == 1 )
      v24 = *(_QWORD *)(v8 + 8);
    v25 = *(_BYTE *)(v24 + 16) & 3;
    if ( v25 != ((unsigned __int8)v9 ^ 2) )
      break;
    v6 = RtlpTreeDoubleRotateNodes(a1, v8, v24, v9 == 1);
    *v10 &= 0xFCu;
    v8 = v6;
    v31 = *(_BYTE *)(v24 + 16) & 0xFC;
    *(_BYTE *)(v24 + 16) = v31;
    v32 = *(_BYTE *)(v6 + 16);
    LODWORD(v6) = v32 & 3;
    if ( v12 == (_DWORD)v6 )
    {
      *v10 &= 0xFCu;
      *v10 |= (v12 ^ 0xFE) & 3;
    }
    else if ( v12 == ((v32 ^ 0xFE) & 3) )
    {
      *(_BYTE *)(v24 + 16) = v12 | v31;
    }
    *(_BYTE *)(v8 + 16) &= 0xFCu;
LABEL_15:
    v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v14 )
      return v6;
    v15 = *(_QWORD *)(v14 + 8) == v8;
    v9 = 3;
    v8 = v14;
    if ( !v15 )
      v9 = 1;
  }
  if ( (*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
    goto LABEL_71;
  v26 = 8LL;
  if ( v9 != 1 )
    v26 = 0LL;
  if ( *(_QWORD *)(v26 + v8) != v24 )
    goto LABEL_71;
  v27 = *(_QWORD *)v10 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v27 )
  {
    if ( *(_QWORD *)(v27 + 8) == v8 )
    {
      *(_QWORD *)(v27 + 8) = v24;
    }
    else
    {
      if ( *(_QWORD *)v27 != v8 )
        goto LABEL_71;
      *(_QWORD *)v27 = v24;
    }
  }
  else
  {
    if ( *a1 != v8 )
      goto LABEL_71;
    *a1 = v24;
  }
  *(_QWORD *)(v24 + 16) &= 3uLL;
  *(_QWORD *)(v24 + 16) |= v27;
  v28 = v9 != 1 ? 8 : 0;
  v29 = *(_QWORD *)(v28 + v24);
  if ( v29 )
  {
    v33 = *(_QWORD *)(v29 + 16);
    if ( (v33 & 0xFFFFFFFFFFFFFFFCuLL) != v24 )
      goto LABEL_71;
    *(_QWORD *)(v29 + 16) = v8 | v33 & 3;
  }
  *(_QWORD *)(v26 + v8) = v29;
  *(_QWORD *)(v28 + v24) = v8;
  *(_QWORD *)v10 &= 3uLL;
  *(_QWORD *)v10 |= v24;
  LOBYTE(v6) = *(_BYTE *)(v24 + 16) & 0xFC;
  if ( v25 )
  {
    *(_BYTE *)(v24 + 16) = v6;
    v8 = v24;
    *v10 &= 0xFCu;
    goto LABEL_15;
  }
  *(_BYTE *)(v24 + 16) = v6 | (v9 ^ 0xFE) & 3;
  return v6;
}
