/*
 * XREFs of RtlpHpVsContextGrowInPlace @ 0x180071CF4
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpVsChunkSplit @ 0x180037F50 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsCalculateChunkRequiredSize @ 0x180071F7C (RtlpHpVsCalculateChunkRequiredSize.c)
 *     RtlpHpVsChunkSetUnusedBytes @ 0x180071F9C (RtlpHpVsChunkSetUnusedBytes.c)
 *     RtlpLogHeapFailure @ 0x1801229C0 (RtlpLogHeapFailure.c)
 */

__int64 __fastcall RtlpHpVsContextGrowInPlace(PRTL_SRWLOCK SRWLock, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  unsigned __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v9; // rbx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // r10
  unsigned int v13; // r12d
  unsigned int v14; // r12d
  char v15; // dl
  int v16; // r13d
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // edx
  unsigned int *v21; // r8
  __int64 v23; // [rsp+30h] [rbp-48h] BYREF
  PRTL_SRWLOCK SRWLocka; // [rsp+38h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-38h]
  int v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v27; // [rsp+84h] [rbp+Ch]
  __int64 v28; // [rsp+98h] [rbp+20h]

  v28 = a4;
  v5 = a3 - 16;
  v6 = a3;
  if ( (*(_BYTE *)&SRWLock[22].0 & 1) != 0 )
    return 0LL;
  if ( (((unsigned __int16)(*(_WORD *)(a2 + 32) ^ *(_WORD *)(a2 + 34)) ^ 0x2BED) & 0x7FFF) != 0 )
  {
    RtlpLogHeapFailure(18, *(_DWORD *)&SRWLock[16].0 ^ (unsigned int)SRWLock, a2, 0, 0LL, 0LL);
    return 0LL;
  }
  v9 = *(_QWORD *)v5 ^ RtlpHpHeapGlobals ^ v5;
  if ( (v9 & 0xFF000000000000LL) == 0 )
  {
    RtlpLogHeapFailure(8, *(_DWORD *)&SRWLock[16].0 ^ (unsigned int)SRWLock, a3, a3 - 16, 0LL, 0LL);
    return 0LL;
  }
  v10 = *(unsigned int *)(a4 + 24);
  v26 = *(_DWORD *)(a4 + 32);
  v13 = RtlpHpVsCalculateChunkRequiredSize(v10, &v26);
  if ( WORD1(v9) <= v13 && (v14 = v13 - WORD1(v9)) != 0 )
  {
    v15 = a5;
    v16 = a5 & 1;
    if ( (a5 & 1) == 0 )
    {
      v23 = 0LL;
      v25 = 0LL;
      SRWLocka = SRWLock;
      RtlAcquireSRWLockExclusive(SRWLock);
      v12 = RtlpHpHeapGlobals;
      v15 = a5;
    }
    v17 = v5 + 16 * ((unsigned __int64)(unsigned int)v9 >> 16);
    if ( v17 >= a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3)
      || (v18 = v17 ^ v12 ^ *(_QWORD *)v17, (v18 & 0xFF000000000000LL) != 0)
      || WORD1(v18) < v14
      || (v19 = RtlpHpVsChunkSplit(SRWLock, a2, v17, v14, v15, (__int64)&v23)) == 0 )
    {
      v6 = 0LL;
    }
    else
    {
      *(_WORD *)(v5 + 2) = WORD1(RtlpHpHeapGlobals) ^ WORD1(v5) ^ (((v19 << 16) + ((unsigned int)v9 & 0xFFFF0000)) >> 16);
      v20 = WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ *(_DWORD *)v5) >> 16);
      v21 = (unsigned int *)(v5
                           + 16
                           * (WORD1(RtlpHpHeapGlobals) ^ (((unsigned int)v5 ^ (unsigned __int64)*(unsigned int *)v5) >> 16)));
      if ( (unsigned __int64)v21 < a2 + 16 * ((unsigned __int64)*(unsigned __int16 *)(a2 + 32) + 3) )
      {
        v27 = v20 | v27 & 0xFFFF0000;
        *((_WORD *)v21 + 2) = WORD2(v21) ^ WORD2(RtlpHpHeapGlobals) ^ v27;
      }
      if ( *(_QWORD *)(v28 + 24) >= (unsigned __int64)(16 * v20 - 16) )
      {
        *(_DWORD *)(v5 + 8) &= ~0x100u;
      }
      else
      {
        *(_DWORD *)(v5 + 8) |= 0x100u;
        RtlpHpVsChunkSetUnusedBytes(v6);
      }
    }
    if ( !v16 )
      RtlReleaseSRWLockExclusive(SRWLocka);
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
