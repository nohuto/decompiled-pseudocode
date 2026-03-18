/*
 * XREFs of IsGreSelectRedirectionBitmapSupported @ 0x1C00ACCD0
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 *     DestroyCacheDC @ 0x1C0051AF0 (DestroyCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGreSelectRedirectionBitmapSupported()
{
  if ( qword_1C029B800 )
    return qword_1C029B800();
  else
    return 3221225659LL;
}
