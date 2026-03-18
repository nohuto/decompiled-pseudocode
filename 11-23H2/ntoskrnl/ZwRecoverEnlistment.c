/*
 * XREFs of ZwRecoverEnlistment @ 0x14041DC20
 * Callers:
 *     CmpRecoverEnlistment @ 0x1408010F8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle, EnlistmentKey);
}
