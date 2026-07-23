/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x180018680
 * Callers:
 *     RtlpHpSegAlloc @ 0x1800184F8 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18001A490 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x18001AD20 (RtlRbInsertNodeEx.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegHeapAddSegment @ 0x180055B88 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x180055BD4 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800563A4 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpTlLogMemStats @ 0x180118400 (RtlpHpTlLogMemStats.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1801201F4 (RtlpHpSegLargeRangeAllocate.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x18012086C (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, int a2, int a3)
{
  unsigned int v3; // edi
  unsigned int v6; // ebp
  unsigned int v7; // esi
  __int64 v8; // rax
  _RTL_RB_TREE *v9; // r15
  __int64 v10; // rbx
  unsigned __int64 Root; // r14
  int v12; // ecx
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  int v15; // ecx
  int v16; // ecx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int16 v19; // dx
  unsigned __int64 v20; // r8
  __int16 v21; // cx
  char v22; // dl
  char v23; // al
  _RTL_BALANCED_NODE *Min; // rcx
  BOOLEAN v25; // r8
  int v26; // edx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  unsigned int v29; // esi
  char *v31; // rax
  char v32; // cl
  __int64 v33; // r8
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // [rsp+68h] [rbp+10h]

  v3 = 1;
  v6 = (unsigned int)((1 << *(_BYTE *)(a1 + 9)) + a2 - 1) >> *(_BYTE *)(a1 + 9);
  v7 = v6 << 24;
  v36 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  v8 = *(_QWORD *)(a1 + 104);
  v9 = (_RTL_RB_TREE *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 96);
  if ( (v8 & 1) == 0 )
  {
LABEL_7:
    Root = 0LL;
    v12 = v8 & 1;
    v13 = 0LL;
    if ( !v10 )
    {
LABEL_33:
      v10 = v13;
      goto LABEL_10;
    }
    while ( 1 )
    {
      if ( v7 < *(_DWORD *)(v10 + 28) )
      {
        v28 = *(_QWORD *)v10;
        v13 = v10;
        if ( v12 && v28 )
          goto LABEL_38;
      }
      else
      {
        if ( v7 <= *(_DWORD *)(v10 + 28) )
          goto LABEL_10;
        v28 = *(_QWORD *)(v10 + 8);
        if ( v12 && v28 )
        {
LABEL_38:
          v10 ^= v28;
          goto LABEL_32;
        }
      }
      v10 = v28;
LABEL_32:
      if ( !v10 )
        goto LABEL_33;
    }
  }
  if ( v10 )
  {
    v10 ^= (unsigned __int64)v9;
    goto LABEL_7;
  }
  Root = 0LL;
  v10 = 0LL;
LABEL_10:
  if ( !v10 )
    goto LABEL_56;
  if ( (a3 & 0x800000) != 0 )
  {
    v10 = RtlpHpSegLargeRangeAllocate(a1, v10, v6, 1LL);
  }
  else
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(a1 + 96), (PRTL_BALANCED_NODE)v10);
    *(_OWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    v14 = ~(unsigned __int16)*(_DWORD *)(v10 + 28);
    *(_DWORD *)v10 = -857879331;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16), -(__int64)v14);
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  }
  if ( !v10 )
  {
LABEL_56:
    if ( !v36 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v33 = 0LL;
    if ( (a3 & 0x800000) != 0
      || (*(_BYTE *)(a1 + 13) & 7) == 3 && (BYTE1(*(_QWORD *)(a1 + 40)) == 3 || BYTE1(*(_QWORD *)(a1 + 40)) == 2) )
    {
      v33 = 2LL;
    }
    v34 = RtlpHpSegSegmentAllocate(a1, 0LL, v33);
    v35 = v34;
    if ( !v34 )
      return 0LL;
    RtlpHpSegSegmentInitialize(a1, v34, 0LL);
    v10 = v35 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v36 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpHpSegHeapAddSegment(a1, v35);
    if ( (a3 & 0x800000) != 0 )
      v10 = RtlpHpSegLargeRangeAllocate(a1, v10, v6, 0LL);
    v9 = (_RTL_RB_TREE *)(a1 + 96);
  }
  v15 = *(unsigned __int8 *)(v10 + 31);
  if ( v15 != v6 )
  {
    v16 = v15 - v6;
    v17 = v10 + 32LL * v6;
    *(_BYTE *)(v17 + 24) |= 2u;
    v18 = v17;
    *(_BYTE *)(32LL * (unsigned int)(v16 - 1) + v17 + 31) = v16 - 1;
    v19 = 0;
    *(_BYTE *)(v17 + 31) = v16;
    v20 = v17 + 32LL * (unsigned __int8)v16;
    if ( v17 < v20 )
    {
      do
      {
        v21 = *(unsigned __int8 *)(v18 + 25);
        v18 += 32LL;
        v19 += v21;
      }
      while ( v18 < v20 );
    }
    *(_DWORD *)v17 = -857879331;
    *(_WORD *)(v17 + 28) = ~v19;
    *(_BYTE *)(32LL * (v6 - 1) + v10 + 31) = v6 - 1;
    *(_BYTE *)(v10 + 31) = v6;
    *(_WORD *)(v10 + 28) = ~(*(_WORD *)(v17 + 28) - *(_WORD *)(v10 + 28));
    v22 = *(_BYTE *)(a1 + 13);
    if ( (v22 & 0x10) != 0 && *(unsigned __int8 *)(v17 + 31) == 256 - *(unsigned __int8 *)(a1 + 10) )
    {
      *(_DWORD *)v17 = -857879297;
      goto LABEL_42;
    }
    if ( (v22 & 7) != 0 )
      v23 = RtlpHpSegPageRangeComputeLargePageCost(
              a1,
              (v17 & *(_QWORD *)a1) + ((__int64)(v17 - (v17 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
              *(unsigned __int8 *)(v17 + 31) << *(_BYTE *)(a1 + 8));
    else
      v23 = 4;
    *(_BYTE *)(v17 + 30) = v23;
    Min = v9->Min;
    if ( ((unsigned __int8)Min & 1) != 0 )
    {
      if ( !v9->Root )
      {
        v25 = 0;
LABEL_40:
        RtlRbInsertNodeEx(v9, (PRTL_BALANCED_NODE)Root, v25, (PRTL_BALANCED_NODE)(v10 + 32LL * v6));
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
          (unsigned __int16)~*(_WORD *)(v17 + 28));
        if ( (RtlpHpHeapFeatures & 8) != 0 )
          RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
        goto LABEL_42;
      }
      Root = (unsigned __int64)v9->Root ^ (unsigned __int64)v9;
    }
    else
    {
      Root = (unsigned __int64)v9->Root;
    }
    v25 = 0;
    v26 = (unsigned __int8)Min & 1;
    if ( Root )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(v17 + 28) >= *(_DWORD *)(Root + 28) )
        {
          v27 = *(_QWORD *)(Root + 8);
          if ( v26 )
          {
            if ( !v27 )
              goto LABEL_53;
            v27 ^= Root;
          }
          if ( !v27 )
          {
LABEL_53:
            v25 = 1;
            goto LABEL_40;
          }
        }
        else
        {
          v27 = *(_QWORD *)Root;
          if ( v26 )
          {
            if ( !v27 )
              goto LABEL_40;
            v27 ^= Root;
          }
          if ( !v27 )
            goto LABEL_40;
        }
        Root = v27;
      }
    }
    goto LABEL_40;
  }
LABEL_42:
  v29 = v6 - 1;
  *(_BYTE *)(v10 + 24) |= HIBYTE(a3) & 0xC | 1;
  *(_BYTE *)(32LL * (v6 - 1) + v10 + 24) |= 1u;
  if ( !v36 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
  if ( v29 > 1 )
  {
    v31 = (char *)(v10 + 56);
    do
    {
      v31[7] = v3++;
      v32 = *v31;
      v31 += 32;
      *(v31 - 32) = v32 | 1;
    }
    while ( v3 < v29 );
  }
  return v10;
}
