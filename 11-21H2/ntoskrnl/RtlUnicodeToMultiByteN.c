/*
 * XREFs of RtlUnicodeToMultiByteN @ 0x1406A04A0
 * Callers:
 *     wcstombs @ 0x1403E35A0 (wcstombs.c)
 *     sub_1403E38B4 @ 0x1403E38B4 (sub_1403E38B4.c)
 *     sub_1403E82B8 @ 0x1403E82B8 (sub_1403E82B8.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 *     sub_1407CDA20 @ 0x1407CDA20 (sub_1407CDA20.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteN(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _CPTABLEINFO *v9; // rax
  PCHAR v10; // rdx
  char *v11; // rax
  ULONG v12; // r8d
  _BYTE *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rax
  _WORD *WideCharTable; // r10
  __int64 v17; // rax
  __int16 v18; // r9
  ULONG v19; // eax
  ULONG *v20; // r8
  signed __int32 v22[8]; // [rsp+0h] [rbp-38h] BYREF
  char v23; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned __int8)sub_1407CDA20(0LL) )
  {
    v9 = &CustomCP;
    LODWORD(v10) = (_DWORD)MultiByteString;
  }
  else
  {
    _InterlockedOr(v22, 0);
    v11 = (char *)sub_140347DB0();
    LODWORD(v10) = (_DWORD)MultiByteString;
    v9 = (_CPTABLEINFO *)(v11 + 1064);
    if ( !v9 )
    {
LABEL_23:
      v20 = (ULONG *)&v23;
      if ( BytesInMultiByteString )
        v20 = BytesInMultiByteString;
      if ( BytesInUnicodeString )
        RtlUnicodeToUTF8N(MultiByteString, MaxBytesInMultiByteString, v20, UnicodeString, BytesInUnicodeString);
      else
        *v20 = 0;
      return 0;
    }
  }
  if ( v9->CodePage == 0xFDE9 )
    goto LABEL_23;
  v12 = BytesInUnicodeString >> 1;
  if ( v9->DBCSCodePage )
  {
    WideCharTable = v9->WideCharTable;
    if ( v12 )
    {
      v10 = MultiByteString;
      do
      {
        if ( !MaxBytesInMultiByteString )
          break;
        v17 = *UnicodeString++;
        v18 = WideCharTable[v17];
        if ( HIBYTE(v18) )
        {
          v19 = MaxBytesInMultiByteString--;
          if ( v19 < 2 )
            break;
          *v10++ = HIBYTE(v18);
        }
        *v10 = v18;
        --MaxBytesInMultiByteString;
        ++v10;
        --v12;
      }
      while ( v12 );
    }
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = (_DWORD)v10 - (_DWORD)MultiByteString;
  }
  else
  {
    if ( v12 < MaxBytesInMultiByteString )
      MaxBytesInMultiByteString = BytesInUnicodeString >> 1;
    if ( BytesInMultiByteString )
      *BytesInMultiByteString = MaxBytesInMultiByteString;
    v13 = v9->WideCharTable;
    if ( MaxBytesInMultiByteString )
    {
      v14 = MaxBytesInMultiByteString;
      do
      {
        v15 = *UnicodeString;
        ++MultiByteString;
        ++UnicodeString;
        *(MultiByteString - 1) = v13[v15];
        --v14;
      }
      while ( v14 );
    }
  }
  return 0;
}
