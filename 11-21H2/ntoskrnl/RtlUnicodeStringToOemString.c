/*
 * XREFs of RtlUnicodeStringToOemString @ 0x1406EAEF0
 * Callers:
 *     sub_14061BE70 @ 0x14061BE70 (sub_14061BE70.c)
 *     sub_140A6CC50 @ 0x140A6CC50 (sub_140A6CC50.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     RtlUnicodeToOemN @ 0x1407592A0 (RtlUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUnicodeStringToOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r15
  char **p_Buffer; // rdi
  NTSTATUS result; // eax
  ULONG v10; // edx
  int v11; // ebx
  ULONG BytesInOemString; // [rsp+88h] [rbp+20h] BYREF

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
    v11 = RtlUnicodeToOemN(*p_Buffer, *p_MaximumLength, &BytesInOemString, SourceString->Buffer, SourceString->Length);
    if ( v11 >= 0 )
    {
      v10 = BytesInOemString;
      (*p_Buffer)[BytesInOemString] = 0;
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
