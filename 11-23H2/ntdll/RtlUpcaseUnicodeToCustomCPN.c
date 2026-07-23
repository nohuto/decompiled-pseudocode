/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1800F1480
 * Callers:
 *     <none>
 * Callees:
 *     NLS_UPCASE @ 0x1800154D8 (NLS_UPCASE.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v7; // ebx
  PULONG v8; // r14
  ULONG v9; // edi
  _BYTE *v10; // r11
  ULONG v11; // eax
  _BYTE *v12; // r14
  PWCH v13; // rbp
  __int64 v14; // r15
  unsigned __int16 v15; // ax
  _BYTE *v16; // r11
  unsigned __int16 *DBCSOffsets; // r15
  int v18; // r12d
  _WORD *WideCharTable; // r13
  PWCH v20; // rbp
  __int64 v21; // r12
  __int64 v22; // rax
  unsigned __int16 v23; // dx
  unsigned __int64 v24; // rax
  int v25; // edx
  __int16 v26; // dx
  unsigned int v27; // eax
  int v29; // [rsp+20h] [rbp-48h]
  __int64 v30; // [rsp+70h] [rbp+8h]

  v7 = BytesInUnicodeString >> 1;
  v8 = BytesInCustomCPString;
  v9 = MaxBytesInCustomCPString;
  v30 = qword_180184808;
  LODWORD(v10) = (_DWORD)CustomCPString;
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v18 = (int)CustomCPString;
    WideCharTable = CustomCP->WideCharTable;
    v29 = (int)CustomCPString;
    if ( v7 )
    {
      v20 = UnicodeString;
      v21 = qword_180184808;
      do
      {
        if ( !v9 )
          break;
        v22 = *v20++;
        v23 = WideCharTable[v22];
        v24 = (unsigned __int64)v23 >> 8;
        if ( DBCSOffsets[v24] )
          v25 = DBCSOffsets[(unsigned __int8)v23 + (unsigned __int64)DBCSOffsets[v24]];
        else
          v25 = CustomCP->MultiByteTable[(unsigned __int8)v23];
        v26 = WideCharTable[(unsigned __int16)NLS_UPCASE(v21, v25)];
        if ( HIBYTE(v26) )
        {
          v27 = v9--;
          if ( v27 < 2 )
            break;
          *v10++ = HIBYTE(v26);
        }
        *v10 = v26;
        --v9;
        LODWORD(v10) = (_DWORD)v10 + 1;
        --v7;
      }
      while ( v7 );
      v8 = BytesInCustomCPString;
      v18 = v29;
    }
    if ( v8 )
      *v8 = (_DWORD)v10 - v18;
  }
  else
  {
    v11 = MaxBytesInCustomCPString;
    if ( v7 < MaxBytesInCustomCPString )
      v11 = BytesInUnicodeString >> 1;
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = v11;
    v12 = CustomCP->WideCharTable;
    if ( v11 )
    {
      v13 = UnicodeString;
      v14 = v11;
      do
      {
        v15 = NLS_UPCASE(v30, CustomCP->MultiByteTable[(unsigned __int8)v12[*v13++]]);
        *v16 = v12[v15];
        --v14;
      }
      while ( v14 );
      v9 = MaxBytesInCustomCPString;
    }
  }
  return v9 < v7 ? 0x80000005 : 0;
}
