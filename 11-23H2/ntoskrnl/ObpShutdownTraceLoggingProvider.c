/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140B96338
 * Callers:
 *     ObShutdownSystem @ 0x14097B000 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C02FF0;
  qword_140C02FF0 = 0LL;
  dword_140C02FD0 = 0;
  return EtwUnregister(v0);
}
