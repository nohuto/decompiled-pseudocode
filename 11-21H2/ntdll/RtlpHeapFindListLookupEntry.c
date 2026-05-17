/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x1800234B8
 * Callers:
 *     RtlpFindUCREntry @ 0x1800210AC (RtlpFindUCREntry.c)
 *     RtlpFindEntry @ 0x180021DC0 (RtlpFindEntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  __int64 *v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v11; // rax
  int v12; // r8d
  int v13; // eax
  int v14; // r12d
  int v15; // ecx
  __int64 v16; // rax
  int v17; // r8d
  int v18; // eax
  int v19; // edi
  __int64 v20; // rcx
  __int64 *i; // rdi
  int v22; // ecx
  __int64 v24; // r8
  unsigned int *v25; // r10
  unsigned int v26; // edx
  int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // [rsp+38h] [rbp-50h]
  int v31; // [rsp+48h] [rbp-40h]
  int v32; // [rsp+58h] [rbp-30h]

  v5 = *(__int64 **)(a2 + 32);
  v6 = a4 - *(_DWORD *)(a2 + 24);
  v7 = 0LL;
  v11 = v5[1];
  if ( v5 == (__int64 *)v11 )
    return v5;
  if ( a3 )
  {
    v12 = v11 - 16;
    v13 = *(_DWORD *)(v11 - 16 + 8);
    LOWORD(v30) = v13;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v30 = v13 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v30) != ((unsigned __int8)v30 ^ (unsigned __int8)(BYTE1(v30) ^ BYTE2(v30))) )
        RtlpLogHeapFailure(3, a1, v12, 0, 0LL, 0LL);
    }
    v14 = a5;
    v15 = a5 - (unsigned __int16)v30;
  }
  else
  {
    v14 = a5;
    v15 = a5 - *(_DWORD *)(v11 + 40);
  }
  if ( v15 > 0 )
    return v5;
  v16 = *v5;
  if ( a3 )
  {
    v17 = v16 - 16;
    v18 = *(_DWORD *)(v16 - 16 + 8);
    LOWORD(v31) = v18;
    if ( *(_DWORD *)(a1 + 124) )
    {
      v31 = v18 ^ *(_DWORD *)(a1 + 136);
      if ( HIBYTE(v31) != ((unsigned __int8)v31 ^ (unsigned __int8)(BYTE1(v31) ^ BYTE2(v31))) )
        RtlpLogHeapFailure(3, a1, v17, 0, 0LL, 0LL);
    }
    v19 = v14 - (unsigned __int16)v31;
  }
  else
  {
    v19 = v14 - *(_DWORD *)(v16 + 40);
  }
  if ( v19 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v24 = v6 >> 5;
    v25 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v24);
    v26 = *v25 & (-1 << (v6 & 0x1F));
    if ( v26 )
    {
LABEL_32:
      if ( (_WORD)v26 )
      {
        if ( (_BYTE)v26 )
          v27 = RtlpBitsClearLow[(unsigned __int8)v26];
        else
          v27 = RtlpBitsClearLow[BYTE1(v26)] + 8;
      }
      else if ( (v26 & 0xFF0000) != 0 )
      {
        v27 = RtlpBitsClearLow[BYTE2(v26)] + 16;
      }
      else
      {
        v27 = RtlpBitsClearLow[(unsigned __int64)v26 >> 24] + 24;
      }
      v28 = 32 * v24 + v27;
      v29 = 2 * v28;
      if ( !*(_DWORD *)(a2 + 12) )
        v29 = v28;
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8LL * v29);
    }
    else
    {
      while ( (unsigned int)v24 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
      {
        ++v25;
        LODWORD(v24) = v24 + 1;
        v26 = *v25;
        if ( *v25 )
          goto LABEL_32;
      }
    }
  }
  else
  {
    v20 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v20 = v6;
    for ( i = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v20); v5 != i; i = (__int64 *)*i )
    {
      if ( a3 )
      {
        v32 = *((_DWORD *)i - 2);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v32 = *((_DWORD *)i - 2) ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v32) != ((unsigned __int8)v32 ^ (unsigned __int8)(BYTE1(v32) ^ BYTE2(v32))) )
            RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
        }
        v22 = v14 - (unsigned __int16)v32;
      }
      else
      {
        v22 = v14 - *((_DWORD *)i + 10);
      }
      if ( v22 <= 0 )
        return i;
    }
  }
  return (__int64 *)v7;
}
