/*
 * XREFs of RtlUnicodeStringToOemString @ 0x180057BB0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     RtlxUnicodeStringToOemSize @ 0x180057C80 (RtlxUnicodeStringToOemSize.c)
 *     RtlUnicodeToOemN @ 0x1800590D0 (RtlUnicodeToOemN.c)
 *     AllocateOrValidateCharStringBuffer @ 0x180059270 (AllocateOrValidateCharStringBuffer.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned __int16 *p_MaximumLength; // r15
  __int64 *p_Buffer; // rdi
  NTSTATUS result; // eax
  NTSTATUS v11; // ebx
  unsigned __int16 v12; // dx
  unsigned int v13; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  v13 = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = (__int64 *)&DestinationString->Buffer;
  LOBYTE(v7) = AllocateDestinationString;
  result = AllocateOrValidateCharStringBuffer(v7, v6, &DestinationString->Buffer, &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v11 = RtlUnicodeToOemN(*p_Buffer, *p_MaximumLength, (unsigned int)&v13, SourceString->Buffer, SourceString->Length);
    if ( v11 >= 0 )
    {
      v12 = v13;
      *(_BYTE *)(v13 + *p_Buffer) = 0;
      DestinationString->Length = v12;
      v11 = 0;
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
