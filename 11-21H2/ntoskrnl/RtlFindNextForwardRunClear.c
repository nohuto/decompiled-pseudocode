/*
 * XREFs of RtlFindNextForwardRunClear @ 0x1402E1F90
 * Callers:
 *     sub_1406881CC @ 0x1406881CC (sub_1406881CC.c)
 *     sub_140760A2C @ 0x140760A2C (sub_140760A2C.c)
 *     sub_14079878C @ 0x14079878C (sub_14079878C.c)
 *     sub_140909B14 @ 0x140909B14 (sub_140909B14.c)
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 *     sub_140A6849C @ 0x140A6849C (sub_140A6849C.c)
 *     sub_140A6B37C @ 0x140A6B37C (sub_140A6B37C.c)
 *     sub_140A7BF74 @ 0x140A7BF74 (sub_140A7BF74.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  ULONG SizeOfBitMap; // r10d
  ULONG v5; // r9d
  PULONG Buffer; // rdx
  ULONG *v8; // rbx
  ULONG *v9; // r8
  ULONG v10; // edx
  int v11; // edi
  ULONG v12; // ecx
  unsigned int i; // eax
  ULONG *v16; // r8

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v8 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
  v9 = &Buffer[(unsigned __int64)v5 >> 5];
  if ( v9 != v8 && (*v9 | *((_DWORD *)qword_140015FA0 + (v5 & 0x1F))) == 0xFFFFFFFF )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v9; v9 < v8 && *v9 == -1; ++v9 )
      v5 += 32;
  }
  for ( ; v5 < SizeOfBitMap; ++v5 )
  {
    if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v5) )
      break;
  }
  v10 = 0;
  if ( v9 == v8 )
    goto LABEL_13;
  v11 = v5 & 0x1F;
  if ( (*v9 & ~*((_DWORD *)qword_140015FA0 + (v5 & 0x1F))) != 0 )
    goto LABEL_13;
  v10 = 32 - v11;
  if ( v11 != 33 )
  {
    v16 = v9 + 1;
    while ( v16 < v8 && !*v16 )
    {
      ++v16;
      v10 += 32;
      if ( v10 == -1 )
        goto LABEL_17;
    }
LABEL_13:
    v12 = BitMapHeader->SizeOfBitMap;
    for ( i = v10 + v5; i < v12; ++v10 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v10 == -1 )
        break;
      ++i;
    }
  }
LABEL_17:
  *StartingRunIndex = v5;
  return v10;
}
