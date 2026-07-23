/*
 * XREFs of RtlpHeapFindListLookupEntry @ 0x180044AD0
 * Callers:
 *     RtlpFindEntry @ 0x180044770 (RtlpFindEntry.c)
 *     RtlpFindUCREntry @ 0x1800464EC (RtlpFindUCREntry.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 *__fastcall RtlpHeapFindListLookupEntry(__int64 a1, __int64 a2, char a3, int a4, int a5)
{
  __int64 *v5; // rsi
  unsigned int v6; // r15d
  __int64 v7; // rbx
  __int64 v11; // rax
  _DWORD *v12; // r12
  int v13; // ebp
  int v14; // ecx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 *i; // rdi
  __int64 v20; // r8
  unsigned int *v21; // r9
  unsigned int v22; // edx
  int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  int v27; // [rsp+38h] [rbp-50h]
  int v28; // [rsp+48h] [rbp-40h]
  int v29; // [rsp+58h] [rbp-30h]

  v5 = *(__int64 **)(a2 + 32);
  v6 = a4 - *(_DWORD *)(a2 + 24);
  v7 = 0LL;
  v11 = v5[1];
  if ( v5 == (__int64 *)v11 )
    return v5;
  v12 = (_DWORD *)(a1 + 124);
  if ( a3 )
  {
    v27 = *(_DWORD *)(v11 - 16 + 8);
    if ( *v12 )
    {
      v27 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v11 - 16 + 8);
      if ( HIBYTE(v27) != ((unsigned __int8)v27 ^ (unsigned __int8)(BYTE1(v27) ^ BYTE2(v27))) )
        RtlpLogHeapFailure(3, a1, v11 - 16, 0, 0LL, 0LL);
    }
    v13 = a5;
    v14 = a5 - (unsigned __int16)v27;
  }
  else
  {
    v13 = a5;
    v14 = a5 - *(_DWORD *)(v11 + 40);
  }
  if ( v14 > 0 )
    return v5;
  v15 = *v5;
  if ( a3 )
  {
    v28 = *(_DWORD *)(v15 - 16 + 8);
    if ( *v12 )
    {
      v28 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v15 - 16 + 8);
      if ( HIBYTE(v28) != ((unsigned __int8)v28 ^ (unsigned __int8)(BYTE1(v28) ^ BYTE2(v28))) )
        RtlpLogHeapFailure(3, a1, v15 - 16, 0, 0LL, 0LL);
    }
    v16 = v13 - (unsigned __int16)v28;
  }
  else
  {
    v16 = v13 - *(_DWORD *)(v15 + 40);
  }
  if ( v16 <= 0 )
    return (__int64 *)*v5;
  if ( *(_QWORD *)a2 || a4 != *(_DWORD *)(a2 + 8) - 1 )
  {
    v20 = v6 >> 5;
    v21 = (unsigned int *)(*(_QWORD *)(a2 + 40) + 4 * v20);
    v22 = *v21 & (-1 << (v6 & 0x1F));
    if ( v22 )
    {
LABEL_22:
      if ( (_WORD)v22 )
      {
        if ( (_BYTE)v22 )
          v23 = RtlpBitsClearLow[(unsigned __int8)v22];
        else
          v23 = RtlpBitsClearLow[BYTE1(v22)] + 8;
      }
      else if ( (v22 & 0xFF0000) != 0 )
      {
        v23 = RtlpBitsClearLow[BYTE2(v22)] + 16;
      }
      else
      {
        v23 = RtlpBitsClearLow[(unsigned __int64)v22 >> 24] + 24;
      }
      v24 = 32 * v20 + v23;
      v25 = 2 * v24;
      if ( !*(_DWORD *)(a2 + 12) )
        v25 = v24;
      return *(__int64 **)(*(_QWORD *)(a2 + 48) + 8LL * v25);
    }
    else
    {
      while ( (unsigned int)v20 <= ((unsigned int)(*(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 24)) >> 5) - 1 )
      {
        ++v21;
        LODWORD(v20) = v20 + 1;
        v22 = *v21;
        if ( *v21 )
          goto LABEL_22;
      }
    }
  }
  else
  {
    v17 = 2 * v6;
    if ( !*(_DWORD *)(a2 + 12) )
      v17 = v6;
    for ( i = *(__int64 **)(*(_QWORD *)(a2 + 48) + 8 * v17); v5 != i; i = (__int64 *)*i )
    {
      if ( a3 )
      {
        v29 = *((_DWORD *)i - 2);
        if ( *v12 )
        {
          v29 = *(_DWORD *)(a1 + 136) ^ *((_DWORD *)i - 2);
          if ( HIBYTE(v29) != ((unsigned __int8)v29 ^ (unsigned __int8)(BYTE1(v29) ^ BYTE2(v29))) )
            RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
        }
        v26 = v13 - (unsigned __int16)v29;
      }
      else
      {
        v26 = v13 - *((_DWORD *)i + 10);
      }
      if ( v26 <= 0 )
        return i;
    }
  }
  return (__int64 *)v7;
}
