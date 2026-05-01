/*
 * XREFs of CreateNewEventEntry @ 0x180094648
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x180094AB0 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     memcpy_0 @ 0x180050222 (memcpy_0.c)
 *     CBufferGetNextOffset @ 0x1800945A8 (CBufferGetNextOffset.c)
 */

__int64 __fastcall CreateNewEventEntry(__int128 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5, __int64 *a6)
{
  unsigned __int8 v6; // di
  int v7; // ebp
  __int64 v9; // r8
  __int64 v10; // rdx
  unsigned __int8 v11; // r9
  unsigned int *v12; // r10
  __int64 v13; // rcx
  __int64 v14; // rax
  SIZE_T v16; // rbx
  HANDLE ProcessHeap; // rax
  __int64 NextOffset; // r12
  unsigned int v19; // edx
  void *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdi
  __int128 v23; // xmm0
  unsigned __int8 v24; // bp
  const void **v25; // rsi
  __int64 v26; // r12
  __int64 v27; // rbp
  unsigned int v28; // edx
  void *v29; // rbx
  char *v30; // rdx
  int v31; // eax
  __int64 v32[7]; // [rsp+20h] [rbp-38h] BYREF

  v6 = 0;
  v7 = a4;
  v32[0] = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = (unsigned int *)(a3 + 8);
  *a6 = 0LL;
  do
  {
    v13 = *v12;
    v12 += 4;
    if ( v11 >= 2u )
      v10 += v13;
    v14 = v13 + v9;
    if ( v11 >= 2u )
      v14 = v9;
    ++v11;
    v9 = v14;
  }
  while ( v11 < 0xDu );
  if ( (unsigned __int64)(v10 + v14) > 0xFFFF )
    return 534LL;
  v16 = v10 + 254;
  if ( v10 == -254 )
    return 8LL;
  ProcessHeap = GetProcessHeap();
  v32[0] = (__int64)HeapAlloc(ProcessHeap, 8u, v16);
  if ( !v32[0] )
    return 8LL;
  v32[1] = v16;
  NextOffset = CBufferGetNextOffset(v32, 0xD0uLL);
  do
  {
    if ( v6 >= 2u )
    {
      v20 = (void *)CBufferGetNextOffset(v32, *(unsigned int *)(a3 + 16LL * v6 + 8));
      memcpy_0(v20, *(const void **)(a3 + 16LL * v6), v19);
      *(_QWORD *)(NextOffset + 16LL * v6) = v20;
      *(_DWORD *)(NextOffset + 16LL * v6 + 12) = *(_DWORD *)(a3 + 16LL * v6 + 12);
      *(_DWORD *)(NextOffset + 16LL * v6 + 8) = *(_DWORD *)(a3 + 16LL * v6 + 8);
    }
    else
    {
      *(_OWORD *)(NextOffset + 16LL * v6) = *(_OWORD *)(a3 + 16LL * v6);
    }
    ++v6;
  }
  while ( v6 < (unsigned int)(v7 + 2) );
  v22 = CBufferGetNextOffset(v32, 0x2EuLL);
  *(_QWORD *)(v22 + 16) = NextOffset;
  v23 = *a1;
  *(_BYTE *)(v22 + 45) = v7;
  v24 = v7 + 2;
  *(_BYTE *)(v22 + 44) = 13;
  *(_DWORD *)(v22 + 40) = a5;
  *(_OWORD *)v22 = v23;
  if ( v24 < 0xDu )
  {
    v25 = (const void **)(16LL * v24 + a3 + 8);
    v26 = v21 - 54 - a3;
    v27 = (unsigned __int8)(13 - v24);
    do
    {
      v29 = (void *)CBufferGetNextOffset(v32, *(unsigned int *)v25);
      memcpy_0(v29, *(v25 - 1), v28);
      v30 = (char *)v25 + v26;
      *(_QWORD *)&v30[*(_QWORD *)(v22 + 16)] = v29;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 12] = *((_DWORD *)v25 + 1);
      v31 = *(_DWORD *)v25;
      v25 += 2;
      *(_DWORD *)&v30[*(_QWORD *)(v22 + 16) + 8] = v31;
      --v27;
    }
    while ( v27 );
  }
  *a6 = v22;
  return 0LL;
}
