/*
 * XREFs of ZwRecoverEnlistment @ 0x14041DFB0
 * Callers:
 *     CmpRecoverEnlistment @ 0x1408013C8 (CmpRecoverEnlistment.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverEnlistment(HANDLE EnlistmentHandle, PVOID EnlistmentKey)
{
  _disable();
  __readeflags();
  return KiServiceInternal(EnlistmentHandle);
}
