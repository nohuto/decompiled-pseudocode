/*
 * XREFs of ZwInitializeRegistry @ 0x14041D1D0
 * Callers:
 *     NtInitializeRegistry @ 0x1407E8F00 (NtInitializeRegistry.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwInitializeRegistry(USHORT BootCondition)
{
  _disable();
  __readeflags();
  return KiServiceInternal(BootCondition);
}
