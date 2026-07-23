/*
 * XREFs of RtlCopyBitMap @ 0x1800F68B0
 * Callers:
 *     Xp10ExecuteHuffmanEncode @ 0x18011B934 (Xp10ExecuteHuffmanEncode.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     RtlpCopyBitMapTailToHead @ 0x1800F87C4 (RtlpCopyBitMapTailToHead.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned int *Buffer; // rcx
  unsigned int *v7; // r11
  unsigned int *v8; // r10
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  _BYTE *v13; // r8
  __int64 v14; // r8
  int v15; // r14d
  int v16; // edi
  unsigned __int64 v17; // rbp
  unsigned int v18; // eax
  unsigned __int64 v19; // rsi
  unsigned int v20; // ebx
  char v21; // di

  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= (unsigned int)SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Destination->Buffer;
    v7 = Source->Buffer;
    v8 = &Buffer[(unsigned __int64)TargetBit >> 5];
    if ( v7 <= v8 && v8 <= &v7[(SizeOfBitMap - 1) >> 5] )
    {
      RtlpCopyBitMapTailToHead(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
      return;
    }
    v9 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      v14 = TargetBit & 0x1F;
      if ( SizeOfBitMap < 0x20 )
      {
        v19 = SizeOfBitMap;
      }
      else
      {
        v15 = *v8;
        v16 = 1 << (32 - v14);
        v17 = SizeOfBitMap >> 5;
        do
        {
          *v8++ = ((*v7 & (v16 - 1)) << v14) | v15 & ((1 << v14) - 1);
          v18 = *v7++ & ~(v16 - 1);
          v15 = (v18 >> (32 - v14)) | *v8 & ~((1 << v14) - 1);
          *v8 = v15;
          --v17;
        }
        while ( v17 );
        v19 = SizeOfBitMap - 32 * (SizeOfBitMap >> 5);
        if ( !v19 )
          return;
      }
      v20 = *v7;
      v21 = 32 - v14;
      if ( v19 > 32 - v14 )
      {
        *v8 = *v8 & ((1 << v14) - 1) | ((v20 & ((1 << v21) - 1)) << v14);
        v8[1] = ((*v7 & (((1 << (v19 + v14 - 32)) - 1) << v21)) >> v21) | v8[1] & -(1 << (v19 + v14 - 32));
      }
      else
      {
        *v8 = ((v20 & ((1 << v19) - 1)) << v14) | *v8 & ~(((1 << v19) - 1) << v14);
      }
      return;
    }
    v10 = SizeOfBitMap;
    v11 = SizeOfBitMap & 7;
    v12 = v10 >> 3;
    if ( v12 )
      memmove((char *)Buffer + v9, Source->Buffer, v12);
    if ( v11 )
    {
      v13 = (char *)Destination->Buffer + v12 + v9;
      *v13 &= ~((1 << v11) - 1);
      *v13 |= (unsigned __int8)((1 << v11) - 1) & *((_BYTE *)Source->Buffer + v12);
    }
  }
}
