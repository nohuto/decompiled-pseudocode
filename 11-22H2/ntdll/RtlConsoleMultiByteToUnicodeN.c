/*
 * XREFs of RtlConsoleMultiByteToUnicodeN @ 0x1800EFED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x180018FD4 (RtlpIsUtf8Process.c)
 *     RtlMultiByteToUnicodeN @ 0x180059150 (RtlMultiByteToUnicodeN.c)
 */

NTSTATUS __cdecl RtlConsoleMultiByteToUnicodeN(
        PWCH UnicodeString,
        ULONG MaxBytesInUnicodeString,
        PULONG BytesInUnicodeString,
        PCCH MultiByteString,
        ULONG BytesInMultiByteString,
        PULONG pdwSpecialChar)
{
  ULONG v6; // edx
  ULONG *v7; // r8
  const CHAR *v8; // r9
  unsigned int v9; // r10d
  WCHAR *v10; // r11
  const CHAR *i; // rax
  unsigned __int16 *MultiByteTable; // r14
  __int64 v14; // r12
  ULONG v15; // edx
  ULONG v16; // ecx
  __int64 v17; // rdx
  __int64 v18; // rax
  unsigned __int16 *DBCSOffsets; // r15
  int v20; // ebp
  ULONG v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rsi
  signed __int32 v24[8]; // [rsp+0h] [rbp-48h] BYREF

  *pdwSpecialChar = 0;
  if ( RtlpIsUtf8Process() )
  {
    if ( BytesInMultiByteString )
    {
      for ( i = v8; *i >= 0x20u; ++i )
      {
        if ( ++v9 >= BytesInMultiByteString )
          return RtlMultiByteToUnicodeN(v10, v6, v7, v8, BytesInMultiByteString);
      }
      *pdwSpecialChar = 1;
    }
    return RtlMultiByteToUnicodeN(v10, v6, v7, v8, BytesInMultiByteString);
  }
  else
  {
    _InterlockedOr(v24, v9);
    MultiByteTable = GlobalRtlNlsState.MultiByteTable;
    v14 = qword_1801817A0;
    v15 = v6 >> 1;
    if ( GlobalRtlNlsState.DBCSCodePage == (_WORD)v9 )
    {
      v16 = BytesInMultiByteString;
      if ( v15 < BytesInMultiByteString )
        v16 = v15;
      if ( v7 )
        *v7 = 2 * v16;
      if ( v16 )
      {
        v17 = v16;
        do
        {
          if ( *v8 < 0x20u )
            *pdwSpecialChar = 1;
          v18 = *(unsigned __int8 *)v8++;
          *v10++ = MultiByteTable[v18];
          --v17;
        }
        while ( v17 );
      }
    }
    else
    {
      DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
      v20 = (int)v10;
      if ( v15 )
      {
        v21 = BytesInMultiByteString;
        while ( v21 )
        {
          v22 = *(unsigned __int8 *)v8;
          --v15;
          --v21;
          v23 = *(unsigned __int16 *)(v14 + 2 * v22);
          if ( (_WORD)v23 )
          {
            if ( !v21 )
            {
              *v10 = v9;
              LODWORD(v10) = (_DWORD)v10 + 2;
              break;
            }
            ++v8;
            --v21;
            *v10 = DBCSOffsets[v23 + *(unsigned __int8 *)v8];
          }
          else
          {
            if ( (unsigned __int8)v22 < 0x20u )
              *pdwSpecialChar = 1;
            *v10 = MultiByteTable[*(unsigned __int8 *)v8];
          }
          ++v10;
          ++v8;
          if ( !v15 )
            break;
        }
      }
      if ( v7 )
        *v7 = (_DWORD)v10 - v20;
    }
    return 0;
  }
}
