/*
 * XREFs of EtwEventWrite @ 0x180030310
 * Callers:
 *     SbSelectProcedure @ 0x18002F390 (SbSelectProcedure.c)
 *     EtwEventWriteStartScenario @ 0x180052720 (EtwEventWriteStartScenario.c)
 *     EtwEventWriteEndScenario @ 0x180052820 (EtwEventWriteEndScenario.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     LdrpLogDeprecatedDllEtwEvent @ 0x180080E04 (LdrpLogDeprecatedDllEtwEvent.c)
 *     LdrpAppxEtwGenericIntegrityFailure @ 0x1800D6874 (LdrpAppxEtwGenericIntegrityFailure.c)
 *     LdrpAppxEtwIntegrityFailure @ 0x1800D68FC (LdrpAppxEtwIntegrityFailure.c)
 *     LdrpLogFatalUserCallbackException @ 0x1800DBDF0 (LdrpLogFatalUserCallbackException.c)
 *     RtlpHpStackDbLogStackDbEnd @ 0x1801158C8 (RtlpHpStackDbLogStackDbEnd.c)
 *     RtlpHpStackDbLogStackDbSnapshot @ 0x180115944 (RtlpHpStackDbLogStackDbSnapshot.c)
 *     SbpTraceContextUpdate @ 0x180126F84 (SbpTraceContextUpdate.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x180030348 (EtwpEventWriteFull.c)
 */

__int64 __fastcall EtwEventWrite(int a1, int a2, int a3, __int64 a4)
{
  return EtwpEventWriteFull(a1, a2, 0, 0, 0, 0LL, 0LL, a3, a4);
}
