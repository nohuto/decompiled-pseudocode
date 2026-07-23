/*
 * XREFs of sub_140B0A000 @ 0x140B0A000
 * Callers:
 *     sub_140B09D6C @ 0x140B09D6C (sub_140B09D6C.c)
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_140B0A000()
{
  PVOID *v0; // rcx
  __int64 v1; // r15
  PVOID *v2; // rbp
  PVOID *v3; // rsi
  PVOID v4; // rax
  __int16 v5; // ax
  size_t v6; // r13
  char *v7; // r14
  PVOID *v8; // rdi
  unsigned __int64 *v9; // rbx
  PVOID v10; // rdx
  ULONG v11; // r11d
  unsigned __int64 v12; // r8
  ULONG i; // r10d
  ULONG v14; // ebx
  unsigned __int64 v15; // rcx
  void **v16; // rdx
  __int64 v17; // r8
  PVOID *v18; // rax
  PVOID *v19; // rcx
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  int v23; // ebx
  _QWORD *v25; // rax
  unsigned int v26; // r10d
  char *v27; // rdx
  __int64 v28; // r9
  PVOID *v29; // rcx
  PVOID *j; // rdi
  PVOID v31; // rcx
  ULONG Size; // [rsp+60h] [rbp+8h] BYREF
  PVOID *v33; // [rsp+68h] [rbp+10h]

  v0 = (PVOID *)PsLoadedModuleList;
  v33 = &PsLoadedModuleList;
  Size = 0;
  LODWORD(v1) = 0;
  v2 = 0LL;
  v3 = 0LL;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
    goto LABEL_75;
  do
  {
    v4 = v0[6];
    if ( qword_140D068F0 == v4 )
    {
      v2 = v0;
    }
    else if ( qword_140D06988 == v4 )
    {
      v3 = v0;
    }
    v5 = ((_DWORD)v0[13] & 0x4000000) == 0 || v0 == v3 || v0 == v2;
    *((_WORD *)v0 + 54) = v5;
    v1 = (unsigned int)(v1 + 1);
    v0[17] = (PVOID)1;
    v0 = (PVOID *)*v0;
  }
  while ( v0 != &PsLoadedModuleList );
  if ( !v2 || !v3 )
  {
LABEL_75:
    v23 = -1073741275;
    goto LABEL_47;
  }
  v6 = 8 * v1;
  v7 = (char *)sub_1402828F0(256, 8 * v1, 0x54446D4Du);
  if ( !v7 )
  {
    v23 = -1073741670;
    goto LABEL_48;
  }
  v8 = (PVOID *)PsLoadedModuleList;
  if ( PsLoadedModuleList == &PsLoadedModuleList )
  {
LABEL_45:
    v23 = 0;
    goto LABEL_46;
  }
  while ( 1 )
  {
    v9 = (unsigned __int64 *)RtlImageDirectoryEntryToData(v8[6], 1u, 0xCu, &Size);
    if ( !v9 )
      goto LABEL_43;
    memset(v7, 0, v6);
    v10 = 0LL;
    v11 = Size >> 3;
    v12 = 0LL;
    for ( i = 0; i < v11; ++v9 )
    {
      if ( !v10 || *v9 < (unsigned __int64)v10 || *v9 >= v12 )
      {
        v19 = (PVOID *)PsLoadedModuleList;
        v20 = 0LL;
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          v21 = *v9;
          while ( 1 )
          {
            v10 = v19[6];
            v12 = (unsigned __int64)v10 + *((unsigned int *)v19 + 16);
            if ( v21 >= (unsigned __int64)v10 && v21 < v12 )
              break;
            v19 = (PVOID *)*v19;
            v20 = (unsigned int)(v20 + 1);
            if ( v19 == v33 )
              goto LABEL_29;
          }
          if ( (*((_DWORD *)v19 + 49) & 0x20) != 0 || (v6 = 8 * v1, _bittest16((const signed __int16 *)v19 + 55, 9u)) )
          {
            if ( v19 != v8 )
            {
              v23 = -1073740608;
              goto LABEL_46;
            }
          }
          if ( (*((_DWORD *)v8 + 49) & 0x20) != 0 && v8[35] == v19 )
          {
            v23 = -1073740945;
            goto LABEL_46;
          }
          *(_QWORD *)&v7[8 * v20] = v19;
        }
LABEL_29:
        v22 = *v9;
        if ( *v9 < (unsigned __int64)v10 || v22 >= v12 )
        {
          if ( v22 && (*((_DWORD *)v8 + 49) & 0x20) == 0 )
          {
            v23 = -1073741275;
            goto LABEL_46;
          }
          v10 = 0LL;
        }
      }
      ++i;
    }
    v14 = 0;
    v15 = 0LL;
    Size = 0;
    if ( !(_DWORD)v1 )
      goto LABEL_43;
    v16 = (void **)v7;
    v17 = (unsigned int)v1;
    do
    {
      v18 = (PVOID *)*v16;
      if ( *v16 && v18 != v2 && v18 != v8 && v18 != v3 )
      {
        v15 = (unsigned __int64)*v16;
        ++v14;
      }
      ++v16;
      --v17;
    }
    while ( v17 );
    Size = v14;
    if ( !v14 )
    {
LABEL_43:
      v8[17] = (PVOID)-2LL;
      goto LABEL_44;
    }
    if ( v14 != 1 )
      break;
    v8[17] = (PVOID)(v15 | 1);
    ++*(_WORD *)(v15 + 108);
LABEL_44:
    v8 = (PVOID *)*v8;
    if ( v8 == &PsLoadedModuleList )
      goto LABEL_45;
  }
  if ( v14 <= 0x1FFFFFFE )
  {
    v25 = sub_1402828F0(256, 8 * v14 + 8, 0x54446D4Du);
    if ( v25 )
    {
      *v25 = v14;
      v26 = 0;
      v27 = v7;
      v28 = (unsigned int)v1;
      do
      {
        v29 = *(PVOID **)v27;
        if ( *(_QWORD *)v27 && v29 != v2 && v29 != v8 && v29 != v3 )
        {
          v25[v26 + 1] = v29;
          ++*(_WORD *)(*(_QWORD *)v27 + 108LL);
          ++v26;
        }
        v27 += 8;
        --v28;
      }
      while ( v28 );
      v6 = 8 * v1;
      v8[17] = v25;
      goto LABEL_44;
    }
  }
  v23 = -1073741670;
LABEL_46:
  ExFreePoolWithTag(v7, 0);
LABEL_47:
  if ( v2 )
LABEL_48:
    v2[17] = (PVOID)1;
  if ( v3 )
    v3[17] = (PVOID)1;
  if ( v23 < 0 )
  {
    for ( j = (PVOID *)PsLoadedModuleList; j != &PsLoadedModuleList; j = (PVOID *)*j )
    {
      v31 = j[17];
      if ( v31 != (PVOID)1 && v31 != (PVOID)-2LL && ((unsigned __int8)v31 & 1) == 0 )
        ExFreePoolWithTag(v31, 0);
      j[17] = (PVOID)1;
      *((_WORD *)j + 54) = 1;
    }
  }
  return (unsigned int)v23;
}
