/*
 * XREFs of RtlUpcaseUnicodeStringToOemString @ 0x1406E7B60
 * Callers:
 *     sub_14061C230 @ 0x14061C230 (sub_14061C230.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     sub_140759798 @ 0x140759798 (sub_140759798.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r12
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  ULONG v10; // edx
  int v11; // ebx
  ULONG v12; // ecx
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString);
  BytesInOemString = v6;
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
      if ( !(unsigned __int8)sub_140759798(DestinationString, SourceString) )
        v11 = -1073741470;
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
