/*
 * XREFs of RtlUpcaseUnicodeStringToAnsiString @ 0x1409B58B0
 * Callers:
 *     sub_14061BFB0 @ 0x14061BFB0 (sub_14061BFB0.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x140759990 (RtlUpcaseUnicodeToMultiByteN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
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
  ULONG v10; // edx
  int v11; // ebx
  ULONG BytesInMultiByteString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  BytesInMultiByteString = v6;
  if ( v6 > 0xFFFF )
    return -1073741584;
  p_MaximumLength = &DestinationString->MaximumLength;
  p_Buffer = &DestinationString->Buffer;
  result = sub_1402D7DE0(
             AllocateDestinationString,
             v6,
             (__int64 *)&DestinationString->Buffer,
             &DestinationString->MaximumLength);
  if ( result >= 0 )
  {
    v11 = RtlUpcaseUnicodeToMultiByteN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInMultiByteString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 >= 0 )
    {
      v10 = BytesInMultiByteString;
      (*p_Buffer)[BytesInMultiByteString] = 0;
      DestinationString->Length = v10;
      v11 = 0;
    }
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePoolWithTag(*p_Buffer, v10);
        *p_Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    return v11;
  }
  return result;
}
