/*
 * XREFs of PopNotifyShutdownListener @ 0x140AA8D0C
 * Callers:
 *     PopSaveHiberContext @ 0x140AA47F0 (PopSaveHiberContext.c)
 *     PopShutdownSystem @ 0x140AA8D84 (PopShutdownSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 PopNotifyShutdownListener()
{
  PVOID *i; // rbx
  __int64 result; // rax

  for ( i = (PVOID *)PopShutdownNotificationCallbackList; i != &PopShutdownNotificationCallbackList; i = (PVOID *)*i )
    result = ((__int64 (__fastcall *)(PVOID))i[3])(i[4]);
  return result;
}
