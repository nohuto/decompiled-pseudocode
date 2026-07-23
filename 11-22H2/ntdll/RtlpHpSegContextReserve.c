/*
 * XREFs of RtlpHpSegContextReserve @ 0x180066748
 * Callers:
 *     RtlpHpHeapCreate @ 0x180066018 (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlpHpSegFreeRangeInsert @ 0x180034BE4 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegSegmentAllocate @ 0x18004AB08 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegHeapAddSegment @ 0x1800670EC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x180067138 (RtlpHpSegSegmentInitialize.c)
 */

__int64 __fastcall RtlpHpSegContextReserve(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbp
  unsigned int v5; // edi
  unsigned int v6; // ebx
  unsigned __int64 v7; // r13
  unsigned int v9; // r12d
  __int64 v10; // rax
  __int64 v11; // r15

  v3 = (unsigned __int64)(a3 + 4095) >> 12;
  v5 = (256 - *(unsigned __int8 *)(a1 + 10)) << *(_BYTE *)(a1 + 9);
  v6 = 0;
  v7 = ((unsigned __int64)(unsigned int)-*(_DWORD *)a1 + a2 - 1) / (unsigned int)-*(_DWORD *)a1;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = v3;
      if ( v3 > v5 )
        v9 = v5;
      v3 = (v3 - v5) & -(__int64)(v5 < v3);
      v10 = RtlpHpSegSegmentAllocate(a1, v9, 0);
      v11 = v10;
      if ( !v10 )
        break;
      RtlpHpSegSegmentInitialize(a1, v10, v9);
      RtlpHpSegFreeRangeInsert(a1, v11 + 32LL * *(unsigned __int8 *)(a1 + 10), 1);
      RtlpHpSegHeapAddSegment(a1, v11);
      if ( !--v7 )
        return v6;
    }
    return (unsigned int)-1073741670;
  }
  return v6;
}
