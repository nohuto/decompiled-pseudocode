/*
 * XREFs of RtlpHpSegPageRangeShrink @ 0x180017F70
 * Callers:
 *     RtlpHpSegAlloc @ 0x1800184F8 (RtlpHpSegAlloc.c)
 *     RtlpHpFreeHeap @ 0x180027850 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x18002E070 (RtlpHpSegReAlloc.c)
 *     RtlpHpSegFree @ 0x18002E414 (RtlpHpSegFree.c)
 * Callees:
 *     RtlpHpSegPageRangeCoalesce @ 0x18001816C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegSegmentFree @ 0x180057A70 (RtlpHpSegSegmentFree.c)
 *     RtlpHpTlLogMemStats @ 0x180118400 (RtlpHpTlLogMemStats.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18012086C (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  unsigned int v5; // r14d
  __int64 v7; // rsi
  int v10; // r12d
  int v11; // eax
  int v12; // edx
  __int16 v13; // dx
  int v14; // edi
  __int64 v15; // rax
  char v16; // dl
  __int64 v17; // rsi
  char v18; // al
  __int64 v19; // rdx
  char v20; // cl
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 result; // rax
  __int64 *v24; // rdi
  _BYTE *v25; // rcx
  __int64 v26; // rdx
  __int64 *v27; // rcx
  char v28; // [rsp+70h] [rbp+18h] BYREF

  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v25 = (_BYTE *)(v7 + 56);
    v26 = v5 - 2;
    do
    {
      *v25 &= ~1u;
      v25 += 32;
      --v26;
    }
    while ( v26 );
  }
  v10 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 64);
  v11 = *(unsigned __int8 *)(a2 + 31);
  v12 = *(_DWORD *)(a2 + 28);
  v28 = -1;
  v13 = ~(_WORD)v12;
  if ( v11 == v5 )
  {
    LOWORD(v14) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v14 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v14;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_WORD *)(v7 + 28) = ~(v13 - v14);
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v15 = RtlpHpSegPageRangeCoalesce(a1, v7, a4, 0, (__int64)&v28);
  v16 = *(_BYTE *)(a1 + 13);
  v17 = v15;
  if ( (v16 & 0x10) != 0
    && (result = *(unsigned __int8 *)(v15 + 31), (_DWORD)result == 256 - *(unsigned __int8 *)(a1 + 10)) )
  {
    v24 = (__int64 *)(v17 & *(_QWORD *)a1);
    *(_DWORD *)v17 = -857879297;
    if ( v24 )
    {
      result = *v24;
      if ( *(__int64 **)(*v24 + 8) != v24 || (v27 = (__int64 *)v24[1], (__int64 *)*v27 != v24) )
        __fastfail(3u);
      *v27 = result;
      *(_QWORD *)(result + 8) = v27;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v16 & 7) != 0 )
      v18 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              (v17 & *(_QWORD *)a1) + ((v17 - (v17 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
              *(unsigned __int8 *)(v17 + 31) << *(_BYTE *)(a1 + 8));
    else
      v18 = 4;
    *(_BYTE *)(v17 + 30) = v18;
    v19 = *(_QWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v19 )
      v19 ^= a1 + 96;
    v20 = 0;
    v21 = *(_BYTE *)(a1 + 104) & 1;
    if ( v19 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v17 + 28) >= *(_DWORD *)(v19 + 28) )
        {
          v22 = *(_QWORD *)(v19 + 8);
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_23;
            v22 ^= v19;
          }
          if ( !v22 )
          {
LABEL_23:
            v20 = 1;
            break;
          }
        }
        else
        {
          v22 = *(_QWORD *)v19;
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v22 )
              goto LABEL_24;
            v22 ^= v19;
          }
          if ( !v22 )
          {
LABEL_24:
            v20 = 0;
            break;
          }
        }
        v19 = v22;
      }
    }
    LOBYTE(v21) = v20;
    RtlRbInsertNodeEx(a1 + 96, v19, v21, v17);
    result = *(__int16 *)(a1 + 22);
    _InterlockedExchangeAdd64((volatile signed __int64 *)(result + a1 + 16), (unsigned __int16)~*(_WORD *)(v17 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      result = RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    v24 = 0LL;
  }
  if ( !v10 )
    result = RtlReleaseSRWLockExclusive(a1 + 64);
  if ( v24 )
    return RtlpHpSegSegmentFree(a1, v24, 0x7FFFFFFFLL, 1LL);
  return result;
}
