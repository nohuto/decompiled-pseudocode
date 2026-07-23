/*
 * XREFs of RtlUnicodeStringToUTF8String @ 0x1409BED90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D7E54 @ 0x1402D7E54 (sub_1402D7E54.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlUnicodeToUTF8N @ 0x140759F40 (RtlUnicodeToUTF8N.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUnicodeStringToUTF8String(
        PUTF8_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  unsigned int Length; // edx
  char v7; // bp
  NTSTATUS result; // eax
  ULONG v9; // edi
  char *v10; // rax
  ULONG MaximumLength; // ecx
  ULONG v12; // edx
  int v13; // edi
  unsigned __int16 v14; // r8
  ULONG UTF8StringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  Length = SourceString->Length;
  UTF8StringActualByteCount = 0;
  v7 = 0;
  result = sub_1402D7E54((unsigned int *)SourceString->Buffer, Length, &UTF8StringActualByteCount);
  if ( result >= 0 )
  {
    v9 = UTF8StringActualByteCount + 1;
    UTF8StringActualByteCount = v9;
    if ( v9 > 0xFFFF )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      v10 = (char *)sub_1406BE560(v9);
      DestinationString->Buffer = v10;
      if ( !v10 )
        return -1073741801;
      DestinationString->MaximumLength = v9;
      LOWORD(MaximumLength) = v9;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v9 > MaximumLength )
      {
        if ( !(_WORD)MaximumLength )
          return -2147483643;
        v7 = 1;
      }
    }
    v13 = RtlUnicodeToUTF8N(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength - 1,
            &UTF8StringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v13 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePoolWithTag(DestinationString->Buffer, v12);
        DestinationString->Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
    }
    else
    {
      v14 = UTF8StringActualByteCount;
      DestinationString->Buffer[UTF8StringActualByteCount] = 0;
      DestinationString->Length = v14;
      if ( v7 )
        return -2147483643;
    }
    return v13;
  }
  return result;
}
