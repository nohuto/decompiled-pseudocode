/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x18010FA00
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     RtlUnicodeToUTF8N @ 0x180059D30 (RtlUnicodeToUTF8N.c)
 *     CountUnicodeToUTF8 @ 0x18005A008 (CountUnicodeToUTF8.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  char v6; // r14
  NTSTATUS result; // eax
  ULONG v8; // ebx
  char *StringRoutine; // rax
  unsigned __int16 *p_MaximumLength; // rsi
  ULONG MaximumLength; // ecx
  int v12; // ebx
  unsigned __int16 v13; // r8
  ULONG UTF8StringActualByteCount; // [rsp+68h] [rbp+10h] BYREF

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
      p_MaximumLength = &DestinationString->MaximumLength;
      LOWORD(MaximumLength) = v8;
      DestinationString->MaximumLength = v8;
    }
    else
    {
      p_MaximumLength = &DestinationString->MaximumLength;
      MaximumLength = DestinationString->MaximumLength;
      if ( v8 > MaximumLength )
      {
        if ( !(_WORD)MaximumLength )
          return -2147483643;
        v6 = 1;
      }
    }
    v12 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength - 1,
            &UTF8StringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v12 < 0 )
    {
      if ( AllocateDestinationString )
      {
        NtdllpFreeStringRoutine(DestinationString->Buffer);
        DestinationString->Buffer = 0LL;
        *p_MaximumLength = 0;
      }
    }
    else
    {
      v13 = UTF8StringActualByteCount;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
      DestinationString->Length = v13;
      if ( v6 )
        return -2147483643;
    }
    return v12;
  }
  return result;
}
