/*
 * XREFs of RtlpCtInitializeNotificationEvent @ 0x1409C23FC
 * Callers:
 *     RtlpCtContextInit @ 0x1409C2318 (RtlpCtContextInit.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall RtlpCtInitializeNotificationEvent(struct _KEVENT **a1)
{
  struct _KEVENT *Pool2; // rax

  Pool2 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1735672676LL);
  *a1 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  KeInitializeEvent(Pool2, NotificationEvent, 0);
  return 0LL;
}
