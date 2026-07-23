/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x140755C40
 * Callers:
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x140755D00 (RtlUpcaseUnicodeStringToCountedOemString.c)
 *     RtlUpcaseUnicodeStringToOemString @ 0x140874310 (RtlUpcaseUnicodeStringToOemString.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x14022D4E0 (UpcaseUnicodeToSingleByteNHelper.c)
 *     UpcaseUnicodeToUTF8NHelper @ 0x1403A5C0C (UpcaseUnicodeToUTF8NHelper.c)
 *     UpcaseUnicodeToMultiByteNHelper @ 0x140463FC4 (UpcaseUnicodeToMultiByteNHelper.c)
 *     RtlpIsUtf8Process @ 0x1406DA560 (RtlpIsUtf8Process.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeToOemN(
        PCHAR OemString,
        ULONG MaxBytesInOemString,
        PULONG BytesInOemString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  ULONG v6; // ebx
  _QWORD *CurrentServerSiloGlobals; // rax
  __int16 v11; // r8
  signed __int32 v13[8]; // [rsp+0h] [rbp-48h] BYREF

  v6 = BytesInUnicodeString >> 1;
  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(OemString, MaxBytesInOemString, BytesInOemString, (__int64)UnicodeString, v6);
  _InterlockedOr(v13, 0);
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  if ( *((_WORD *)CurrentServerSiloGlobals + 570) == v11 )
    return UpcaseUnicodeToSingleByteNHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6,
             CurrentServerSiloGlobals[146],
             CurrentServerSiloGlobals[145]);
  else
    return UpcaseUnicodeToMultiByteNHelper(
             OemString,
             MaxBytesInOemString,
             BytesInOemString,
             (unsigned __int16 *)UnicodeString,
             v6);
}
