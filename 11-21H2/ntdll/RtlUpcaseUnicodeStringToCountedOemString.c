/*
 * XREFs of RtlUpcaseUnicodeStringToCountedOemString @ 0x1800F62F0
 * Callers:
 *     RtlIsNameLegalDOS8Dot3 @ 0x180109350 (RtlIsNameLegalDOS8Dot3.c)
 * Callees:
 *     RtlpDidUnicodeToOemWork @ 0x18000C458 (RtlpDidUnicodeToOemWork.c)
 *     RtlUpcaseUnicodeToOemN @ 0x18000C510 (RtlUpcaseUnicodeToOemN.c)
 *     RtlxUnicodeStringToOemSize @ 0x18000C590 (RtlxUnicodeStringToOemSize.c)
 *     AllocateOrValidateCharStringBuffer @ 0x18000E2C0 (AllocateOrValidateCharStringBuffer.c)
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 */

NTSTATUS __cdecl RtlUpcaseUnicodeStringToCountedOemString(
        POEM_STRING DestinationString,
        PUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  ULONG v6; // eax
  NTSTATUS result; // eax
  unsigned __int16 *p_MaximumLength; // r13
  char **p_Buffer; // r14
  int v10; // esi
  ULONG BytesInOemString; // [rsp+98h] [rbp+20h] BYREF

  v6 = RtlxUnicodeStringToOemSize((PWCH *)SourceString) - 1;
  BytesInOemString = v6;
  if ( v6 )
  {
    if ( v6 <= 0xFFFF )
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      p_Buffer = &DestinationString->Buffer;
      result = AllocateOrValidateCharStringBuffer(
                 AllocateDestinationString,
                 v6,
                 (__int64 *)&DestinationString->Buffer,
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
          DestinationString->Length = BytesInOemString;
          if ( !RtlpDidUnicodeToOemWork((__int64)DestinationString, (__int64)SourceString) )
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
