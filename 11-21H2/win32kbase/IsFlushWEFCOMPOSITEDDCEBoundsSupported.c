/*
 * XREFs of IsFlushWEFCOMPOSITEDDCEBoundsSupported @ 0x1C023E228
 * Callers:
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 *     _GetDCEx @ 0x1C002B0A0 (_GetDCEx.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsFlushWEFCOMPOSITEDDCEBoundsSupported()
{
  if ( qword_1C029C408 )
    return qword_1C029C408();
  else
    return 3221225659LL;
}
