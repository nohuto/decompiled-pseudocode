/*
 * XREFs of IsDeleteHrgnClipSupported @ 0x1C00AAA2C
 * Callers:
 *     _GetDCEx @ 0x1C004A820 (_GetDCEx.c)
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDeleteHrgnClipSupported()
{
  if ( qword_1C0295AC8 )
    return qword_1C0295AC8();
  else
    return 3221225659LL;
}
