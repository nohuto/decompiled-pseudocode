/*
 * XREFs of ZwQuerySystemEnvironmentValueEx @ 0x14041E460
 * Callers:
 *     sub_14083B728 @ 0x14083B728 (sub_14083B728.c)
 *     sub_140A1F7E0 @ 0x140A1F7E0 (sub_140A1F7E0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQuerySystemEnvironmentValueEx(
        PUNICODE_STRING VariableName,
        PCGUID VendorGuid,
        PVOID Value,
        PULONG ValueLength,
        PULONG Attributes)
{
  _disable();
  __readeflags();
  return sub_140433F80(VariableName, VendorGuid);
}
