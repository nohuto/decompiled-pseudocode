/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180124DE4
 * Callers:
 *     DllMain @ 0x180062B2C (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_180166020);
    qword_180166020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
