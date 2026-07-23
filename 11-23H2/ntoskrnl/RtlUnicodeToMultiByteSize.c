/*
 * XREFs of RtlUnicodeToMultiByteSize @ 0x140758960
 * Callers:
 *     wcstombs @ 0x1403DBDE0 (wcstombs.c)
 *     RtlxUnicodeStringToOemSize @ 0x140755ED0 (RtlxUnicodeStringToOemSize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406DA560 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToUTF8N @ 0x1407589F0 (RtlUnicodeToUTF8N.c)
 */

NTSTATUS __stdcall RtlUnicodeToMultiByteSize(
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v7; // edx
  ULONG v8; // ebx
  __int64 v9; // r8
  __int16 v10; // r9
  __int64 v12; // rax
  signed __int32 v13[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    if ( BytesInUnicodeString )
      RtlUnicodeToUTF8N(0LL, 0, BytesInMultiByteString, UnicodeString, BytesInUnicodeString);
    else
      *BytesInMultiByteString = 0;
  }
  else
  {
    _InterlockedOr(v13, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v8 = BytesInUnicodeString >> 1;
    v9 = CurrentServerSiloGlobals[138];
    if ( *((_WORD *)CurrentServerSiloGlobals + 538) == v10 )
    {
      v7 = v8;
    }
    else
    {
      for ( ; v8; --v8 )
      {
        v12 = *UnicodeString++;
        v7 += (HIBYTE(*(_WORD *)(v9 + 2 * v12)) != 0) + 1;
      }
    }
    *BytesInMultiByteString = v7;
  }
  return 0;
}
