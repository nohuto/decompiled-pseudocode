/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1407596C0
 * Callers:
 *     sub_14061C0F0 @ 0x14061C0F0 (sub_14061C0F0.c)
 *     RtlIsNameLegalDOS8Dot3 @ 0x1407594E0 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     sub_1402D7DE0 @ 0x1402D7DE0 (sub_1402D7DE0.c)
 *     sub_140759798 @ 0x140759798 (sub_140759798.c)
 *     RtlUpcaseUnicodeToOemN @ 0x1407598D0 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x140759A50 (RtlxUnicodeStringToOemSize.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  unsigned __int16 *p_MaximumLength; // r13
  char **p_Buffer; // r14
  NTSTATUS result; // eax
  ULONG v10; // edx
  int v11; // esi
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize(SourceString) - 1;
  BytesInOemString = v6;
  if ( v6 )
  {
    if ( v6 > 0xFFFF )
    {
      return -1073741584;
    }
    else
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
        v11 = RtlUpcaseUnicodeToOemN(
                *p_Buffer,
                *p_MaximumLength,
                &BytesInOemString,
                SourceString->Buffer,
                SourceString->Length);
        if ( v11 >= 0 )
        {
          DestinationString->Length = BytesInOemString;
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
