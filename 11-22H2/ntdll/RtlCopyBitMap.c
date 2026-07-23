/*
 * XREFs of RtlCopyBitMap @ 0x1800F6530
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x18011CD9C (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800F8A14 (RtlpCopyBitMapTailToHead.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v8; // r11
  unsigned int *v9; // r8
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rbx
  size_t v13; // rdi
  _BYTE *v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // rbp
  int v17; // esi
  int v18; // edi
  int v19; // r13d
  int v20; // esi
  unsigned __int64 v21; // r14
  int v22; // edi
  unsigned int v23; // eax
  unsigned int v24; // r14d

  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= (unsigned int)SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v8 = Source->Buffer;
    v9 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v8 > v9 || v9 > &v8[(SizeOfBitMap - 1) >> 5] )
    {
      v10 = (unsigned __int64)TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v15 = TargetBit & 0x1F;
        v16 = 32 - v15;
        v17 = 1 << (32 - v15);
        v18 = 1 << v15;
        if ( SizeOfBitMap < 0x20 )
          goto LABEL_16;
        v19 = *v9;
        v20 = v17 - 1;
        v21 = SizeOfBitMap >> 5;
        v22 = v18 - 1;
        SizeOfBitMap += -32LL * (SizeOfBitMap >> 5);
        do
        {
          *v9++ = ((*v8 & v20) << v15) | v19 & v22;
          v23 = *v8++ & ~v20;
          v19 = (v23 >> v16) | *v9 & ~v22;
          *v9 = v19;
          --v21;
        }
        while ( v21 );
        v18 = 1 << v15;
        v17 = 1 << (32 - v15);
        if ( SizeOfBitMap )
        {
LABEL_16:
          v24 = *v8;
          if ( SizeOfBitMap > v16 )
          {
            *v9 = *v9 & (v18 - 1) | ((v24 & (v17 - 1)) << v15);
            v9[1] = ((*v8 & (((1 << (SizeOfBitMap + v15 - 32)) - 1) << v16)) >> v16) | v9[1] & ~((1 << (SizeOfBitMap + v15 - 32))
                                                                                               - 1);
          }
          else
          {
            *v9 = ((v24 & ((1 << SizeOfBitMap) - 1)) << v15) | *v9 & ~(((1 << SizeOfBitMap) - 1) << v15);
          }
        }
      }
      else
      {
        v11 = SizeOfBitMap;
        v12 = SizeOfBitMap & 7;
        v13 = v11 >> 3;
        if ( v13 )
          memmove((char *)Buffer + v10, Source->Buffer, v13);
        if ( v12 )
        {
          v14 = (char *)Destination->Buffer + v13 + v10;
          *v14 &= ~((1 << v12) - 1);
          *v14 |= (unsigned __int8)((1 << v12) - 1) & *((_BYTE *)Source->Buffer + v13);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
    }
  }
}
