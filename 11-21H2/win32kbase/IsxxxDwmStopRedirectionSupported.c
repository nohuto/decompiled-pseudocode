/*
 * XREFs of IsxxxDwmStopRedirectionSupported @ 0x1C005A66C
 * Callers:
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1C0059C80 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxDwmStopRedirectionSupported()
{
  if ( qword_1C029CAC0 )
    return qword_1C029CAC0();
  else
    return 3221225659LL;
}
