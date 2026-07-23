/*
 * XREFs of RtlOemStringToCountedUnicodeString @ 0x1409B56D0
 * Callers:
 *     sub_14061B550 @ 0x14061B550 (sub_14061B550.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     RtlOemToUnicodeN @ 0x1407F9C40 (RtlOemToUnicodeN.c)
 *     RtlxOemStringToUnicodeSize @ 0x1407F9CA0 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlOemStringToCountedUnicodeString(
        PUNICODE_STRING DestinationString,
        PCOEM_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  unsigned __int16 *p_MaximumLength; // r12
  wchar_t **p_Buffer; // r14
  ULONG v10; // edx
  int v11; // esi
  ULONG BytesInUnicodeString; // [rsp+88h] [rbp+20h] BYREF

  v6 = RtlxOemStringToUnicodeSize(SourceString) - 2;
  BytesInUnicodeString = v6;
  if ( v6 )
  {
    if ( v6 <= 0xFFFE )
    {
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
        if ( v11 < 0 )
        {
          if ( AllocateDestinationString )
          {
            ExFreePoolWithTag(*p_Buffer, v10);
            *p_Buffer = 0LL;
            *p_MaximumLength = 0;
          }
        }
        else
        {
          DestinationString->Length = BytesInUnicodeString;
        }
        return v11;
      }
    }
    else
    {
      return -1073741584;
    }
  }
  else
  {
    *(_DWORD *)&DestinationString->Length = 0;
    DestinationString->Buffer = 0LL;
    return 0;
  }
  return result;
}
