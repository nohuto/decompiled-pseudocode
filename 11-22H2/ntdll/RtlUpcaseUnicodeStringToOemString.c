/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x180089D00
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x180057C80 (RtlxUnicodeStringToOemSize.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059270 (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToOemN @ 0x180089DE0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlpDidUnicodeToOemWork @ 0x180089E40 (RtlpDidUnicodeToOemWork.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r12
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG v11; // ecx
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize((PWCH *)SourceString);
  BytesInOemString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v6,
             &DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToOemN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInOemString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInOemString;
      DestinationString->Length = BytesInOemString;
      (*p_Buffer)[v11] = 0;
      if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
        v10 = -1073741470;
    }
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v10;
  }
  return result;
}
