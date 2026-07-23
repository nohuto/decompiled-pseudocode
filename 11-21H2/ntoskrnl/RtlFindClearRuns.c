/*
 * XREFs of RtlFindClearRuns @ 0x14020DD80
 * Callers:
 *     RtlFindLongestRunClear @ 0x1405E5890 (RtlFindLongestRunClear.c)
 * Callees:
 *     <none>
 */

ULONG __stdcall RtlFindClearRuns(
        PRTL_BITMAP BitMapHeader,
        PRTL_BITMAP_RUN RunArray,
        ULONG SizeOfRunArray,
        BOOLEAN LocateLongestRuns)
{
  PRTL_BITMAP_RUN v4; // r14
  ULONG v5; // r15d
  ULONG SizeOfBitMap; // r8d
  PULONG Buffer; // r9
  ULONG v8; // edx
  BOOL v9; // edi
  bool v10; // zf
  ULONG v11; // edi
  ULONG v12; // eax
  ULONG v13; // r12d
  __int64 v14; // r11
  ULONG v15; // r13d
  int v16; // ebx
  unsigned __int8 v17; // r10
  signed int v18; // ecx
  __int64 v19; // rdx
  _RTL_BITMAP_RUN *m; // r8
  __int64 v22; // rbp
  ULONG v23; // r11d
  unsigned __int8 v24; // r10
  signed int v25; // r15d
  __int64 v26; // r14
  _RTL_BITMAP_RUN *i; // rdx
  __int64 v28; // rcx
  ULONG v29; // r14d
  __int64 v30; // r12
  int v31; // r15d
  char j; // bp
  ULONG v33; // ecx
  signed int v34; // r14d
  __int64 v35; // r8
  _RTL_BITMAP_RUN *k; // rdx
  __int64 v37; // rcx
  _RTL_BITMAP_RUN *v38; // rdx
  ULONG v39; // [rsp+0h] [rbp-58h]
  ULONG v40; // [rsp+4h] [rbp-54h]
  ULONG v41; // [rsp+60h] [rbp+8h]

  v4 = RunArray;
  v5 = SizeOfRunArray;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  Buffer = BitMapHeader->Buffer;
  v8 = BitMapHeader->SizeOfBitMap & 7;
  v39 = BitMapHeader->SizeOfBitMap;
  v41 = v8;
  v9 = v8 != 0;
  v10 = (BitMapHeader->SizeOfBitMap >> 3) + v9 == 0;
  v11 = (BitMapHeader->SizeOfBitMap >> 3) + v9;
  v12 = 0;
  v13 = 0;
  LODWORD(v14) = 0;
  v15 = 0;
  if ( v10 )
    return v13;
  v16 = 0;
  do
  {
    v17 = *(_BYTE *)Buffer;
    Buffer = (PULONG)((char *)Buffer + 1);
    if ( v12 == v11 - 1 && v8 )
      v17 |= byte_140015C40[SizeOfBitMap & 7];
    if ( !v17 )
    {
      LODWORD(v14) = v14 + 8;
      goto LABEL_6;
    }
    v22 = *((unsigned __int8 *)qword_140018E00 + v17);
    v23 = v22 + v14;
    if ( v23 )
    {
      if ( v13 < v5 )
      {
        ++v13;
LABEL_22:
        v25 = v13 - 2;
        if ( LocateLongestRuns )
        {
          v26 = v25;
          for ( i = &RunArray[v25 + 1]; v26 >= 0 && i[-1].NumberOfBits < v23; --i )
          {
            --v25;
            --v26;
            *i = i[-1];
          }
          v4 = RunArray;
        }
        v28 = v25;
        v5 = SizeOfRunArray;
        v4[v28 + 1].NumberOfBits = v23;
        v4[v28 + 1].StartingIndex = v15;
        if ( !LocateLongestRuns && v13 >= SizeOfRunArray )
          return v13;
        goto LABEL_16;
      }
      if ( v4[v13 - 1].NumberOfBits < v23 )
        goto LABEL_22;
    }
LABEL_16:
    v14 = *((unsigned __int8 *)&qword_140018E00[64] + v17);
    v15 = v16 - v14 + 8;
    v24 = *((_BYTE *)&qword_140015C48 - v14) | byte_140018DF0[v22] | v17;
    if ( v24 != 0xFF )
    {
      while ( 1 )
      {
        v29 = v13;
        if ( v13 >= v5 && RunArray[v13 - 1].NumberOfBits >= *((unsigned __int8 *)&qword_140018E00[32] + v24) )
          break;
        v30 = *((unsigned __int8 *)&qword_140018E00[32] + v24);
        v31 = 0;
        for ( j = byte_140018DF0[v30]; ((unsigned __int8)j & v24) != 0; ++v31 )
          j *= 2;
        v33 = v29 + 1;
        if ( v29 >= SizeOfRunArray )
          v33 = v29;
        v40 = v33;
        v34 = v33 - 2;
        if ( LocateLongestRuns )
        {
          v35 = v34;
          for ( k = &RunArray[v34 + 1]; v35 >= 0 && k[-1].NumberOfBits < (unsigned int)v30; --k )
          {
            --v34;
            --v35;
            *k = k[-1];
          }
        }
        v37 = v34;
        v4 = RunArray;
        v38 = &RunArray[v37];
        LODWORD(v37) = v16 + v31;
        v38[1].NumberOfBits = v30;
        v13 = v40;
        v5 = SizeOfRunArray;
        v38[1].StartingIndex = v37;
        if ( !LocateLongestRuns && v40 >= SizeOfRunArray )
          return v13;
        v24 |= j;
        if ( v24 == 0xFF )
        {
          v8 = v41;
          LOBYTE(SizeOfBitMap) = v39;
          goto LABEL_6;
        }
      }
      v4 = RunArray;
    }
    v8 = v41;
    LOBYTE(SizeOfBitMap) = v39;
LABEL_6:
    ++v12;
    v16 += 8;
  }
  while ( v12 < v11 );
  if ( (_DWORD)v14 )
  {
    if ( v13 < v5 )
    {
      ++v13;
      goto LABEL_10;
    }
    if ( v4[v13 - 1].NumberOfBits < (unsigned int)v14 )
    {
LABEL_10:
      v18 = v13 - 2;
      if ( LocateLongestRuns )
      {
        v19 = v18;
        for ( m = &v4[v18 + 1]; v19 >= 0 && m[-1].NumberOfBits < (unsigned int)v14; --m )
        {
          --v18;
          --v19;
          *m = m[-1];
        }
      }
      v4[v18 + 1].NumberOfBits = v14;
      v4[v18 + 1].StartingIndex = v15;
    }
  }
  return v13;
}
