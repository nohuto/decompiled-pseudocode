/*
 * XREFs of RtlpHpVsContextGrowInPlace @ 0x18002F118
 * Callers:
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x180019AF0 (RtlpHpVsChunkSplit.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpVsCalculateChunkRequiredSize @ 0x18002F3C4 (RtlpHpVsCalculateChunkRequiredSize.c)
 *     RtlpHpVsChunkSetUnusedBytes @ 0x180084AE0 (RtlpHpVsChunkSetUnusedBytes.c)
 *     RtlpLogHeapFailure @ 0x18011F650 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextGrowInPlace(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // ecx
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int16 v15; // r11
  unsigned int v16; // r13d
  unsigned int v17; // ebx
  unsigned int v18; // r13d
  char v19; // dl
  int v20; // r12d
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // edx
  unsigned int *v25; // r8
  __int64 v27; // [rsp+30h] [rbp-48h] BYREF
  volatile signed __int64 *v28; // [rsp+38h] [rbp-40h]
  __int64 v29; // [rsp+40h] [rbp-38h]
  int v30; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v31; // [rsp+84h] [rbp+Ch]
  __int64 v32; // [rsp+98h] [rbp+20h]

  v32 = a4;
  v5 = a3 - 16;
  v6 = a3;
  if ( (*(_BYTE *)(a1 + 176) & 1) != 0 )
    return 0LL;
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, a1 ^ *(_DWORD *)(a1 + 128), a2, 0, 0LL, 0LL);
    return 0LL;
  }
  v9 = *(_QWORD *)v5;
  if ( ((HIDWORD(RtlpHpHeapGlobals) ^ HIDWORD(*(_QWORD *)v5) ^ HIDWORD(v5)) & 0xFF0000) == 0 )
  {
    RtlpLogHeapFailure(8, a1 ^ *(_DWORD *)(a1 + 128), a3, v5, 0LL, 0LL);
    return 0LL;
  }
  v10 = *(unsigned int *)(a4 + 24);
  v30 = *(_DWORD *)(a4 + 32);
  v16 = RtlpHpVsCalculateChunkRequiredSize(v10, &v30, RtlpHpHeapGlobals ^ v5);
  v17 = v12 ^ v9;
  if ( HIWORD(v17) <= v16 && (v18 = v16 - HIWORD(v17)) != 0 )
  {
    v19 = a5;
    v20 = a5 & 1;
    if ( (a5 & 1) == 0 )
    {
      v27 = 0LL;
      v29 = 0LL;
      v28 = (volatile signed __int64 *)a1;
      RtlAcquireSRWLockExclusive(a1, a5, v12, v13);
      v15 = *(_WORD *)(a2 + 32);
      v14 = RtlpHpHeapGlobals;
      v19 = a5;
    }
    v21 = v5 + 16 * ((unsigned __int64)v17 >> 16);
    if ( v21 >= a2 + 16 * ((unsigned __int64)v15 + 3)
      || (v22 = v21 ^ v14 ^ *(_QWORD *)v21, (v22 & 0xFF000000000000LL) != 0)
      || WORD1(v22) < v18
      || (v23 = RtlpHpVsChunkSplit(a1, a2, v21, v18, v19, &v27)) == 0 )
    {
      v6 = 0LL;
    }
    else
    {
      *(_WORD *)(v5 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ (((v23 << 16) + (v17 & 0xFFFF0000)) >> 16);
      v24 = WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ *(_DWORD *)v5) >> 16);
      v25 = (unsigned int *)(v5
                           + 16
                           * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ (unsigned __int64)*(unsigned int *)v5) >> 16)));
      if ( (unsigned __int64)v25 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      {
        v31 = v24 | v31 & 0xFFFF0000;
        *((_WORD *)v25 + 2) = WORD2(v25) ^ WORD2(RtlpHpHeapGlobals) ^ v31;
      }
      if ( *(_QWORD *)(v32 + 24) >= (unsigned __int64)(16 * v24 - 16) )
      {
        *(_DWORD *)(v5 + 8) &= ~0x100u;
      }
      else
      {
        *(_DWORD *)(v5 + 8) |= 0x100u;
        RtlpHpVsChunkSetUnusedBytes(v6);
      }
    }
    if ( !v20 )
      RtlReleaseSRWLockExclusive(v28);
  }
  else if ( 16 * (WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16 == v11 )
  {
    *(_DWORD *)(v5 + 8) &= ~0x100u;
  }
  else
  {
    RtlpHpVsChunkSetUnusedBytes(v6);
  }
  return v6;
}
