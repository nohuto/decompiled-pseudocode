/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140B96338
 * Callers:
 *     ObShutdownSystem @ 0x14097AE00 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x1407C0E00 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C02FF0;
  qword_140C02FF0 = 0LL;
  dword_140C02FD0 = 0;
  return EtwUnregister(v0);
}
