/*
 * XREFs of RtlMultiByteToUnicodeSize @ 0x140773EF0
 * Callers:
 *     RtlxOemStringToUnicodeSize @ 0x140773EC0 (RtlxOemStringToUnicodeSize.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     RtlpIsUtf8Process @ 0x1406DA560 (RtlpIsUtf8Process.c)
 *     RtlUTF8ToUnicodeN @ 0x1406DA600 (RtlUTF8ToUnicodeN.c)
 */

NTSTATUS __stdcall RtlMultiByteToUnicodeSize(
        PULONG BytesInUnicodeString,
        const CHAR *MultiByteString,
        ULONG BytesInMultiByteString)
{
  _QWORD *CurrentServerSiloGlobals; // rax
  ULONG v7; // edx
  __int16 v8; // r9
  __int64 v9; // r8
  __int64 v11; // rax
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    if ( BytesInMultiByteString )
      RtlUTF8ToUnicodeN(0LL, 0, BytesInUnicodeString, MultiByteString, BytesInMultiByteString);
    else
      *BytesInUnicodeString = 0;
  }
  else
  {
    _InterlockedOr(v12, 0);
    CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
    v9 = CurrentServerSiloGlobals[151];
    if ( *((_WORD *)CurrentServerSiloGlobals + 538) == v8 )
    {
      v7 = 2 * BytesInMultiByteString;
      goto LABEL_4;
    }
    for ( ; BytesInMultiByteString; v7 += 2 )
    {
      v11 = *(unsigned __int8 *)MultiByteString;
      --BytesInMultiByteString;
      ++MultiByteString;
      if ( *(_WORD *)(v9 + 2 * v11) != v8 )
      {
        if ( !BytesInMultiByteString )
        {
          v7 += 2;
          break;
        }
        --BytesInMultiByteString;
        ++MultiByteString;
      }
    }
LABEL_4:
    *BytesInUnicodeString = v7;
  }
  return 0;
}
