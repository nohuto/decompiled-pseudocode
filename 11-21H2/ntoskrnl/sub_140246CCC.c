/*
 * XREFs of sub_140246CCC @ 0x140246CCC
 * Callers:
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 * Callees:
 *     RtlSetBits @ 0x1402E4C80 (RtlSetBits.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 */

__int64 __fastcall sub_140246CCC(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, int a3)
{
  unsigned int v4; // r14d
  ULONG v7; // ebx
  ULONG SizeOfBitMap; // r9d
  PULONG Buffer; // rdx
  ULONG *v10; // r10
  ULONG *v11; // r8
  unsigned int v12; // edx
  int v13; // r9d
  ULONG i; // eax
  ULONG v16; // edi
  ULONG *v17; // r8

  v4 = 0;
  RtlSetBits(BitMapHeader, StartingIndex, 1u);
  v7 = 0;
  if ( StartingIndex )
  {
    while ( 1 )
    {
      SizeOfBitMap = BitMapHeader->SizeOfBitMap;
      if ( BitMapHeader->SizeOfBitMap <= v7 )
        goto LABEL_20;
      Buffer = BitMapHeader->Buffer;
      v10 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
      v11 = &Buffer[(unsigned __int64)v7 >> 5];
      if ( v11 != v10 && (*v11 | *((_DWORD *)qword_140015FA0 + (v7 & 0x1F))) == 0xFFFFFFFF )
      {
        v7 = v7 - (v7 & 0x1F) + 32;
        for ( ++v11; v11 < v10 && *v11 == -1; ++v11 )
          v7 += 32;
      }
      for ( ; v7 < SizeOfBitMap; ++v7 )
      {
        if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v7) )
          break;
      }
      v12 = 0;
      if ( v11 == v10 )
        goto LABEL_14;
      v13 = v7 & 0x1F;
      if ( (*v11 & ~*((_DWORD *)qword_140015FA0 + (v7 & 0x1F))) != 0 )
        goto LABEL_14;
      v12 = 32 - v13;
      if ( v13 != 33 )
        break;
LABEL_18:
      if ( v12 && v7 < StartingIndex )
      {
        v16 = a3 - v4;
        if ( v12 <= a3 - v4 )
          v16 = v12;
        RtlSetBits(BitMapHeader, v7, v16);
        v4 += v16;
        if ( v4 != a3 )
        {
          v7 += v16;
          if ( v7 < StartingIndex )
            continue;
        }
      }
      goto LABEL_20;
    }
    v17 = v11 + 1;
    while ( v17 < v10 && !*v17 )
    {
      ++v17;
      v12 += 32;
      if ( v12 == -1 )
        goto LABEL_18;
    }
LABEL_14:
    for ( i = v12 + v7; i < BitMapHeader->SizeOfBitMap; ++v12 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v12 == -1 )
        break;
      ++i;
    }
    goto LABEL_18;
  }
LABEL_20:
  RtlClearBits(BitMapHeader, StartingIndex, 1u);
  return v4;
}
