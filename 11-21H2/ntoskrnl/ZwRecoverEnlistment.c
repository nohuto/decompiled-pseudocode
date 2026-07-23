/*
 * XREFs of ZwRecoverEnlistment @ 0x14041E5C0
 * Callers:
 *     sub_14091BA74 @ 0x14091BA74 (sub_14091BA74.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return sub_140433F80(EnlistmentHandle, EnlistmentKey);
}
