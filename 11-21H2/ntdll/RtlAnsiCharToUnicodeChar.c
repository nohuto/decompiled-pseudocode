/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x18005F8E0
 * Callers:
 *     toupper @ 0x180099780 (toupper.c)
 *     _mbstrlen @ 0x18009CE18 (_mbstrlen.c)
 *     mbtowc @ 0x18009DC94 (mbtowc.c)
 *     _safecrt_mbtowc @ 0x1800A03B4 (_safecrt_mbtowc.c)
 * Callees:
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 */

WCHAR __cdecl RtlAnsiCharToUnicodeChar(PUCHAR *SourceCharacter)
{
  const CHAR *v2; // r9
  ULONG UTF8StringByteCount; // ebx
  _CPTABLEINFO *v4; // rdx
  WCHAR *p_UnicodeStringDestination; // r8
  ULONG v6; // r10d
  int v7; // r11d
  wchar_t *MultiByteTable; // r10
  __int64 v9; // r8
  WCHAR *v10; // rdx
  __int64 v11; // rax
  wchar_t *DBCSOffsets; // rsi
  UCHAR v14; // al
  __int64 v15; // rcx
  signed __int32 v16[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  _InterlockedOr(v16, 0);
  if ( GlobalRtlNlsState.CodePage != 0xFDE9 && CodePageTable.CodePage != 0xFDE9 )
  {
    _InterlockedOr(v16, 0);
    v2 = (const CHAR *)*SourceCharacter;
    if ( !*(_WORD *)(qword_1801776E0 + 2LL * **SourceCharacter) )
    {
LABEL_4:
      UTF8StringByteCount = 1;
      goto LABEL_5;
    }
    goto LABEL_16;
  }
  v2 = (const CHAR *)*SourceCharacter;
  v14 = **SourceCharacter;
  if ( v14 < 0xC0u )
    goto LABEL_4;
  if ( v14 < 0xE0u )
  {
LABEL_16:
    UTF8StringByteCount = 2;
    goto LABEL_5;
  }
  UTF8StringByteCount = 3;
  if ( v14 >= 0xF0u )
    UTF8StringByteCount = v14 < 0xF8u ? 4 : 1;
LABEL_5:
  _InterlockedOr(v16, 0);
  if ( GlobalRtlNlsState.CodePage == 0xFDE9 || CodePageTable.CodePage == 0xFDE9 )
  {
    v4 = &Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v16, 0);
    v4 = &GlobalRtlNlsState;
  }
  p_UnicodeStringDestination = &UnicodeStringDestination;
  v6 = UTF8StringByteCount;
  if ( v4->CodePage == 0xFDE9 )
  {
    RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v2, UTF8StringByteCount);
  }
  else
  {
    v7 = 1;
    if ( v4->DBCSCodePage )
    {
      DBCSOffsets = v4->DBCSOffsets;
      while ( v6 )
      {
        v15 = *(unsigned __int8 *)v2;
        --v7;
        --v6;
        if ( DBCSOffsets[v15] )
        {
          if ( !v6 )
          {
            *p_UnicodeStringDestination = 0;
            break;
          }
          ++v2;
          --v6;
          *p_UnicodeStringDestination = DBCSOffsets[*(unsigned __int8 *)v2 + (unsigned __int64)DBCSOffsets[v15]];
        }
        else
        {
          *p_UnicodeStringDestination = v4->MultiByteTable[v15];
        }
        ++p_UnicodeStringDestination;
        ++v2;
        if ( !v7 )
          break;
      }
    }
    else
    {
      MultiByteTable = v4->MultiByteTable;
      v9 = UTF8StringByteCount;
      v10 = &UnicodeStringDestination;
      if ( UTF8StringByteCount > 1 )
        v9 = 1LL;
      do
      {
        v11 = *(unsigned __int8 *)v2++;
        *v10++ = MultiByteTable[v11];
        --v9;
      }
      while ( v9 );
    }
  }
  *SourceCharacter += UTF8StringByteCount;
  return UnicodeStringDestination;
}
