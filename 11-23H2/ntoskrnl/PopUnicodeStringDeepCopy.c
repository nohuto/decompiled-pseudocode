/*
 * XREFs of PopUnicodeStringDeepCopy @ 0x1408599E0
 * Callers:
 *     PoGetRequester @ 0x140209D2C (PoGetRequester.c)
 *     PopPowerRequestStatsGetIdForRequest @ 0x1407A7F20 (PopPowerRequestStatsGetIdForRequest.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140208E68 (RtlUnicodeStringCopy.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall PopUnicodeStringDeepCopy(
        PUNICODE_STRING DestinationString,
        PCUNICODE_STRING SourceString,
        __int64 a3,
        unsigned int a4)
{
  PVOID *p_Buffer; // rbx
  unsigned int v5; // r8d
  unsigned int v6; // ebp
  __int64 Pool2; // r15
  wchar_t **v10; // r14
  NTSTATUS result; // eax

  p_Buffer = (PVOID *)&DestinationString->Buffer;
  v5 = SourceString->Length + 2;
  v6 = 0xFFFF;
  if ( v5 > 0xFFFF )
  {
    if ( *p_Buffer )
    {
      v10 = &DestinationString->Buffer;
      goto LABEL_7;
    }
  }
  else
  {
    v6 = SourceString->Length + 2;
    if ( *p_Buffer )
    {
      v10 = &DestinationString->Buffer;
      if ( DestinationString->MaximumLength >= v5 )
        goto LABEL_7;
    }
  }
  Pool2 = ExAllocatePool2(256LL, v6, a4);
  v10 = (wchar_t **)p_Buffer;
  if ( Pool2 )
  {
    if ( *p_Buffer )
      ExFreePoolWithTag(*p_Buffer, 0);
    *p_Buffer = (PVOID)Pool2;
    DestinationString->Length = 0;
    DestinationString->MaximumLength = v6;
  }
LABEL_7:
  result = RtlUnicodeStringCopy(DestinationString, SourceString);
  if ( result >= 0 )
    (*v10)[(unsigned __int64)DestinationString->Length >> 1] = 0;
  return result;
}
