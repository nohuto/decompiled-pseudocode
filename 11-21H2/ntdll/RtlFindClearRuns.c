/*
 * XREFs of RtlFindClearRuns @ 0x1800F72D0
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800F7590 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // ebx
  unsigned int v6; // r9d
  ULONG v8; // edx
  BOOL v9; // r15d
  bool v11; // zf
  unsigned int v12; // r15d
  __int64 v13; // r10
  unsigned int *Buffer; // rax
  unsigned int v15; // r13d
  int v16; // ebp
  unsigned int v17; // ecx
  unsigned __int8 v18; // r8
  __int64 v19; // rsi
  ULONG v20; // r10d
  signed int v21; // ebx
  __int64 v22; // r9
  _RTL_BITMAP_RUN *i; // rcx
  ULONG v24; // ebx
  unsigned __int8 v25; // r8
  ULONG v26; // edi
  __int64 v27; // rbp
  unsigned __int8 v28; // bl
  int v29; // esi
  signed int v30; // edi
  __int64 v31; // r9
  _RTL_BITMAP_RUN *j; // rcx
  signed int v33; // r8d
  __int64 v34; // r9
  _RTL_BITMAP_RUN *k; // rcx
  int v37; // [rsp+0h] [rbp-48h]
  unsigned int v38; // [rsp+4h] [rbp-44h]
  unsigned int v39; // [rsp+8h] [rbp-40h]
  ULONG v40; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v39 = BitMapHeader->SizeOfBitMap;
  v6 = BitMapHeader->SizeOfBitMap & 7;
  v8 = 0;
  v38 = v6;
  v9 = v6 != 0;
  v40 = 0;
  v11 = (BitMapHeader->SizeOfBitMap >> 3) + v9 == 0;
  v12 = (BitMapHeader->SizeOfBitMap >> 3) + v9;
  LODWORD(v13) = 0;
  Buffer = BitMapHeader->Buffer;
  v15 = 0;
  if ( v11 )
    return v8;
  v16 = 0;
  v17 = v12 - 1;
  v37 = 0;
  while ( 1 )
  {
    v18 = *(_BYTE *)Buffer;
    if ( v15 == v17 && v6 )
      v18 |= byte_18013A0B0[SizeOfBitMap & 7];
    if ( !v18 )
    {
      v24 = v40;
      LODWORD(v13) = v13 + 8;
      goto LABEL_37;
    }
    v19 = RtlpBitsClearLow[v18];
    v20 = v19 + v13;
    if ( v20 )
    {
      if ( v8 < SizeOfRunArray )
      {
        ++v8;
LABEL_12:
        v21 = v8 - 2;
        if ( LocateLongestRuns )
        {
          v22 = v21;
          for ( i = &RunArray[v21 + 1]; v22 >= 0 && i[-1].NumberOfBits < v20; --i )
          {
            --v21;
            --v22;
            *i = i[-1];
          }
        }
        RunArray[v21 + 1].NumberOfBits = v20;
        RunArray[v21 + 1].StartingIndex = v40;
        if ( !LocateLongestRuns && v8 >= SizeOfRunArray )
          return v8;
        goto LABEL_19;
      }
      if ( RunArray[v8 - 1].NumberOfBits < v20 )
        goto LABEL_12;
    }
LABEL_19:
    v13 = RtlpBitsClearHigh[v18];
    v24 = v16 - v13 + 8;
    v40 = v24;
    v25 = *((_BYTE *)&unk_18013A0B8 - v13) | RtlIsSystemAceType[v19 + 16] | v18;
    if ( v25 != 0xFF )
    {
      do
      {
        v26 = v8;
        if ( v8 >= SizeOfRunArray && RunArray[v8 - 1].NumberOfBits >= RtlpBitsClearAnywhere[v25] )
          break;
        v27 = RtlpBitsClearAnywhere[v25];
        v28 = RtlIsSystemAceType[v27 + 16];
        v29 = 0;
        while ( (v28 & v25) != 0 )
        {
          v28 *= 2;
          ++v29;
        }
        ++v8;
        if ( v26 >= SizeOfRunArray )
          v8 = v26;
        v30 = v8 - 2;
        if ( LocateLongestRuns )
        {
          v31 = v30;
          for ( j = &RunArray[v30 + 1]; v31 >= 0 && j[-1].NumberOfBits < (unsigned int)v27; --j )
          {
            --v30;
            --v31;
            *j = j[-1];
          }
        }
        RunArray[v30 + 1].NumberOfBits = v27;
        v16 = v37;
        RunArray[v30 + 1].StartingIndex = v29 + v37;
        if ( !LocateLongestRuns && v8 >= SizeOfRunArray )
          return v8;
        v25 |= v28;
      }
      while ( v25 != 0xFF );
      v24 = v40;
    }
    v17 = v12 - 1;
LABEL_37:
    v16 += 8;
    ++v15;
    v37 = v16;
    if ( v15 >= v12 )
      break;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    v6 = v38;
    LOBYTE(SizeOfBitMap) = v39;
  }
  if ( (_DWORD)v13 )
  {
    if ( v8 < SizeOfRunArray )
    {
      ++v8;
      goto LABEL_45;
    }
    if ( RunArray[v8 - 1].NumberOfBits < (unsigned int)v13 )
    {
LABEL_45:
      v33 = v8 - 2;
      if ( LocateLongestRuns )
      {
        v34 = v33;
        for ( k = &RunArray[v33 + 1]; v34 >= 0 && k[-1].NumberOfBits < (unsigned int)v13; --k )
        {
          --v33;
          --v34;
          *k = k[-1];
        }
      }
      RunArray[v33 + 1].NumberOfBits = v13;
      RunArray[v33 + 1].StartingIndex = v24;
    }
  }
  return v8;
}
