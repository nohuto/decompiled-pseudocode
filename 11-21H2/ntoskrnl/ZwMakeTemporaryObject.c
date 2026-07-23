/*
 * XREFs of ZwMakeTemporaryObject @ 0x14041DA20
 * Callers:
 *     sub_14069CEC8 @ 0x14069CEC8 (sub_14069CEC8.c)
 *     IoDeleteSymbolicLink @ 0x140811120 (IoDeleteSymbolicLink.c)
 *     IoCreateDriver @ 0x14084F500 (IoCreateDriver.c)
 *     sub_14095E00C @ 0x14095E00C (sub_14095E00C.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwMakeTemporaryObject(HANDLE Handle)
{
  __int64 v1; // rdx

  _disable();
  __readeflags();
  return sub_140433F80(Handle, v1);
}
