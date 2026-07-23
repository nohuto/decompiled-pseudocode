/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x18010F860
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x18005E6B0 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x18005E96C (CountUnicodeToUTF8.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // bp
  NTSTATUS result; // eax
  ULONG v8; // edi
  char *StringRoutine; // rax
  ULONG MaximumLength; // ecx
  int v11; // edi
  unsigned __int16 v12; // r8
  ULONG UTF8StringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  v6 = 0;
  result = CountUnicodeToUTF8((unsigned int *)SourceString->Buffer, SourceString->Length, &UTF8StringActualByteCount);
  if ( result >= 0 )
  {
    v8 = UTF8StringActualByteCount + 1;
    UTF8StringActualByteCount = v8;
    if ( v8 > 0xFFFF )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      StringRoutine = (char *)NtdllpAllocateStringRoutine(v8);
      DestinationString->Buffer = StringRoutine;
      if ( !StringRoutine )
        return -1073741801;
      DestinationString->MaximumLength = v8;
      LOWORD(MaximumLength) = v8;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v8 > MaximumLength )
      {
        if ( !(_WORD)MaximumLength )
          return -2147483643;
        v6 = 1;
      }
    }
    v11 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength - 1,
            &UTF8StringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v11 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
    }
    else
    {
      v12 = UTF8StringActualByteCount;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
      DestinationString->Length = v12;
      if ( v6 )
        return -2147483643;
    }
    return v11;
  }
  return result;
}
