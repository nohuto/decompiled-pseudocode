/*
 * XREFs of PopAnsiStringToUnicodeString @ 0x1407A87B8
 * Callers:
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7F20 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlAnsiStringToUnicodeString @ 0x140773DF0 (RtlAnsiStringToUnicodeString.c)
 *     RtlxOemStringToUnicodeSize @ 0x140773EC0 (RtlxOemStringToUnicodeSize.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall PopAnsiStringToUnicodeString(PUNICODE_STRING DestinationString, PCANSI_STRING SourceString)
{
  ULONG v4; // eax
  unsigned int v5; // ebp
  PVOID *p_Buffer; // rbx
  __int64 Pool2; // r15
  wchar_t **v8; // rsi
  NTSTATUS result; // eax

  v4 = RtlxOemStringToUnicodeSize(SourceString);
  v5 = 0xFFFF;
  p_Buffer = (PVOID *)&DestinationString->Buffer;
  if ( v4 > 0xFFFF )
  {
    if ( *p_Buffer )
    {
      v8 = &DestinationString->Buffer;
      goto LABEL_7;
    }
  }
  else
  {
    v5 = v4;
    if ( *p_Buffer )
    {
      v8 = &DestinationString->Buffer;
      if ( DestinationString->MaximumLength >= v4 )
        goto LABEL_7;
    }
  }
  Pool2 = ExAllocatePool2(256LL, v5, 1414616912LL);
  v8 = &DestinationString->Buffer;
  if ( Pool2 )
  {
    if ( *p_Buffer )
      ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = (PVOID)Pool2;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v5;
  }
LABEL_7:
  result = RtlAnsiStringToUnicodeString(DestinationString, SourceString, 0);
  if ( result >= 0 )
    (*v8)[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
