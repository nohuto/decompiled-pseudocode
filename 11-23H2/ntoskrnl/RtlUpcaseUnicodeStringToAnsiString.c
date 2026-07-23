/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1409B8D30
 * Callers:
 *     DifRtlUpcaseUnicodeStringToAnsiStringWrapper @ 0x1405EC5B0 (DifRtlUpcaseUnicodeStringToAnsiStringWrapper.c)
 * Callees:
 *     AllocateOrValidateCharStringBuffer @ 0x1402F791C (AllocateOrValidateCharStringBuffer.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x1406D9DB0 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140755ED0 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePool @ 0x140AAECC0 (ExFreePool.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToAnsiString(
        PANSI_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rdi
  int v10; // ebx
  unsigned __int16 v11; // dx
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  BytesInMultiByteString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = AllocateOrValidateCharStringBuffer(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v10 = RtlUpcaseUnicodeToMultiByteN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInMultiByteString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 >= 0 )
    {
      v11 = BytesInMultiByteString;
      (*p_Buffer)[BytesInMultiByteString] = 0;
      DestinationString->Length = v11;
      v10 = 0;
    }
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePool(*p_Buffer);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v10;
  }
  return result;
}
