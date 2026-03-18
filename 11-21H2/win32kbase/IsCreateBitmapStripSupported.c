/*
 * XREFs of IsCreateBitmapStripSupported @ 0x1C005F900
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     xxxSetSysColors @ 0x1C0062954 (xxxSetSysColors.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCreateBitmapStripSupported()
{
  if ( qword_1C029C898 )
    return qword_1C029C898();
  else
    return 3221225659LL;
}
