/*
 * XREFs of sub_18000F4B0 @ 0x18000F4B0
 * Callers:
 *     sub_18000FBFC @ 0x18000FBFC (sub_18000FBFC.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18000D3DC @ 0x18000D3DC (sub_18000D3DC.c)
 *     sub_18000F018 @ 0x18000F018 (sub_18000F018.c)
 *     sub_18001060C @ 0x18001060C (sub_18001060C.c)
 */

int __fastcall sub_18000F4B0(__int64 a1, __int64 a2, int a3)
{
  __int64 *v3; // r15
  __int64 *v4; // r14
  _QWORD *v5; // r12
  __int64 v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // rbp
  __int64 v19; // r12
  void *v20; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  _BYTE *v24; // r8
  __int64 v25; // rbp
  __int64 v26; // rdi
  unsigned __int64 v27; // rdi
  _BYTE *v28; // r8
  unsigned __int64 v29; // rsi
  void *v30; // rax

  *(_DWORD *)(a1 + 4) = a3;
  v3 = (__int64 *)(a1 + 16);
  v4 = (__int64 *)(a1 + 32);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  v5 = (_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 16) = 0LL;
  v7 = -1LL;
  *(_WORD *)(a1 + 24) = *(_WORD *)(a2 + 64);
  *(_BYTE *)(a1 + 26) = *(_BYTE *)a2;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 136);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 56) = 0LL;
  v9 = *(_QWORD *)(a2 + 56);
  if ( v9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_BYTE *)(v9 + v11) );
    v10 = v11 + 1;
  }
  else
  {
    v10 = 1LL;
  }
  v12 = *(_QWORD *)(a2 + 128);
  if ( v12 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *(_BYTE *)(v12 + v14) );
    v13 = v14 + 1;
  }
  else
  {
    v13 = 1LL;
  }
  v15 = *(_QWORD *)(a2 + 24);
  if ( v15 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v15 + 2 * v17) );
    v16 = 2 * v17 + 2;
  }
  else
  {
    v16 = 2LL;
  }
  v18 = v10 + v16 + v13;
  if ( !*(_QWORD *)(a1 + 64) || *(_QWORD *)(a1 + 72) < v18 )
  {
    v10 = (__int64)sub_18000F018(8u, v10 + v16 + v13);
    v19 = v10;
    if ( v10 )
    {
      v20 = *(void **)(a1 + 64);
      ProcessHeap = GetProcessHeap();
      LODWORD(v10) = HeapFree(ProcessHeap, 0, v20);
      *(_QWORD *)(a1 + 64) = v19;
      *(_QWORD *)(a1 + 72) = v18;
    }
    v5 = (_QWORD *)(a1 + 56);
  }
  v22 = *(_QWORD *)(a1 + 64);
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1 + 72);
    v24 = *(_BYTE **)(a2 + 56);
    v25 = v23 + v22;
    if ( v22 == v23 + v22 )
      goto LABEL_31;
    if ( !v24 )
      goto LABEL_31;
    if ( !*v24 )
      goto LABEL_31;
    v26 = -1LL;
    do
      ++v26;
    while ( v24[v26] );
    v27 = v26 + 1;
    if ( v23 >= v27 )
    {
      sub_18001060C(v22, v23, v24, v27);
      if ( v3 )
        *v3 = v22;
      v22 += v27;
    }
    else
    {
LABEL_31:
      if ( v3 )
        *v3 = 0LL;
    }
    v28 = *(_BYTE **)(a2 + 128);
    if ( v22 == v25 || !v28 || !*v28 )
      goto LABEL_41;
    do
      ++v7;
    while ( v28[v7] );
    v29 = v7 + 1;
    if ( v25 - v22 >= v29 )
    {
      sub_18001060C(v22, v25 - v22, v28, v29);
      if ( v4 )
        *v4 = v22;
      v22 += v29;
    }
    else
    {
LABEL_41:
      if ( v4 )
        *v4 = 0LL;
    }
    v30 = (void *)sub_18000D3DC(v22, v25, *(_WORD **)(a2 + 24), v5);
    LODWORD(v10) = (unsigned int)memset(v30, 0, v25 - (_QWORD)v30);
  }
  return v10;
}
