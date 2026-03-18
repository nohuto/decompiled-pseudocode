/*
 * XREFs of IsUmfdUninitializeProcessSupported @ 0x1C00C5280
 * Callers:
 *     GdiProcessCallout @ 0x1C0037960 (GdiProcessCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsUmfdUninitializeProcessSupported()
{
  if ( qword_1C0294A98 )
    return qword_1C0294A98();
  else
    return 3221225659LL;
}
