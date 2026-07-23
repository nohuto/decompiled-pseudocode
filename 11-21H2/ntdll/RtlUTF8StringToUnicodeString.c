/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x18005BE20
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlUTF8ToUnicodeN @ 0x18005BF00 (RtlUTF8ToUnicodeN.c)
 *     CountUTF8ToUnicode @ 0x18005C2BC (CountUTF8ToUnicode.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  NTSTATUS result; // eax
  ULONG v7; // edi
  wchar_t *StringRoutine; // rax
  ULONG MaximumLength; // ecx
  int v10; // edi
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  result = CountUTF8ToUnicode(SourceString->Buffer, SourceString->Length, &UnicodeStringActualByteCount);
  if ( result >= 0 )
  {
    v7 = UnicodeStringActualByteCount + 2;
    UnicodeStringActualByteCount = v7;
    if ( v7 > 0xFFFE )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v7);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      DestinationString->MaximumLength = v7;
      LOWORD(MaximumLength) = v7;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v7 > MaximumLength )
        return -2147483643;
    }
    v10 = RtlUTF8ToUnicodeN(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength,
            &UnicodeStringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v10 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
      return v10;
    }
    v11 = UnicodeStringActualByteCount;
    v12 = DestinationString->MaximumLength;
    DestinationString->Length = UnicodeStringActualByteCount;
    if ( (unsigned int)v11 < v12 )
    {
      v10 = 0;
      DestinationString->Buffer[v11 >> 1] = 0;
      return v10;
    }
    return -2147483643;
  }
  return result;
}
