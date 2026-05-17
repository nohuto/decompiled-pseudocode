/*
 * XREFs of RtlpHpSegFreeRangeInsert @ 0x180034BE4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180035030 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x18005A438 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegContextReserve @ 0x180066748 (RtlpHpSegContextReserve.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x18012227C (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180039370 (RtlRbInsertNodeEx.c)
 *     RtlpHpTlLogMemStats @ 0x1801187FC (RtlpHpTlLogMemStats.c)
 *     RtlpHpSegPageRangeComputeLargePageCost @ 0x1801228F0 (RtlpHpSegPageRangeComputeLargePageCost.c)
 */

__int64 __fastcall RtlpHpSegFreeRangeInsert(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v6; // al
  __int64 v7; // rdx
  __int64 v8; // rcx

  v3 = 0LL;
  if ( !(_DWORD)a3
    && (*(_BYTE *)(a1 + 13) & 0x10) != 0
    && (a3 = 256 - (unsigned int)*(unsigned __int8 *)(a1 + 10), *(unsigned __int8 *)(a2 + 31) == (_DWORD)a3) )
  {
    v3 = a2 & *(_QWORD *)a1;
    *(_DWORD *)a2 = -857879297;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 13) & 7) != 0 )
      v6 = RtlpHpSegPageRangeComputeLargePageCost(
             a1,
             (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8)),
             *(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8));
    else
      v6 = 4;
    *(_BYTE *)(a2 + 30) = v6;
    v7 = *(_QWORD *)(a1 + 96);
    if ( (*(_BYTE *)(a1 + 104) & 1) != 0 && v7 )
      v7 ^= a1 + 96;
    LOBYTE(a3) = 0;
    if ( v7 )
    {
      while ( 1 )
      {
        if ( *(_DWORD *)(a2 + 28) >= *(_DWORD *)(v7 + 28) )
        {
          v8 = *(_QWORD *)(v7 + 8);
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v8 )
              goto LABEL_17;
            v8 ^= v7;
          }
          if ( !v8 )
          {
LABEL_17:
            LOBYTE(a3) = 1;
            break;
          }
        }
        else
        {
          v8 = *(_QWORD *)v7;
          if ( (*(_BYTE *)(a1 + 104) & 1) != 0 )
          {
            if ( !v8 )
              break;
            v8 ^= v7;
          }
          if ( !v8 )
            break;
        }
        v7 = v8;
      }
    }
    RtlRbInsertNodeEx(a1 + 96, v7, a3, a2);
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(__int16 *)(a1 + 22) + a1 + 16),
      (unsigned __int16)~*(_WORD *)(a2 + 28));
    if ( (RtlpHpHeapFeatures & 8) != 0 )
      RtlpHpTlLogMemStats(*(_QWORD *)(a1 + 56), a1 + *(__int16 *)(a1 + 22));
  }
  return v3;
}
