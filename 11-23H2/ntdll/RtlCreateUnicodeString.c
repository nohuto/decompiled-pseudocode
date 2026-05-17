/*
 * XREFs of RtlCreateUnicodeString @ 0x18000E9A0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D390 (RtlCanonicalizeDomainName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180015F30 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AD70 (RtlConvertSidToUnicodeString.c)
 *     LdrpLogDllStateEx2 @ 0x180031F1C (LdrpLogDllStateEx2.c)
 *     EtwpInitLoggerContext @ 0x18005BF28 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005C480 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGenerateFileName @ 0x18005F488 (EtwpGenerateFileName.c)
 *     LdrSetDllDirectory @ 0x180078F30 (LdrSetDllDirectory.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DC3B8 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x180039640 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x180039660 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

char __fastcall RtlCreateUnicodeString(__int64 a1, _WORD *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  void *StringRoutine; // rax

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 2 * v4 + 2;
  if ( (unsigned int)(2 * v4 + 1) > 0xFFFD )
    return 0;
  StringRoutine = (void *)NtdllpAllocateStringRoutine(v5, a2);
  *(_QWORD *)(a1 + 8) = StringRoutine;
  if ( !StringRoutine )
    return 0;
  *(_WORD *)(a1 + 2) = v5;
  memmove(StringRoutine, a2, v5);
  *(_WORD *)a1 = v5 - 2;
  return 1;
}
