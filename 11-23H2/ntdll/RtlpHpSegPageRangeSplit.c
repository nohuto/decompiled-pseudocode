/*
 * XREFs of RtlpHpSegPageRangeSplit @ 0x180035100
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x180034ED0 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegLargeRangeAllocate @ 0x1801236FC (RtlpHpSegLargeRangeAllocate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeSplit(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ecx
  int v6; // ecx
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rax
  __int16 v9; // dx
  unsigned __int64 v10; // r8
  __int16 v11; // cx
  unsigned __int64 result; // rax

  v3 = *(unsigned __int8 *)(a2 + 31);
  if ( v3 == a3 )
    return 0LL;
  v6 = v3 - a3;
  v7 = a2 + 32LL * a3;
  *(_BYTE *)(v7 + 24) |= 2u;
  v8 = v7;
  *(_BYTE *)(32LL * (unsigned int)(v6 - 1) + v7 + 31) = v6 - 1;
  v9 = 0;
  *(_BYTE *)(v7 + 31) = v6;
  v10 = v7 + 32LL * (unsigned __int8)v6;
  if ( v7 < v10 )
  {
    do
    {
      v11 = *(unsigned __int8 *)(v8 + 25);
      v8 += 32LL;
      v9 += v11;
    }
    while ( v8 < v10 );
  }
  *(_DWORD *)v7 = -857879331;
  result = v7;
  *(_WORD *)(v7 + 28) = ~v9;
  *(_BYTE *)(32LL * (a3 - 1) + a2 + 31) = a3 - 1;
  *(_BYTE *)(a2 + 31) = a3;
  *(_WORD *)(a2 + 28) = ~(*(_WORD *)(v7 + 28) - *(_WORD *)(a2 + 28));
  return result;
}
