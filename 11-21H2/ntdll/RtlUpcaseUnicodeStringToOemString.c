/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x18000C380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDidUnicodeToOemWork @ 0x18000C458 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18000C590 (RtlxUnicodeStringToOemSize.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000E2C0 (AllocateOrValidateCharStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  __int64 v7; // rcx
  unsigned __int16 *p_MaximumLength; // r12
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  int v11; // ebx
  ULONG v12; // ecx
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  BytesInOemString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  LOBYTE(v7) = AllocateDestinationString;
  result = AllocateOrValidateCharStringBuffer(v7, v6, &DestinationString->Buffer, &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v11 = RtlUpcaseUnicodeToOemN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInOemString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 >= 0 )
    {
      v12 = BytesInOemString;
      DestinationString->Length = BytesInOemString;
      (*p_Buffer)[v12] = 0;
      if ( !(unsigned __int8)RtlpDidUnicodeToOemWork(DestinationString, SourceString) )
        v11 = -1073741470;
    }
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v11;
  }
  return result;
}
