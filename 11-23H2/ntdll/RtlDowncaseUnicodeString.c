/*
 * XREFs of RtlDowncaseUnicodeString @ 0x180074340
 * Callers:
 *     <none>
 * Callees:
 *     AllocateOrValidateUnicodeStringBuffer @ 0x180010048 (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NLS_DOWNCASE @ 0x1800743E4 (NLS_DOWNCASE.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  __int64 v5; // rbx
  __int64 v6; // r15
  NTSTATUS result; // eax
  unsigned int v8; // r11d

  v5 = 0LL;
  if ( AllocateDestinationString || SourceString->Length )
  {
    v6 = qword_180184810;
    result = AllocateOrValidateUnicodeStringBuffer(
               AllocateDestinationString,
               SourceString->Length,
               (__int64 *)&DestinationString->Buffer,
               &DestinationString->MaximumLength);
    if ( result < 0 )
      return result;
    v8 = SourceString->Length >> 1;
    while ( (unsigned int)v5 < v8 )
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
