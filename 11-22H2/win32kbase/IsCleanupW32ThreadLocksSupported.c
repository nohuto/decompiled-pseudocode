/*
 * XREFs of IsCleanupW32ThreadLocksSupported @ 0x1C0050FBC
 * Callers:
 *     DestroyThreadsObjects @ 0x1C004F800 (DestroyThreadsObjects.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x1C00BE650 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 IsCleanupW32ThreadLocksSupported()
{
  if ( qword_1C0295C58 )
    return qword_1C0295C58();
  else
    return 3221225659LL;
}
