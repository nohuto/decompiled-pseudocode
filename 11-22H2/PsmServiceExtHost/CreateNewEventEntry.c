/*
 * XREFs of CreateNewEventEntry @ 0x180004840
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x1800043E0 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memcpy_0 @ 0x1800536E2 (memcpy_0.c)
 */

__int64 __fastcall CreateNewEventEntry(__int128 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5, _QWORD *a6)
{
  unsigned int *v6; // rbx
  __int64 v7; // rax
  int v8; // r14d
  __int64 v9; // r11
  unsigned __int8 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rcx
  SIZE_T v14; // rbx
  HANDLE ProcessHeap; // rax
  char *v16; // rax
  char *v17; // rbp
  char *v18; // r13
  unsigned __int8 v19; // di
  unsigned int v20; // r15d
  size_t v21; // r8
  void *v22; // r14
  char *v23; // rsi
  __int128 v24; // xmm0
  unsigned __int8 v25; // r14
  const void **v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r12
  size_t v29; // r8
  void *v30; // r14
  char *v31; // rdx
  int v32; // eax

  v6 = (unsigned int *)(a3 + 8);
  v7 = 0LL;
  v8 = a4;
  v9 = 0LL;
  v11 = 0;
  *a6 = 0LL;
  do
  {
    v12 = *v6;
    v6 += 4;
    if ( v11 >= 2u )
      v7 += v12;
    v13 = v12 + v9;
    if ( v11 >= 2u )
      v13 = v9;
    ++v11;
    v9 = v13;
  }
  while ( v11 < 0xDu );
  if ( (unsigned __int64)(v7 + v13) > 0xFFFF )
    return 534LL;
  v14 = v7 + 254;
  if ( v7 == -254 )
    return 8LL;
  ProcessHeap = GetProcessHeap();
  v16 = (char *)HeapAlloc(ProcessHeap, 8u, v14);
  v17 = v16;
  if ( !v16 )
    return 8LL;
  if ( v14 < 0xD0 )
  {
    v18 = 0LL;
  }
  else
  {
    v17 = v16 + 208;
    v18 = v16;
    v14 -= 208LL;
  }
  v19 = 0;
  v20 = v8 + 2;
  do
  {
    if ( v19 < 2u )
    {
      *(_OWORD *)&v18[16 * v19] = *(_OWORD *)(a3 + 16LL * v19);
    }
    else
    {
      v21 = *(unsigned int *)(a3 + 16LL * v19 + 8);
      if ( *(_DWORD *)(a3 + 16LL * v19 + 8) && v14 >= v21 )
      {
        v22 = v17;
        v17 += v21;
        v14 -= v21;
      }
      else
      {
        v22 = 0LL;
      }
      memcpy_0(v22, *(const void **)(a3 + 16LL * v19), v21);
      *(_QWORD *)&v18[16 * v19] = v22;
      *(_DWORD *)&v18[16 * v19 + 12] = *(_DWORD *)(a3 + 16LL * v19 + 12);
      *(_DWORD *)&v18[16 * v19 + 8] = *(_DWORD *)(a3 + 16LL * v19 + 8);
    }
    ++v19;
  }
  while ( v19 < v20 );
  if ( v14 < 0x2E )
  {
    v23 = 0LL;
  }
  else
  {
    v23 = v17;
    v17 += 46;
    v14 -= 46LL;
  }
  *((_QWORD *)v23 + 2) = v18;
  v24 = *a1;
  v23[45] = a4;
  v25 = a4 + 2;
  v23[44] = 13;
  *((_DWORD *)v23 + 10) = a5;
  *(_OWORD *)v23 = v24;
  if ( (unsigned __int8)(a4 + 2) < 0xDu )
  {
    v26 = (const void **)(16LL * v25 + a3 + 8);
    v27 = -8 - a3;
    v28 = (unsigned __int8)(13 - v25);
    do
    {
      v29 = *(unsigned int *)v26;
      if ( *(_DWORD *)v26 && v14 >= v29 )
      {
        v30 = v17;
        v17 += v29;
        v14 -= v29;
      }
      else
      {
        v30 = 0LL;
      }
      memcpy_0(v30, *(v26 - 1), v29);
      v31 = (char *)v26 + v27;
      *(_QWORD *)&v31[*((_QWORD *)v23 + 2)] = v30;
      *(_DWORD *)&v31[*((_QWORD *)v23 + 2) + 12] = *((_DWORD *)v26 + 1);
      v32 = *(_DWORD *)v26;
      v26 += 2;
      *(_DWORD *)&v31[*((_QWORD *)v23 + 2) + 8] = v32;
      --v28;
    }
    while ( v28 );
  }
  *a6 = v23;
  return 0LL;
}
