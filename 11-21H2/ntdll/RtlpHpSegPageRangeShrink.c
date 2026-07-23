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

void __fastcall RtlpHpSegPageRangeShrink(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v4; // r14d
  __int64 v6; // rsi
  int v9; // r12d
  int v10; // eax
  int v11; // edx
  __int16 v12; // dx
  int v13; // edi
  __int64 v14; // rax
  char v15; // dl
  __int64 v16; // rsi
  char v17; // al
  __int64 v18; // rdx
  BOOLEAN v19; // cl
  __int64 v20; // rcx
  _QWORD *v21; // rdi
  _BYTE *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  _QWORD *v25; // rcx
  char v26; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 31) - a3;
  v6 = a2 + 32LL * a3;
  if ( v4 - 1 > 1 )
  {
    v22 = (_BYTE *)(v6 + 56);
    v23 = v4 - 2;
    do
    {
      *v22 &= ~1u;
      v22 += 32;
      --v23;
    }
    while ( v23 );
  }
  v9 = a4 & 1;
  if ( (a4 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v10 = *(unsigned __int8 *)(a2 + 31);
  v11 = *(_DWORD *)(a2 + 28);
  v26 = -1;
  v12 = ~(_WORD)v11;
  if ( v10 == v4 )
  {
    LOWORD(v13) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v13 = a3 << *(_BYTE *)(a1 + 9);
    *(_WORD *)(a2 + 28) = ~(_WORD)v13;
  }
  *(_BYTE *)(v6 + 24) |= 2u;
  *(_BYTE *)(32LL * (v4 - 1) + v6 + 31) = v4 - 1;
  *(_WORD *)(v6 + 28) = ~(v12 - v13);
  *(_BYTE *)(v6 + 31) = v4;
  *(_DWORD *)v6 = -857879331;
  *(_BYTE *)(v6 + 24) &= 0xF3u;
  v14 = RtlpHpSegPageRangeCoalesce(a1, (__int64)&v26);
  v15 = *(_BYTE *)(a1 + 13);
  v16 = v14;
  if ( (v15 & 0x10) != 0 && *(unsigned __int8 *)(v14 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
  {
    v21 = (_QWORD *)(v14 & *(_QWORD *)a1);
    *(_DWORD *)v14 = -857879297;
    if ( v21 )
    {
      v24 = *v21;
      if ( *(_QWORD **)(*v21 + 8LL) != v21 || (v25 = (_QWORD *)v21[1], (_QWORD *)*v25 != v21) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      --*(_QWORD *)(a1 + 88);
    }
  }
  else
  {
    if ( (v15 & 7) != 0 )
      v17 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              (v14 & *(_QWORD *)a1) + ((v14 - (v14 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
              *(unsigned __int8 *)(v14 + 31) << *(_BYTE *)(a1 + 8));
    else
      v17 = 4;
    *(_BYTE *)(v16 + 30) = v17;
    v18 = *(_QWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v18 )
      v18 ^= a1 + 96;
    v19 = 0;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v16 + 28) >= *(_DWORD *)(v18 + 28) )
        {
          v20 = *(_QWORD *)(v18 + 8);
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_23;
            v20 ^= v18;
          }
          if ( !v20 )
          {
LABEL_23:
            v19 = 1;
            break;
          }
        }
        else
        {
          v20 = *(_QWORD *)v18;
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v20 )
              goto LABEL_24;
            v20 ^= v18;
          }
          if ( !v20 )
          {
LABEL_24:
            v19 = 0;
            break;
          }
        }
        v18 = v20;
      }
    }
    RtlRbInsertNodeEx((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v18, v19, (PRTL_BALANCED_NODE)v16);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(v16 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
    v21 = 0LL;
  }
  if ( !v9 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v21 )
    RtlpHpSegSegmentFree(a1);
}
