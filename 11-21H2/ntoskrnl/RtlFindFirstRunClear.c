/*
 * XREFs of RtlFindFirstRunClear @ 0x14024B2A0
 * Callers:
 *     sub_140A6849C @ 0x140A6849C (sub_140A6849C.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindFirstRunClear(PRTL_BITMAP BitMapHeader, PULONG StartingIndex)
{
  ULONG SizeOfBitMap; // r8d
  ULONG v3; // r9d
  PULONG Buffer; // rdx
  unsigned int v7; // r10d
  ULONG *v8; // rbx
  ULONG v9; // r8d
  __int64 v10; // rdi
  ULONG v11; // ecx
  unsigned int i; // eax
  ULONG *v14; // rdx

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v3 = 0;
  if ( !BitMapHeader->SizeOfBitMap )
  {
    *StartingIndex = 0;
    return v3;
  }
  Buffer = BitMapHeader->Buffer;
  v7 = 0;
  v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
  if ( Buffer != v8 && *Buffer == -1 )
  {
    v7 = 32;
    for ( ++Buffer; Buffer < v8 && *Buffer == -1; ++Buffer )
      v7 += 32;
  }
  for ( ; v7 < SizeOfBitMap; ++v7 )
  {
    if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v7) )
      break;
  }
  v9 = 0;
  if ( Buffer == v8 )
    goto LABEL_13;
  v10 = v7 & 0x1F;
  if ( (*Buffer & ~*((_DWORD *)qword_140015FA0 + v10)) != 0 )
    goto LABEL_13;
  v9 = 32 - v10;
  if ( (_DWORD)v10 != 33 )
  {
    v14 = Buffer + 1;
    while ( v14 < v8 && !*v14 )
    {
      ++v14;
      v9 += 32;
      if ( v9 == -1 )
        goto LABEL_17;
    }
LABEL_13:
    v11 = BitMapHeader->SizeOfBitMap;
    for ( i = v9 + v7; i < v11; ++v9 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v9 == -1 )
        break;
      ++i;
    }
  }
LABEL_17:
  *StartingIndex = v7;
  return v9;
}
