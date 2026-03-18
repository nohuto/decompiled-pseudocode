/*
 * XREFs of IsGetAppCompatFlags2QuadWordSupported @ 0x1C003767C
 * Callers:
 *     UserThreadCallout @ 0x1C0037070 (UserThreadCallout.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetAppCompatFlags2QuadWordSupported()
{
  if ( qword_1C029C778 )
    return qword_1C029C778();
  else
    return 3221225659LL;
}
