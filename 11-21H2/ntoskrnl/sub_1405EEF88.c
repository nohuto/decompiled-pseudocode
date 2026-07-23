/*
 * XREFs of sub_1405EEF88 @ 0x1405EEF88
 * Callers:
 *     sub_1405EEDA4 @ 0x1405EEDA4 (sub_1405EEDA4.c)
 *     sub_1405EEE8C @ 0x1405EEE8C (sub_1405EEE8C.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 */

unsigned int *__fastcall sub_1405EEF88(void *a1, __int64 a2, __int64 a3, unsigned int a4, int *a5)
{
  __int64 v6; // rdi
  unsigned int *v8; // r11
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  int v12; // eax
  unsigned __int64 v13; // rdi
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r8
  unsigned int *result; // rax
  unsigned int *v19; // r8
  __int64 v20; // rax
  int v21; // r9d
  int v22; // edx
  unsigned int *v23; // r11
  unsigned int *v24; // r8
  ULONG v25[6]; // [rsp+20h] [rbp-18h] BYREF

  v25[0] = 0;
  v6 = a4;
  v8 = (unsigned int *)RtlImageDirectoryEntryToData(a1, 1u, 3u, v25);
  if ( !v8 )
    return 0LL;
  if ( !v25[0] )
    return 0LL;
  v9 = v25[0] / 0xCuLL;
  v10 = v25[0] % 0xCuLL;
  if ( v10 )
    return 0LL;
  v11 = a3 - a2;
  v12 = v9 - 1;
  v13 = v11 + v6;
  if ( (int)v9 - 1 < 0 )
    return 0LL;
  while ( 1 )
  {
    v14 = ((int)v10 + v12) >> 1;
    v15 = v14;
    v16 = v8[3 * v14];
    if ( v13 > v16 )
      break;
    v12 = v14 - 1;
LABEL_9:
    if ( v12 < (int)v10 )
      return 0LL;
  }
  v17 = v8[3 * v14 + 1];
  if ( v11 >= v17 )
  {
    LODWORD(v10) = v14 + 1;
    goto LABEL_9;
  }
  if ( v11 > v16 || v13 < v17 )
    return 0LL;
  if ( v14 > 0 )
  {
    v19 = &v8[3 * v14 - 3];
    do
    {
      if ( *v19 < v11 )
        break;
      --v14;
      --v15;
      v19 -= 3;
    }
    while ( v15 > 0 );
  }
  v20 = v14;
  v21 = 1;
  v22 = v14 + 1;
  v23 = &v8[3 * v20];
  if ( v22 < v9 )
  {
    v24 = v23 + 4;
    do
    {
      if ( *v24 > v13 )
        break;
      ++v22;
      ++v21;
      v24 += 3;
    }
    while ( v22 < v9 );
  }
  result = v23;
  *a5 = v21;
  return result;
}
