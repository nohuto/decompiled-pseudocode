/*
 * XREFs of sub_1406EA5EC @ 0x1406EA5EC
 * Callers:
 *     sub_140777578 @ 0x140777578 (sub_140777578.c)
 *     sub_140808CB4 @ 0x140808CB4 (sub_140808CB4.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_140768194 @ 0x140768194 (sub_140768194.c)
 */

NTSTATUS sub_1406EA5EC()
{
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  int v2; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, NotificationEvent, 0);
  result = sub_140768194(&Event, &v2);
  if ( result >= 0 )
    return KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  return result;
}
