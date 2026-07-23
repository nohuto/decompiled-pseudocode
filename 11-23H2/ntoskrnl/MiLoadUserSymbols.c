/*
 * XREFs of MiLoadUserSymbols @ 0x140A30DA4
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406AEAF0 (MiMapViewOfImageSection.c)
 * Callees:
 *     DbgUnicodeStringToAnsiString @ 0x14020A9F4 (DbgUnicodeStringToAnsiString.c)
 *     MiReferenceControlAreaFile @ 0x1402A2664 (MiReferenceControlAreaFile.c)
 *     MiDereferenceControlAreaFile @ 0x1402A2770 (MiDereferenceControlAreaFile.c)
 *     DbgLoadUserImageSymbols @ 0x1405A7C54 (DbgLoadUserImageSymbols.c)
 *     RtlFreeAnsiString @ 0x140756A30 (RtlFreeAnsiString.c)
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
