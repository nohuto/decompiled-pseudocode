/*
 * XREFs of RtlDowncaseUnicodeString @ 0x1407BE510
 * Callers:
 *     DifRtlDowncaseUnicodeStringWrapper @ 0x1405EB940 (DifRtlDowncaseUnicodeStringWrapper.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084F140 (ExpKdPullRemoteFileForUser.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x140316F8C (AllocateOrValidateUnicodeStringBuffer.c)
 *     NLS_DOWNCASE @ 0x14034E568 (NLS_DOWNCASE.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

NTSTATUS __stdcall RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  unsigned __int16 *v7; // rdx
  char v8; // r10
  NTSTATUS result; // eax
  unsigned int v10; // r11d

  v5 = 0LL;
  if ( AllocateDestinationString || SourceString->Length )
  {
    v6 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 155);
    result = AllocateOrValidateUnicodeStringBuffer(
               v8,
               *v7,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v10 = SourceString->Length >> 1;
    while ( (unsigned int)v5 < v10 )
    {
      DestinationString->Buffer[v5] = NLS_DOWNCASE(v6, SourceString->Buffer[v5]);
      v5 = (unsigned int)(v5 + 1);
    }
    DestinationString->Length = SourceString->Length;
  }
  else
  {
    DestinationString->Length = 0;
  }
  return 0;
}
