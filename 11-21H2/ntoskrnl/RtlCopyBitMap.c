/*
 * XREFs of RtlCopyBitMap @ 0x140209CA0
 * Callers:
 *     sub_14020C5E4 @ 0x14020C5E4 (sub_14020C5E4.c)
 *     sub_14068578C @ 0x14068578C (sub_14068578C.c)
 *     sub_1409C3320 @ 0x1409C3320 (sub_1409C3320.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     sub_140209DE8 @ 0x140209DE8 (sub_140209DE8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  unsigned __int64 SizeOfBitMap; // rbx
  PULONG Buffer; // rcx
  PULONG v7; // r11
  PULONG v8; // r9
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  size_t v12; // rdi
  _BYTE *v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rsi
  ULONG v16; // ebx
  char v17; // di
  int v18; // ebp
  int v19; // r14d
  int v20; // edi
  unsigned __int64 v21; // rbp
  unsigned int v22; // eax

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
      sub_140209DE8(Source, Destination, TargetBit, (unsigned int)SizeOfBitMap);
      return;
    }
    v9 = (unsigned __int64)TargetBit >> 3;
    if ( (TargetBit & 7) != 0 )
    {
      v14 = TargetBit & 0x1F;
      if ( SizeOfBitMap >= 0x20 )
      {
        v19 = *v8;
        v20 = 1 << (32 - v14);
        v21 = SizeOfBitMap >> 5;
        do
        {
          *v8++ = ((*v7 & (v20 - 1)) << v14) | v19 & ((1 << v14) - 1);
          v22 = *v7++ & ~(v20 - 1);
          v19 = (v22 >> (32 - v14)) | *v8 & ~((1 << v14) - 1);
          *v8 = v19;
          --v21;
        }
        while ( v21 );
        v15 = SizeOfBitMap - 32 * (SizeOfBitMap >> 5);
        if ( !v15 )
          return;
      }
      else
      {
        v15 = SizeOfBitMap;
      }
      v16 = *v7;
      v17 = 32 - v14;
      v18 = *v8;
      if ( v15 > 32 - v14 )
      {
        *v8 = v18 & ((1 << v14) - 1) | ((v16 & ((1 << v17) - 1)) << v14);
        v8[1] = ((*v7 & (((1 << (v15 + v14 - 32)) - 1) << v17)) >> v17) | v8[1] & -(1 << (v15 + v14 - 32));
      }
      else
      {
        *v8 = ((v16 & ((1 << v15) - 1)) << v14) | v18 & ~(((1 << v15) - 1) << v14);
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
      v13 = (char *)Destination->Buffer + v9 + v12;
      *v13 &= ~((1 << v11) - 1);
      *v13 |= (unsigned __int8)((1 << v11) - 1) & *((_BYTE *)Source->Buffer + v12);
    }
  }
}
