/*
 * XREFs of RtlExtractBitMap @ 0x1405E5500
 * Callers:
 *     RtlShiftLeftBitMap @ 0x1405E6BE0 (RtlShiftLeftBitMap.c)
 *     sub_1409C0EC0 @ 0x1409C0EC0 (sub_1409C0EC0.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
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
  PULONG Buffer; // r10
  __int64 v14; // r8
  ULONG *v15; // rdi
  int v16; // r9d
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r11
  unsigned int v19; // edx
  ULONG v20; // edx
  ULONG v21; // ebx
  int v22; // edx

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
          v19 = ~(v16 - 1) & *v15++;
          v20 = v19 >> v14;
          *Buffer = v20;
          *Buffer++ = v20 | (((v16 - 1) & *v15) << (32 - v14));
          --v17;
        }
        while ( v17 );
        if ( !v18 )
          return;
      }
      v21 = *v15;
      v22 = *Buffer & ~((1 << v18) - 1);
      if ( v18 > 32 - v14 )
        *Buffer = ((v21 & -v16) >> v14) | ((v15[1] & ((1 << (v18 + v14 - 32)) - 1)) << (32 - v14)) | v22;
      else
        *Buffer = v22 | ((v21 & (((1 << v18) - 1) << v14)) >> v14);
      return;
    }
    v10 = (unsigned int)SizeOfBitMap;
    v11 = SizeOfBitMap & 7;
    v12 = v10 >> 3;
    if ( v12 )
      memmove(Destination->Buffer, (char *)Source->Buffer + v8, v12);
    if ( v11 )
      *((_BYTE *)Destination->Buffer + v12) = *((_BYTE *)Source->Buffer + v8 + v12) & ((1 << v11) - 1) | *((_BYTE *)Destination->Buffer + v12) & ~((1 << v11) - 1);
  }
}
