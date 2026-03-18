/*
 * XREFs of IsxxxUserResetDisplayDeviceSupported @ 0x1C023E3C0
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D24E0 (VideoPortCalloutThread.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsxxxUserResetDisplayDeviceSupported()
{
  if ( qword_1C029C370 )
    return qword_1C029C370();
  else
    return 3221225659LL;
}
