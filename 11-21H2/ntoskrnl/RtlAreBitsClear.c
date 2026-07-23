/*
 * XREFs of RtlAreBitsClear @ 0x14020AED0
 * Callers:
 *     sub_14068A5A8 @ 0x14068A5A8 (sub_14068A5A8.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14092200C @ 0x14092200C (sub_14092200C.c)
 *     sub_140972980 @ 0x140972980 (sub_140972980.c)
 *     sub_140A4F0DC @ 0x140A4F0DC (sub_140A4F0DC.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  BOOLEAN result; // al
  PULONG Buffer; // rcx
  char v6; // r11
  ULONG *v7; // rdx
  ULONG v8; // ebx
  ULONG *v9; // r10
  ULONG *v10; // rdx

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return !_bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v6 = StartingIndex + Length - 1;
  v7 = &Buffer[(unsigned __int64)StartingIndex >> 5];
  v8 = *v7;
  v9 = &Buffer[(unsigned __int64)(StartingIndex + Length - 1) >> 5];
  if ( v7 == v9 )
    return (v8 & (0xFFFFFFFF >> (32 - Length) << StartingIndex)) == 0;
  if ( (v8 & (-1 << StartingIndex)) != 0 )
    return 0;
  v10 = v7 + 1;
  if ( v10 == v9 )
    return ((0xFFFFFFFF >> ~v6) & *v10) == 0;
  result = 0;
  while ( !*v10 )
  {
    if ( ++v10 == v9 )
      return ((0xFFFFFFFF >> ~v6) & *v10) == 0;
  }
  return result;
}
