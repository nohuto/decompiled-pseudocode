/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x18005F9D0
 * Callers:
 *     toupper @ 0x180095040 (toupper.c)
 *     _mbstrlen @ 0x180098718 (_mbstrlen.c)
 *     mbtowc @ 0x1800995D4 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x18009BD44 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x180055830 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  int v2; // edx
  const CHAR *v3; // r9
  ULONG UTF8StringByteCount; // edi
  unsigned __int16 CodePage; // cx
  unsigned __int16 **p_MultiByteTable; // r11
  unsigned __int16 DBCSCodePage; // ax
  unsigned __int16 *MultiByteTable; // r10
  unsigned __int16 *DBCSOffsets; // r8
  WCHAR *p_UnicodeStringDestination; // rsi
  ULONG v11; // ebp
  __int64 v12; // r8
  WCHAR *v13; // rdx
  __int64 v14; // rax
  UCHAR v16; // al
  __int64 v17; // rcx
  signed __int32 v18[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  _InterlockedOr(v18, 0);
  v2 = 1;
  if ( GlobalRtlNlsState.CodePage != 0xFDE9 && CodePageTable.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v18, 0);
    v3 = (const CHAR *)*SourceCharacter;
    if ( *(_WORD *)(qword_1801847F0 + 2LL * **SourceCharacter) )
    {
      UTF8StringByteCount = 2;
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  v3 = (const CHAR *)*SourceCharacter;
  v16 = **SourceCharacter;
  if ( v16 < 0xC0u )
  {
LABEL_4:
    UTF8StringByteCount = 1;
    goto LABEL_5;
  }
  if ( v16 >= 0xE0u )
  {
    if ( v16 >= 0xF0u )
    {
      UTF8StringByteCount = 1;
      if ( v16 < 0xF8u )
        UTF8StringByteCount = 4;
    }
    else
    {
      UTF8StringByteCount = 3;
    }
  }
  else
  {
    UTF8StringByteCount = 2;
  }
LABEL_5:
  _InterlockedOr(v18, 0);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    CodePage = Utf8TableInfo.CodePage;
    p_MultiByteTable = &Utf8TableInfo.MultiByteTable;
    DBCSCodePage = Utf8TableInfo.DBCSCodePage;
    MultiByteTable = Utf8TableInfo.MultiByteTable;
    DBCSOffsets = Utf8TableInfo.DBCSOffsets;
  }
  else
  {
    _InterlockedOr(v18, 0);
    CodePage = GlobalRtlNlsState.CodePage;
    p_MultiByteTable = &GlobalRtlNlsState.MultiByteTable;
    DBCSCodePage = GlobalRtlNlsState.DBCSCodePage;
    MultiByteTable = GlobalRtlNlsState.MultiByteTable;
    DBCSOffsets = GlobalRtlNlsState.DBCSOffsets;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v11 = UTF8StringByteCount;
  if ( CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
  }
  else if ( DBCSCodePage )
  {
    while ( v11 )
    {
      --v2;
      --v11;
      v17 = *(unsigned __int8 *)v3;
      if ( DBCSOffsets[v17] )
      {
        if ( !v11 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        ++v3;
        --v11;
        *p_UnicodeStringDestination = DBCSOffsets[*(unsigned __int8 *)v3 + (unsigned __int64)DBCSOffsets[v17]];
      }
      else
      {
        *p_UnicodeStringDestination = (*p_MultiByteTable)[v17];
      }
      ++p_UnicodeStringDestination;
      ++v3;
      if ( !v2 )
        break;
    }
  }
  else
  {
    v12 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v12 = 1LL;
    v13 = &UnicodeStringDestination;
    do
    {
      v14 = *(unsigned __int8 *)v3;
      ++v13;
      ++v3;
      *(v13 - 1) = MultiByteTable[v14];
      --v12;
    }
    while ( v12 );
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
