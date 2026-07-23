/*
 * XREFs of RtlDowncaseUnicodeString @ 0x18000E340
 * Callers:
 *     <none>
 * Callees:
 *     NLS_DOWNCASE @ 0x18000E3E4 (NLS_DOWNCASE.c)
 *     AllocateOrValidateUnicodeStringBuffer @ 0x18000F37C (AllocateOrValidateUnicodeStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlDowncaseUnicodeString(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  PUNICODE_STRING v5; // rsi
  __int64 v6; // rbx
  NTSTATUS result; // eax
  __int64 v8; // r15
  unsigned __int16 *p_MaximumLength; // r9
  wchar_t **p_Buffer; // r8
  unsigned int v11; // r10d

  v5 = DestinationString;
  v6 = 0LL;
  if ( !AllocateDestinationString && !SourceString->Length )
  {
    DestinationString->Length = 0;
    return 0;
  }
  v8 = qword_180177700;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  LOBYTE(DestinationString) = AllocateDestinationString;
  result = AllocateOrValidateUnicodeStringBuffer(DestinationString, SourceString->Length, p_Buffer, p_MaximumLength);
  if ( result >= 0 )
  {
    v11 = SourceString->Length >> 1;
    while ( (unsigned int)v6 < v11 )
    {
      v5->Buffer[v6] = NLS_DOWNCASE(v8, SourceString->Buffer[v6]);
      v6 = (unsigned int)(v6 + 1);
    }
    v5->Length = SourceString->Length;
    return 0;
  }
  return result;
}
