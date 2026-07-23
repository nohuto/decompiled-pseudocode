/*
 * XREFs of MiLoadUserSymbols @ 0x140A30B64
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAC0 (MiMapViewOfImageSection.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x14020AA14 (DbgUnicodeStringToAnsiString.c)
 *     MiReferenceControlAreaFile @ 0x1402A22B4 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A23C0 (MiDereferenceControlAreaFile.c)
 *     DbgLoadUserImageSymbols @ 0x1405A7774 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x140756D50 (RtlFreeAnsiString.c)
 */

void __fastcall MiLoadUserSymbols(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  int v4; // ebx
  _STRING AnsiString; // [rsp+30h] [rbp-38h] BYREF

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
