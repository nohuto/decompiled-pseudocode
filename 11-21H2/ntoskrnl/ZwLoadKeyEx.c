/*
 * XREFs of ZwLoadKeyEx @ 0x14041D960
 * Callers:
 *     sub_1407F3F88 @ 0x1407F3F88 (sub_1407F3F88.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey,
        HANDLE Event,
        ACCESS_MASK DesiredAccess,
        PHANDLE RootHandle,
        PVOID Reserved)
{
  _disable();
  __readeflags();
  return sub_140433F80(TargetKey, SourceFile);
}
