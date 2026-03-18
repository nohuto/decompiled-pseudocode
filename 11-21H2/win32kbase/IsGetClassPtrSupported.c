/*
 * XREFs of IsGetClassPtrSupported @ 0x1C00C359C
 * Callers:
 *     HMChangeOwnerThreadWorker @ 0x1C00C2298 (HMChangeOwnerThreadWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetClassPtrSupported()
{
  if ( qword_1C029C558 )
    return qword_1C029C558();
  else
    return 3221225659LL;
}
