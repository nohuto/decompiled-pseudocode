/*
 * XREFs of EtwEventWrite @ 0x180030140
 * Callers:
 *     SbSelectProcedure @ 0x18002F1C0 (SbSelectProcedure.c)
 *     EtwEventWriteStartScenario @ 0x1800525C0 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x1800526C0 (EtwEventWriteEndScenario.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180081474 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D61D4 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D625C (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DB7A0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x180116D78 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x180116DF4 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     SbpTraceContextUpdate @ 0x180128434 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180030178 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
