/*
 * XREFs of PopDispatchCallout @ 0x140865B30
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403B659C (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
