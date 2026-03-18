/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140B97338
 * Callers:
 *     ObShutdownSystem @ 0x14097AEB0 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x1407C1390 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C02FF0;
  qword_140C02FF0 = 0LL;
  dword_140C02FD0 = 0;
  return EtwUnregister(v0);
}
