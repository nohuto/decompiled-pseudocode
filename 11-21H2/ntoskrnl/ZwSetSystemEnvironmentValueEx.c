/*
 * XREFs of ZwSetSystemEnvironmentValueEx @ 0x14041EDE0
 * Callers:
 *     sub_140A1F7E0 @ 0x140A1F7E0 (sub_140A1F7E0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetSystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        ULONG ValueLength,
        ULONG Attributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(VariableName, VendorGuid);
}
