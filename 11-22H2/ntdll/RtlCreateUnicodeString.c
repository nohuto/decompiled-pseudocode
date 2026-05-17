/*
 * XREFs of RtlCreateUnicodeString @ 0x18000EBB0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000D5A0 (RtlCanonicalizeDomainName.c)
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180016140 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlConvertSidToUnicodeString @ 0x18001AF50 (RtlConvertSidToUnicodeString.c)
 *     LdrpLogDllStateEx2 @ 0x18003207C (LdrpLogDllStateEx2.c)
 *     EtwpInitLoggerContext @ 0x18005EF28 (EtwpInitLoggerContext.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18005F480 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpGenerateFileName @ 0x180062318 (EtwpGenerateFileName.c)
 *     LdrSetDllDirectory @ 0x1800788C0 (LdrSetDllDirectory.c)
 *     LdrpMakeUnicodeStringFromPathElement @ 0x1800DCA08 (LdrpMakeUnicodeStringFromPathElement.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800397A0 (NtdllpFreeStringRoutine.c)
 *     NtdllpAllocateStringRoutine @ 0x1800397C0 (NtdllpAllocateStringRoutine.c)
 *     memmove @ 0x1800A5980 (memmove.c)
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
