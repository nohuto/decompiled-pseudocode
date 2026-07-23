/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1800F89E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // r11d
  ULONG v4; // r10d
  ULONG v5; // r9d
  unsigned int *Buffer; // rsi
  unsigned int *v8; // rdx
  unsigned __int64 v9; // rbx
  int v10; // r8d
  _DWORD *i; // rax
  unsigned int v12; // r8d
  __int64 v13; // rcx
  unsigned __int64 j; // rax
  unsigned int *v15; // rax
  unsigned int v16; // r10d

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v4 = 0;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap > FromIndex )
  {
    Buffer = BitMapHeader->Buffer;
    v8 = &Buffer[(unsigned __int64)FromIndex >> 5];
    v9 = (unsigned __int64)&Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
    v10 = ((1 << (v5 & 0x1F)) - 1) | *v8;
    for ( i = v8 + 1; ; ++i )
    {
      v12 = ~v10;
      if ( v12 )
        break;
      if ( (unsigned __int64)i > v9 )
        goto LABEL_7;
      v10 = *++v8;
    }
    _BitScanForward64((unsigned __int64 *)&v13, v12);
    v5 = v13 + 32 * (v8 - Buffer);
    if ( v5 > SizeOfBitMap )
    {
LABEL_7:
      v5 = SizeOfBitMap;
      goto LABEL_17;
    }
    for ( j = ~(v12 | ((1 << v13) - 1)); !(_DWORD)j; j = *v15 )
    {
      v15 = v8 + 1;
      if ( (unsigned __int64)(v8 + 1) > v9 )
      {
        LODWORD(j) = 32;
        goto LABEL_14;
      }
      ++v8;
    }
    _BitScanForward64(&j, j);
LABEL_14:
    v16 = SizeOfBitMap;
    if ( 32 * (unsigned int)(v8 - Buffer) + (unsigned int)j <= SizeOfBitMap )
      v16 = 32 * (v8 - Buffer) + j;
    v4 = v16 - v5;
  }
LABEL_17:
  *StartingRunIndex = v5;
  return v4;
}
