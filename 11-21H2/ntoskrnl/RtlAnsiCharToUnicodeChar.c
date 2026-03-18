/*
 * XREFs of RtlAnsiCharToUnicodeChar @ 0x1407CD880
 * Callers:
 *     _safecrt_mbtowc @ 0x1403E1D00 (_safecrt_mbtowc.c)
 *     toupper @ 0x1403E30E0 (toupper.c)
 *     _mbstrlen @ 0x1403E50F4 (_mbstrlen.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 *     RtlUTF8ToUnicodeN @ 0x14075AA20 (RtlUTF8ToUnicodeN.c)
 *     RtlpIsUtf8Process @ 0x1407CDA20 (RtlpIsUtf8Process.c)
 */

__int64 __fastcall RtlAnsiCharToUnicodeChar(const CHAR **a1)
{
  int v2; // esi
  const CHAR *v3; // rbx
  CHAR v4; // al
  ULONG UTF8StringByteCount; // edi
  _QWORD *CurrentServerSiloGlobals; // rax
  struct _CPTABLEINFO *v7; // r10
  ULONG v8; // edx
  const CHAR *v9; // r8
  char *v10; // rax
  wchar_t *MultiByteTable; // r9
  WCHAR *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  wchar_t *DBCSOffsets; // r11
  WCHAR *p_UnicodeStringDestination; // r9
  __int64 v17; // rcx
  signed __int32 v19[8]; // [rsp+0h] [rbp-48h] BYREF
  WCHAR UnicodeStringDestination; // [rsp+50h] [rbp+8h] BYREF
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  UnicodeStringDestination = 32;
  v2 = 1;
  if ( !(unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    _InterlockedOr(v19, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v3 = *a1;
    UTF8StringByteCount = 2;
    if ( *(_WORD *)(CurrentServerSiloGlobals[151] + 2LL * *(unsigned __int8 *)*a1) )
      goto LABEL_12;
    goto LABEL_11;
  }
  v3 = *a1;
  v4 = **a1;
  if ( (unsigned __int8)v4 < 0xC0u )
  {
LABEL_11:
    UTF8StringByteCount = 1;
    goto LABEL_12;
  }
  if ( (unsigned __int8)v4 >= 0xE0u )
  {
    if ( (unsigned __int8)v4 >= 0xF0u )
    {
      UTF8StringByteCount = 1;
      if ( (unsigned __int8)v4 < 0xF8u )
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
LABEL_12:
  if ( (unsigned __int8)RtlpIsUtf8Process(0LL) )
  {
    v7 = &Utf8TableInfo;
    v8 = UTF8StringByteCount;
    v9 = v3;
  }
  else
  {
    _InterlockedOr(v19, 0);
    v10 = (char *)PsGetCurrentServerSiloGlobals();
    v8 = UTF8StringByteCount;
    v9 = v3;
    v7 = (struct _CPTABLEINFO *)(v10 + 1064);
    if ( v10 == (char *)-1064LL )
    {
LABEL_30:
      RtlUTF8ToUnicodeN(&UnicodeStringDestination, 2u, &UnicodeStringActualByteCount, v3, UTF8StringByteCount);
      goto LABEL_31;
    }
  }
  if ( v7->CodePage == 0xFDE9 )
    goto LABEL_30;
  if ( v7->DBCSCodePage )
  {
    DBCSOffsets = v7->DBCSOffsets;
    p_UnicodeStringDestination = &UnicodeStringDestination;
    while ( v8 )
    {
      --v2;
      --v8;
      v17 = *(unsigned __int8 *)v9;
      if ( DBCSOffsets[v17] )
      {
        if ( !v8 )
        {
          *p_UnicodeStringDestination = 0;
          break;
        }
        ++v9;
        --v8;
        *p_UnicodeStringDestination = DBCSOffsets[*(unsigned __int8 *)v9 + (unsigned __int64)DBCSOffsets[v17]];
      }
      else
      {
        *p_UnicodeStringDestination = v7->MultiByteTable[v17];
      }
      ++p_UnicodeStringDestination;
      ++v9;
      if ( !v2 )
        break;
    }
  }
  else
  {
    MultiByteTable = v7->MultiByteTable;
    v12 = &UnicodeStringDestination;
    v13 = UTF8StringByteCount;
    if ( UTF8StringByteCount > 1 )
      v13 = 1LL;
    do
    {
      v14 = *(unsigned __int8 *)v3;
      ++v12;
      ++v3;
      *(v12 - 1) = MultiByteTable[v14];
      --v13;
    }
    while ( v13 );
  }
LABEL_31:
  *a1 += UTF8StringByteCount;
  return UnicodeStringDestination;
}
