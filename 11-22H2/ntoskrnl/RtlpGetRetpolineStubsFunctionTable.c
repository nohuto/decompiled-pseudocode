/*
 * XREFs of RtlpGetRetpolineStubsFunctionTable @ 0x1405B22D4
 * Callers:
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x1405B20F0 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1405B21D8 (RtlCreateRetpolineStubsFunctionTable.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x140214A40 (RtlImageDirectoryEntryToData.c)
 */

unsigned int *__fastcall RtlpGetRetpolineStubsFunctionTable(void *a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v6; // rdi
  unsigned int *v8; // r11
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // r9d
  unsigned __int64 v12; // rbp
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdx
  unsigned int *result; // rax
  unsigned int *v19; // rdx
  int v20; // r9d
  int v21; // r8d
  unsigned int *v22; // rdx
  ULONG v23[6]; // [rsp+20h] [rbp-18h] BYREF

  v23[0] = 0;
  v6 = a4;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 3u, v23);
  if ( !v8 )
    return 0LL;
  if ( !v23[0] )
    return 0LL;
  if ( v23[0] != 12 * (v23[0] / 0xCuLL) )
    return 0LL;
  v9 = a3 - a2;
  v10 = v9 + v6;
  v11 = 0;
  v12 = v23[0] / 0xCuLL;
  v13 = v12 - 1;
  if ( (int)v12 - 1 < 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = (v11 + v13) >> 1;
    v15 = v14;
    v16 = v8[3 * v14];
    if ( v10 > v16 )
      break;
    v13 = v14 - 1;
LABEL_9:
    if ( v13 < v11 )
      return 0LL;
  }
  v17 = v8[3 * v14 + 1];
  if ( v9 >= v17 )
  {
    v11 = v14 + 1;
    goto LABEL_9;
  }
  if ( v9 > v16 || v10 < v17 )
    return 0LL;
  if ( v14 > 0 )
  {
    v19 = &v8[3 * v14 - 3];
    do
    {
      if ( *v19 < v9 )
        break;
      --v14;
      --v15;
      v19 -= 3;
    }
    while ( v15 > 0 );
  }
  v20 = v14 + 1;
  v21 = 1;
  if ( v14 + 1 < v12 )
  {
    v22 = &v8[3 * v14 + 4];
    do
    {
      if ( *v22 > v10 )
        break;
      ++v20;
      ++v21;
      v22 += 3;
    }
    while ( v20 < v12 );
  }
  result = &v8[3 * v14];
  *a5 = v21;
  return result;
}
