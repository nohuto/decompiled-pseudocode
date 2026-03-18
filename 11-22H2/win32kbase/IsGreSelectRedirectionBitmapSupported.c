/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C005D4DC
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     GetMonitorDC @ 0x1C005B3E8 (GetMonitorDC.c)
 *     DestroyCacheDC @ 0x1C005D380 (DestroyCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C0294E98 )
    return qword_1C0294E98();
  else
    return 3221225659LL;
}
