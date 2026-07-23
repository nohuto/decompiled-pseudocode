/*
 * XREFs of RtlUTF8StringToUnicodeString @ 0x1409BEC80
 * Callers:
 *     sub_1408523B4 @ 0x1408523B4 (sub_1408523B4.c)
 * Callees:
 *     sub_1403CAFEC @ 0x1403CAFEC (sub_1403CAFEC.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 *     RtlUTF8ToUnicodeN @ 0x14075AA20 (RtlUTF8ToUnicodeN.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlUTF8StringToUnicodeString(
        PUNICODE_STRING DestinationString,
        PUTF8_STRING SourceString,
        BOOLEAN AllocateDestinationString)
{
  int Length; // edx
  NTSTATUS result; // eax
  ULONG v8; // edi
  wchar_t *v9; // rax
  ULONG MaximumLength; // ecx
  ULONG v11; // edx
  int v12; // edi
  unsigned __int64 v13; // rcx
  unsigned int v14; // eax
  ULONG UnicodeStringActualByteCount; // [rsp+58h] [rbp+10h] BYREF

  Length = SourceString->Length;
  UnicodeStringActualByteCount = 0;
  result = sub_1403CAFEC(SourceString->Buffer, Length, &UnicodeStringActualByteCount);
  if ( result >= 0 )
  {
    v8 = UnicodeStringActualByteCount + 2;
    UnicodeStringActualByteCount = v8;
    if ( v8 > 0xFFFE )
      return -1073741584;
    if ( AllocateDestinationString )
    {
      v9 = (wchar_t *)sub_1406BE560(v8);
      DestinationString->Buffer = v9;
      if ( !v9 )
        return -1073741801;
      DestinationString->MaximumLength = v8;
      LOWORD(MaximumLength) = v8;
    }
    else
    {
      MaximumLength = DestinationString->MaximumLength;
      if ( v8 > MaximumLength )
        return -2147483643;
    }
    v12 = RtlUTF8ToUnicodeN(
            DestinationString->Buffer,
            (unsigned __int16)MaximumLength,
            &UnicodeStringActualByteCount,
            SourceString->Buffer,
            SourceString->Length);
    if ( v12 < 0 )
    {
      if ( AllocateDestinationString )
      {
        ExFreePoolWithTag(DestinationString->Buffer, v11);
        DestinationString->Buffer = 0LL;
        DestinationString->MaximumLength = 0;
      }
      return v12;
    }
    v13 = UnicodeStringActualByteCount;
    v14 = DestinationString->MaximumLength;
    DestinationString->Length = UnicodeStringActualByteCount;
    if ( (unsigned int)v13 < v14 )
    {
      v12 = 0;
      DestinationString->Buffer[v13 >> 1] = 0;
      return v12;
    }
    return -2147483643;
  }
  return result;
}
