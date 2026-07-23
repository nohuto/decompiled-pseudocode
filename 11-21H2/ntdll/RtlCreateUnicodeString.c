/*
 * XREFs of RtlCreateUnicodeString @ 0x18004A9D0
 * Callers:
 *     EtwpInitLoggerContext @ 0x18000A828 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18000AC28 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGenerateFileName @ 0x18000ACA8 (EtwpGenerateFileName.c)
 *     LdrpLogDllStateEx2 @ 0x18001DE58 (LdrpLogDllStateEx2.c)
 *     RtlCanonicalizeDomainName @ 0x180031A00 (RtlCanonicalizeDomainName.c)
 *     RtlConvertSidToUnicodeString @ 0x180048370 (RtlConvertSidToUnicodeString.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x18004BA58 (RtlpInitUnicodeStringUsingBuffer.c)
 *     LdrSetDllDirectory @ 0x180060540 (LdrSetDllDirectory.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DC4E8 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180025BF0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180025C10 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeString(PUNICODE_STRING DestinationString, PCWSTR SourceString)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  wchar_t *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( SourceString[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v5);
  DestinationString->Buffer = StringRoutine;
  if ( !StringRoutine )
    return 0;
  DestinationString->MaximumLength = v5;
  memmove(StringRoutine, SourceString, v5);
  DestinationString->Length = v5 - 2;
  return 1;
}
