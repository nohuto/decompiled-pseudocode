/*
 * XREFs of RtlOemStringToUnicodeString @ 0x1407F9B70
 * Callers:
 *     sub_14061B690 @ 0x14061B690 (sub_14061B690.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     RtlOemToUnicodeN @ 0x1407F9C40 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407F9CA0 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlOemStringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  wchar_t **p_Buffer; // rdi
  NTSTATUS result; // eax
  ULONG v10; // edx
  int v11; // ebx
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(SourceString);
  BytesInUnicodeString = v6;
  if ( v6 > 0xFFFE )
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
    v11 = RtlOemToUnicodeN(
            *p_Buffer,
            *p_MaximumLength,
            &BytesInUnicodeString,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 >= 0 )
    {
      v10 = BytesInUnicodeString;
      (*p_Buffer)[(unsigned __int64)BytesInUnicodeString >> 1] = 0;
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
