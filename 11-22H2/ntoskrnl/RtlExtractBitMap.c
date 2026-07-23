/*
 * XREFs of RtlExtractBitMap @ 0x1405A7D10
 * Callers:
 *     RtlShiftLeftBitMap @ 0x1405A92A0 (RtlShiftLeftBitMap.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbx
  size_t v11; // rdi
  unsigned int *Buffer; // r9
  __int64 v13; // r10
  unsigned __int64 v14; // r11
  unsigned int *v15; // rdi
  unsigned __int64 v16; // r8
  unsigned int v17; // edx
  unsigned int v18; // edx
  unsigned int v19; // esi
  int v20; // r8d

  SizeOfBitMap = Destination->SizeOfBitMap;
  v6 = Source->SizeOfBitMap - TargetBit;
  if ( NumberOfBits <= (unsigned int)v6 )
    v6 = NumberOfBits;
  if ( v6 <= SizeOfBitMap )
    SizeOfBitMap = (unsigned int)v6;
  if ( SizeOfBitMap )
  {
    v8 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v13 = TargetBit & 0x1F;
      v14 = 32 - v13;
      v15 = &Source->Buffer[(unsigned __int64)TargetBit >> 5];
      if ( SizeOfBitMap < 0x20 )
        goto LABEL_15;
      v16 = SizeOfBitMap >> 5;
      SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
      do
      {
        v17 = ~((1 << v13) - 1) & *v15++;
        v18 = v17 >> v13;
        *Buffer = v18;
        *Buffer++ = v18 | ((((1 << v13) - 1) & *v15) << v14);
        --v16;
      }
      while ( v16 );
      if ( SizeOfBitMap )
      {
LABEL_15:
        v19 = *v15;
        v20 = *Buffer & ~((1 << SizeOfBitMap) - 1);
        if ( SizeOfBitMap > v14 )
          *Buffer = ((v19 & (-1 << v13)) >> v13) | ((v15[1] & ((1 << (SizeOfBitMap + v13 - 32)) - 1)) << v14) | v20;
        else
          *Buffer = v20 | ((v19 & (((1 << SizeOfBitMap) - 1) << v13)) >> v13);
      }
    }
    else
    {
      v9 = (unsigned int)SizeOfBitMap;
      v10 = SizeOfBitMap & 7;
      v11 = v9 >> 3;
      if ( v11 )
        memmove(Destination->Buffer, (char *)Source->Buffer + v8, v11);
      if ( v10 )
        *((_BYTE *)Destination->Buffer + v11) = *((_BYTE *)Source->Buffer + v8 + v11) & ((1 << v10) - 1) | *((_BYTE *)Destination->Buffer + v11) & ~((1 << v10) - 1);
    }
  }
}
