/*
 * XREFs of RtlpHpSegPageRangeCoalesce @ 0x18001816C
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1800150D8 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeShrink @ 0x180017F70 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpSegFreeRangeRemove @ 0x180016948 (RtlpHpSegFreeRangeRemove.c)
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001B320 (RtlReleaseSRWLockExclusive.c)
 *     TpSetTimerEx @ 0x18001C6D0 (TpSetTimerEx.c)
 *     RtlpHpSegPageRangeCommit @ 0x180023E30 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpTlLogGCScheduled @ 0x180118348 (RtlpHpTlLogGCScheduled.c)
 */

__int64 __fastcall RtlpHpSegPageRangeCoalesce(__int64 a1, __int64 a2, char a3, int a4, _BYTE *a5)
{
  _BYTE *v5; // r13
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned int v12; // ebp
  __int64 v13; // rdi
  char v14; // cl
  char v15; // dl
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // rcx
  char v23; // al
  __int64 v24; // [rsp+78h] [rbp+10h] BYREF

  v5 = a5;
  while ( 1 )
  {
    v10 = 0LL;
    v11 = (a2 - (a2 & *(_QWORD *)a1)) >> 5;
    v12 = (unsigned __int16)~*(_WORD *)(a2 + 28);
    if ( (unsigned int)v11 + *(unsigned __int8 *)(a2 + 31) < 0x100 )
    {
      v10 = a2 + 32LL * *(unsigned __int8 *)(a2 + 31);
      if ( (*(_BYTE *)(v10 + 24) & 1) != 0 )
        v10 = 0LL;
    }
    if ( (unsigned int)v11 > *(unsigned __int8 *)(a1 + 10) )
    {
      v13 = a2 - 32;
      if ( (*(_BYTE *)(a2 - 32 + 24) & 2) == 0 )
        v13 += -32LL * *(unsigned __int8 *)(v13 + 31);
      if ( (*(_BYTE *)(v13 + 24) & 1) == 0 && v13 )
      {
        RtlpHpSegFreeRangeRemove(a1, v13);
        *(_BYTE *)(v13 + 31) += *(_BYTE *)(a2 + 31);
        v12 += (unsigned __int16)~*(_WORD *)(v13 + 28);
        *(_WORD *)(v13 + 28) = ~(_WORD)v12;
        *(_BYTE *)(a2 + 24) &= (*(_BYTE *)(a2 + 31) <= 1u) - 4;
        a2 = v13;
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(v13 + 31) - 1) + v13 + 31) = *(_BYTE *)(v13 + 31) - 1;
      }
    }
    *(_BYTE *)(a2 + 24) |= 0x11u;
    if ( v10 )
    {
      RtlpHpSegFreeRangeRemove(a1, v10);
      v14 = *(_BYTE *)(a2 + 31);
      if ( v14 != 1 )
      {
        *(_BYTE *)(32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1) + a2 + 24) &= ~1u;
        v14 = *(_BYTE *)(a2 + 31);
      }
      *(_BYTE *)(a2 + 31) = v14 + *(_BYTE *)(v10 + 31);
      v12 += (unsigned __int16)~*(_WORD *)(v10 + 28);
      *(_WORD *)(a2 + 28) = ~(_WORD)v12;
      *(_BYTE *)(v10 + 24) &= ~2u;
      v15 = *(_BYTE *)(a2 + 31) - 1;
      v16 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
      *(_BYTE *)(v16 + a2 + 24) |= 1u;
      *(_BYTE *)(v16 + a2 + 31) = v15;
    }
    if ( !v12 )
      break;
    if ( !a4 && (*(_BYTE *)(a1 + 13) & 8) == 0 )
    {
      v17 = *(__int16 *)(a1 + 22);
      v18 = *(_QWORD *)(v17 + a1 + 8) >> *(_BYTE *)(a1 + 11);
      if ( v18 <= 8 )
        v18 = 8LL;
      v19 = *(_QWORD *)(v17 + a1 + 8) >> *(_BYTE *)(a1 + 12);
      if ( v19 <= 8 )
        v19 = 8LL;
      v20 = v12 + *(_QWORD *)(v17 + a1 + 16) + *(_QWORD *)(v17 + a1 + 24);
      if ( v20 > v18 )
      {
        if ( (RtlpHpLfhPerfFlags & 0x40) == 0 || byte_18017A188 || !RtlpHpGCTimerInitialized )
          goto LABEL_30;
        if ( !_InterlockedCompareExchange(&RtlpHpGCTimerScheduled, 1, 0) )
        {
          TpSetTimerEx(RtlpHpGCTimer, &RtlpHpGCInterval, 0, 0x1388u);
          if ( (RtlpHpHeapFeatures & 8) != 0 )
            RtlpHpTlLogGCScheduled();
        }
      }
      if ( v20 <= v19 )
        break;
    }
LABEL_30:
    if ( (a3 & 1) == 0 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    RtlpHpSegPageRangeCommit(a1, 0, (__int64)&v24);
    if ( (a3 & 1) == 0 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 64));
    v23 = *(_BYTE *)(a2 + 24) & 0xEF;
    *v5 = -1;
    *(_BYTE *)(a2 + 24) = v23;
  }
  v21 = 32LL * ((unsigned int)*(unsigned __int8 *)(a2 + 31) - 1);
  *(_BYTE *)(v21 + a2 + 24) &= ~1u;
  *(_BYTE *)(a2 + 24) &= 0xEEu;
  return a2;
}
