/*
 * XREFs of RtlExtractBitMap @ 0x1800F6AC0
 * Callers:
 *     RtlDecompressBufferXp10 @ 0x180119570 (RtlDecompressBufferXp10.c)
 * Callees:
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  unsigned __int64 SizeOfBitMap; // rbx
  unsigned __int64 v6; // r10
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  unsigned int *Buffer; // r10
  __int64 v14; // r8
  unsigned int *v15; // rdi
  int v16; // r9d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r11
  unsigned int v19; // edx
  unsigned int v20; // edx
  unsigned int v21; // edx

  SizeOfBitMap = Destination->SizeOfBitMap;
  v6 = Source->SizeOfBitMap - TargetBit;
  if ( NumberOfBits <= (unsigned int)v6 )
    v6 = NumberOfBits;
  if ( v6 <= SizeOfBitMap )
    SizeOfBitMap = (unsigned int)v6;
  if ( SizeOfBitMap )
  {
    v8 = (unsigned __int64)TargetBit >> 3;
    v9 = TargetBit;
    if ( (TargetBit & 7) != 0 )
    {
      Buffer = Destination->Buffer;
      v14 = TargetBit & 0x1F;
      v15 = &Source->Buffer[v9 >> 5];
      v16 = 1 << (v9 & 0x1F);
      if ( SizeOfBitMap < 0x20 )
      {
        v18 = SizeOfBitMap;
      }
      else
      {
        v17 = SizeOfBitMap >> 5;
        v18 = SizeOfBitMap - 32 * (SizeOfBitMap >> 5);
        do
        {
          v19 = *v15++ & ~(v16 - 1);
          v20 = v19 >> v14;
          *Buffer = v20;
          *Buffer++ = v20 | ((*v15 & (v16 - 1)) << (32 - v14));
          --v17;
        }
        while ( v17 );
        if ( !v18 )
          return;
      }
      if ( v18 > 32 - v14 )
        v21 = ((*v15 & -v16) >> v14) | ((v15[1] & ((1 << (v18 + v14 - 32)) - 1)) << (32 - v14));
      else
        v21 = (*v15 & (((1 << v18) - 1) << v14)) >> v14;
      *Buffer = v21 | ~((1 << v18) - 1) & *Buffer;
    }
    else
    {
      v10 = (unsigned int)SizeOfBitMap;
      v11 = SizeOfBitMap & 7;
      v12 = v10 >> 3;
      if ( v12 )
        memmove(Destination->Buffer, (char *)Source->Buffer + v8, v12);
      if ( v11 )
        *((_BYTE *)Destination->Buffer + v12) = *((_BYTE *)Source->Buffer + v12 + v8) & ((1 << v11) - 1) | *((_BYTE *)Destination->Buffer + v12) & ~((1 << v11) - 1);
    }
  }
}
