/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C00AC4DC
 * Callers:
 *     DestroyThreadsObjects @ 0x1C002D9E0 (DestroyThreadsObjects.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00AC3EC (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C029C588 )
    return qword_1C029C588();
  else
    return 3221225659LL;
}
