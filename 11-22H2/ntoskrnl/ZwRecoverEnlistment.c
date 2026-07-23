/*
 * XREFs of ZwRecoverEnlistment @ 0x14041D560
 * Callers:
 *     CmpRecoverEnlistment @ 0x1408017A8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
