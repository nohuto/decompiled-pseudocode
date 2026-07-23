/*
 * XREFs of RtlAreBitsSet @ 0x1402DC360
 * Callers:
 *     sub_14076200C @ 0x14076200C (sub_14076200C.c)
 *     sub_140972BD4 @ 0x140972BD4 (sub_140972BD4.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  PULONG Buffer; // rcx
  char v6; // bl
  ULONG *v7; // rdx
  ULONG v8; // r10d
  ULONG *v9; // r11
  bool i; // zf

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v6 = StartingIndex + Length - 1;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v7 != v9 )
  {
    for ( i = ((-1 << StartingIndex) & v8) == -1 << StartingIndex; i; i = *v7 == -1 )
    {
      if ( ++v7 == v9 )
        return ((0xFFFFFFFF >> ~v6) & *v7) == 0xFFFFFFFF >> ~v6;
    }
    return 0;
  }
  return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v8) == 0xFFFFFFFF >> (32 - Length) << StartingIndex;
}
