/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180132D24
 * Callers:
 *     DllMain @ 0x1800711C0 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_18016A020);
    qword_18016A020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
