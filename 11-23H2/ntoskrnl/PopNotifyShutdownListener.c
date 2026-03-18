/*
 * XREFs of PopNotifyShutdownListener @ 0x140AA8E9C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA4980 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8F14 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = ((__int64 (__fastcall *)(PVOID))i[3])(i[4]);
  return result;
}
