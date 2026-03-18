/*
 * XREFs of MiLoadUserSymbols @ 0x14096CCF8
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x140280D08 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x140281750 (MiReferenceControlAreaFile.c)
 *     DbgUnicodeStringToAnsiString @ 0x1402D9DB4 (DbgUnicodeStringToAnsiString.c)
 *     DbgLoadUserImageSymbols @ 0x1405E40E4 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x14070AFC0 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rsi
  int v4; // ebx
  STRING AnsiString; // [rsp+30h] [rbp-38h] BYREF

  AnsiString = 0LL;
  v2 = MiReferenceControlAreaFile(a1);
  v3 = v2;
  if ( *(_WORD *)(v2 + 88) )
  {
    v4 = DbgUnicodeStringToAnsiString(&AnsiString, (PCUNICODE_STRING)(v2 + 88));
    MiDereferenceControlAreaFile(a1, v3);
    if ( v4 )
    {
      DbgLoadUserImageSymbols();
      RtlFreeAnsiString(&AnsiString);
    }
  }
  else
  {
    MiDereferenceControlAreaFile(a1, v2);
  }
}
