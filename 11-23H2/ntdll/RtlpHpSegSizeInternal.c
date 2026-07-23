/*
 * XREFs of RtlpHpSegSizeInternal @ 0x180041134
 * Callers:
 *     RtlpHpReAllocateHeap @ 0x180041D6C (RtlpHpReAllocateHeap.c)
 *     RtlpHpSizeHeapInternal @ 0x180045A84 (RtlpHpSizeHeapInternal.c)
 *     RtlpHpSegReportPageRange @ 0x180123EEC (RtlpHpSegReportPageRange.c)
 * Callees:
 *     RtlpHpVsChunkSize @ 0x1800632A4 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegSizeInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v5; // r9
  unsigned int v6; // r11d
  int v7; // edi
  __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned int v10; // eax
  char v11; // cl
  unsigned __int64 v12; // r10
  int v13; // edx
  __int64 v14; // r10
  unsigned int v15; // ecx
  unsigned __int64 v16; // r9
  unsigned int v17; // edx
  __int16 v18; // ax
  int v19; // edx
  int v22; // eax
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v5 )
  {
    if ( a5 )
    {
      v22 = *(_WORD *)(a2 + 8) & 1;
      if ( v22 )
        _InterlockedOr(v23, 0);
      *a5 = v22;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
  {
    v6 = (unsigned int)v5 >> 12;
    v7 = (unsigned __int16)(qword_180187F48 ^ *(_WORD *)(v5 + 40) ^ ((unsigned int)v5 >> 12));
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24)
                   + 8LL * RtlpLfhBucketIndexMap[(unsigned __int64)(unsigned int)(v7 + 15) >> 4]
                   + 128);
    v9 = a3 - (((unsigned int)qword_180187F48 ^ *(_DWORD *)(v5 + 40) ^ ((unsigned int)v5 >> 12)) >> 16) - v5;
    v10 = *(_DWORD *)(v8 + 72);
    v11 = *(_BYTE *)(v8 + 76);
    if ( v10 )
    {
      v12 = (v9 * (unsigned __int64)v10) >> v11;
      v13 = v9 - v12 * v7;
    }
    else
    {
      LODWORD(v12) = v9 >> v11;
      v13 = ((1 << v11) - 1) & v9;
    }
    if ( v13 )
      return -1LL;
    v14 = *(_QWORD *)(v5 + 8 * ((unsigned __int64)(unsigned int)(2 * v12) >> 6) + 48) >> ((2 * v12) & 0x3F);
    if ( (v14 & 1) == 0 )
    {
      return -1LL;
    }
    else
    {
      v15 = (unsigned __int16)qword_180187F48 ^ (unsigned __int16)(*(_WORD *)(v5 + 40) ^ v6);
      if ( (v14 & 2) != 0 )
      {
        v16 = (unsigned __int16)qword_180187F48 ^ (unsigned __int64)(unsigned __int16)(*(_WORD *)(v5 + 40) ^ v6);
        v17 = *(unsigned __int16 *)(v16 + a3 - 2);
        v18 = *(_WORD *)(v16 + a3 - 2);
        if ( (v17 & 0x4000) != 0 )
        {
          _InterlockedOr(v23, 0);
          v18 = *(_WORD *)(v16 + a3 - 2);
        }
        v19 = (v17 >> 14) & 1;
        if ( v18 < 0 )
          --v15;
        else
          v15 -= v18 & 0x3FFF;
      }
      else
      {
        v19 = 0;
      }
      if ( a5 )
        *a5 = v19;
      return v15;
    }
  }
  else
  {
    return RtlpHpVsChunkSize(*(_QWORD *)(a1 + 32), a3, a3, a5);
  }
}
