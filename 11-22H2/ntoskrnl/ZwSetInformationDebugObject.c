/*
 * XREFs of ZwSetInformationDebugObject @ 0x14041DB00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetInformationDebugObject(
        HANDLE DebugObjectHandle,
        DEBUGOBJECTINFOCLASS DebugObjectInformationClass,
        PVOID DebugInformation,
        ULONG DebugInformationLength,
        PULONG ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(DebugObjectHandle);
}
