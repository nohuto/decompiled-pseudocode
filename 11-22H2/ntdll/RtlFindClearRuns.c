/*
 * XREFs of RtlFindClearRuns @ 0x1800F72A0
 * Callers:
 *     RtlFindLongestRunClear @ 0x1800F7580 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v5; // edi
  unsigned int *Buffer; // rcx
  int v8; // edx
  BOOL v10; // r13d
  ULONG v12; // r8d
  bool v13; // zf
  unsigned int v14; // r13d
  __int64 v15; // r11
  unsigned int v16; // eax
  int v17; // r14d
  unsigned int v18; // esi
  unsigned __int8 v19; // r9
  __int64 v20; // rbp
  ULONG v21; // r11d
  signed int v22; // r10d
  __int64 v23; // rdx
  _RTL_BITMAP_RUN *i; // rdi
  unsigned __int8 v25; // r9
  unsigned __int8 *v26; // rdx
  ULONG v27; // edi
  __int64 v28; // r14
  unsigned __int8 v29; // r10
  int v30; // ebp
  signed int v31; // esi
  __int64 v32; // rdx
  _RTL_BITMAP_RUN *j; // rdi
  signed int v34; // edx
  __int64 v35; // r9
  _RTL_BITMAP_RUN *k; // r10
  ULONG v38; // [rsp+0h] [rbp-48h]
  int v39; // [rsp+4h] [rbp-44h]
  int v40; // [rsp+8h] [rbp-40h]
  char v41; // [rsp+Ch] [rbp-3Ch]
  unsigned int v42; // [rsp+50h] [rbp+8h]

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = 0;
  Buffer = BitMapHeader->Buffer;
  v41 = SizeOfBitMap;
  v38 = 0;
  v8 = SizeOfBitMap & 7;
  v39 = v8;
  v10 = v8 != 0;
  v12 = 0;
  v13 = (SizeOfBitMap >> 3) + v10 == 0;
  v14 = (SizeOfBitMap >> 3) + v10;
  LODWORD(v15) = 0;
  v16 = 0;
  v42 = 0;
  if ( v13 )
    return v12;
  v17 = 0;
  v18 = v14 - 1;
  v40 = 0;
  while ( 1 )
  {
    v19 = *(_BYTE *)Buffer;
    Buffer = (unsigned int *)((char *)Buffer + 1);
    if ( v16 == v18 && v8 )
    {
      v19 |= byte_1801430D0[SizeOfBitMap & 7];
      v16 = v42;
    }
    if ( !v19 )
    {
      LODWORD(v15) = v15 + 8;
      goto LABEL_38;
    }
    v20 = RtlpBitsClearLow[v19];
    v21 = v20 + v15;
    if ( v21 )
    {
      if ( v12 < SizeOfRunArray )
      {
        ++v12;
LABEL_12:
        v22 = v12 - 2;
        if ( LocateLongestRuns )
        {
          v23 = v22;
          for ( i = &RunArray[v22 + 1]; v23 >= 0 && i[-1].NumberOfBits < v21; --i )
          {
            --v22;
            --v23;
            *i = i[-1];
          }
          v5 = v38;
        }
        RunArray[v22 + 1].NumberOfBits = v21;
        RunArray[v22 + 1].StartingIndex = v5;
        if ( !LocateLongestRuns && v12 >= SizeOfRunArray )
          return v12;
        goto LABEL_20;
      }
      if ( RunArray[v12 - 1].NumberOfBits < v21 )
        goto LABEL_12;
    }
LABEL_20:
    v15 = RtlpBitsClearHigh[v19];
    v5 = v17 - v15 + 8;
    v25 = *((_BYTE *)&unk_1801430D8 - v15) | byte_1801430C0[v20] | v19;
    v38 = v5;
    if ( v25 != 0xFF )
    {
      do
      {
        v26 = (unsigned __int8 *)&RtlpBitsClearAnywhere + v25;
        v27 = v12;
        if ( v12 >= SizeOfRunArray && RunArray[v12 - 1].NumberOfBits >= *v26 )
          break;
        v28 = *v26;
        v29 = byte_1801430C0[v28];
        v30 = 0;
        while ( (v29 & v25) != 0 )
        {
          v29 *= 2;
          ++v30;
        }
        ++v12;
        if ( v27 >= SizeOfRunArray )
          v12 = v27;
        v31 = v12 - 2;
        if ( LocateLongestRuns )
        {
          v32 = v31;
          for ( j = &RunArray[v31 + 1]; v32 >= 0 && j[-1].NumberOfBits < (unsigned int)v28; --j )
          {
            --v31;
            --v32;
            *j = j[-1];
          }
        }
        RunArray[v31 + 1].NumberOfBits = v28;
        v17 = v40;
        RunArray[v31 + 1].StartingIndex = v40 + v30;
        if ( !LocateLongestRuns && v12 >= SizeOfRunArray )
          return v12;
        v25 |= v29;
      }
      while ( v25 != 0xFF );
      v5 = v38;
    }
    v16 = v42;
    v18 = v14 - 1;
    v8 = v39;
LABEL_38:
    ++v16;
    v17 += 8;
    v42 = v16;
    v40 = v17;
    if ( v16 >= v14 )
      break;
    LOBYTE(SizeOfBitMap) = v41;
  }
  if ( (_DWORD)v15 )
  {
    if ( v12 < SizeOfRunArray )
    {
      ++v12;
      goto LABEL_46;
    }
    if ( RunArray[v12 - 1].NumberOfBits < (unsigned int)v15 )
    {
LABEL_46:
      v34 = v12 - 2;
      if ( LocateLongestRuns )
      {
        v35 = v34;
        for ( k = &RunArray[v34 + 1]; v35 >= 0 && k[-1].NumberOfBits < (unsigned int)v15; --k )
        {
          --v34;
          --v35;
          *k = k[-1];
        }
      }
      RunArray[v34 + 1].NumberOfBits = v15;
      RunArray[v34 + 1].StartingIndex = v5;
    }
  }
  return v12;
}
