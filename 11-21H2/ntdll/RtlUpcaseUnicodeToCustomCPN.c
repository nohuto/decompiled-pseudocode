/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800F0420
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x180041758 (NLS_UPCASE.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  __int64 v7; // r13
  ULONG v8; // r11d
  ULONG v10; // ebx
  _BYTE *v11; // r10
  ULONG v12; // eax
  _BYTE *v13; // rbp
  PWCH v14; // rsi
  __int64 v15; // r14
  unsigned __int16 v16; // ax
  _BYTE *v17; // r10
  wchar_t *DBCSOffsets; // r14
  int v19; // r15d
  _WORD *WideCharTable; // r12
  PWCH v21; // rbp
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rax
  unsigned __int16 v25; // dx
  __int16 v26; // dx
  unsigned int v27; // eax
  int v29; // [rsp+50h] [rbp+8h]

  v7 = qword_1801776F8;
  v8 = BytesInUnicodeString >> 1;
  v10 = MaxBytesInCustomCPString;
  LODWORD(v11) = (_DWORD)CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v19 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    v29 = (int)CustomCPString;
    if ( v8 )
    {
      v21 = UnicodeString;
      do
      {
        if ( !v10 )
          break;
        v22 = *v21++;
        v23 = WideCharTable[v22];
        v24 = (unsigned __int64)v23 >> 8;
        if ( DBCSOffsets[v24] )
          v25 = DBCSOffsets[(unsigned __int8)v23 + (unsigned __int64)DBCSOffsets[v24]];
        else
          v25 = CustomCP->MultiByteTable[(unsigned __int8)v23];
        v26 = WideCharTable[NLS_UPCASE(v7, v25)];
        if ( HIBYTE(v26) )
        {
          v27 = v10--;
          if ( v27 < 2 )
            break;
          *v11++ = HIBYTE(v26);
        }
        *v11 = v26;
        --v10;
        LODWORD(v11) = (_DWORD)v11 + 1;
        --v8;
      }
      while ( v8 );
      v19 = v29;
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v11 - v19;
  }
  else
  {
    v12 = MaxBytesInCustomCPString;
    if ( v8 < MaxBytesInCustomCPString )
      v12 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v12;
    v13 = CustomCP->WideCharTable;
    if ( v12 )
    {
      v14 = UnicodeString;
      v15 = v12;
      do
      {
        v16 = NLS_UPCASE(v7, CustomCP->MultiByteTable[(unsigned __int8)v13[*v14++]]);
        *v17 = v13[v16];
        --v15;
      }
      while ( v15 );
    }
  }
  return v10 < v8 ? 0x80000005 : 0;
}
