/*
 * XREFs of IsGetStyleWindowSupported @ 0x1C006AC48
 * Callers:
 *     GetMonitorDC @ 0x1C00183FC (GetMonitorDC.c)
 *     UserSetDCVisRgn @ 0x1C002C8B0 (UserSetDCVisRgn.c)
 *     CreateCacheDC @ 0x1C006AA00 (CreateCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetStyleWindowSupported()
{
  if ( qword_1C029C3E8 )
    return qword_1C029C3E8();
  else
    return 3221225659LL;
}
