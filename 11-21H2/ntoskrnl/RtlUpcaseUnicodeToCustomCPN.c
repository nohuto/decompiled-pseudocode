/*
 * XREFs of RtlUpcaseUnicodeToCustomCPN @ 0x1409B6890
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403477B0 @ 0x1403477B0 (sub_1403477B0.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToCustomCPN(
        PCPTABLEINFO CustomCP,
        PCH CustomCPString,
        ULONG MaxBytesInCustomCPString,
        PULONG BytesInCustomCPString,
        PWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v8; // ebx
  int v9; // edx
  ULONG v10; // r8d
  ULONG *v11; // r9
  _BYTE *v12; // r10
  ULONG v13; // r11d
  __int64 v14; // r13
  ULONG v15; // eax
  _BYTE *v16; // rbp
  PWCH v17; // rsi
  __int64 v18; // r14
  unsigned __int16 v19; // ax
  _BYTE *v20; // r10
  PUSHORT DBCSOffsets; // r14
  int v22; // r15d
  _WORD *WideCharTable; // r12
  PWCH v24; // rbp
  __int64 v25; // rax
  unsigned __int16 v26; // dx
  __int64 v27; // rcx
  unsigned __int16 v28; // dx
  __int16 v29; // r8
  unsigned int v30; // eax
  int v32; // [rsp+50h] [rbp+8h]

  v8 = BytesInUnicodeString >> 1;
  v14 = *((_QWORD *)sub_140347DB0() + 154);
  if ( CustomCP->DBCSCodePage )
  {
    DBCSOffsets = CustomCP->DBCSOffsets;
    v22 = v9;
    WideCharTable = CustomCP->WideCharTable;
    v32 = v9;
    if ( v8 )
    {
      v24 = UnicodeString;
      do
      {
        if ( !v13 )
          break;
        v25 = *v24++;
        v26 = WideCharTable[v25];
        v27 = DBCSOffsets[(unsigned __int64)v26 >> 8];
        if ( (_WORD)v27 )
          v28 = DBCSOffsets[(unsigned __int8)v26 + v27];
        else
          v28 = CustomCP->MultiByteTable[(unsigned __int8)v26];
        v29 = WideCharTable[sub_1403477B0(v14, v28)];
        if ( HIBYTE(v29) )
        {
          v30 = v13--;
          if ( v30 < 2 )
            break;
          *v12++ = HIBYTE(v29);
        }
        *v12 = v29;
        --v13;
        LODWORD(v12) = (_DWORD)v12 + 1;
        --v8;
      }
      while ( v8 );
      v22 = v32;
    }
    if ( BytesInCustomCPString )
      *BytesInCustomCPString = (_DWORD)v12 - v22;
  }
  else
  {
    v15 = v10;
    if ( v8 < v10 )
      v15 = BytesInUnicodeString >> 1;
    if ( v11 )
      *v11 = v15;
    v16 = CustomCP->WideCharTable;
    if ( v15 )
    {
      v17 = UnicodeString;
      v18 = v15;
      do
      {
        v19 = sub_1403477B0(v14, CustomCP->MultiByteTable[(unsigned __int8)v16[*v17++]]);
        *v20 = v16[v19];
        --v18;
      }
      while ( v18 );
    }
  }
  return v13 < v8 ? 0x80000005 : 0;
}
