/*
 * XREFs of ZwFilterTokenEx @ 0x14041CE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFilterTokenEx(
        HANDLE ExistingTokenHandle,
        ULONG Flags,
        PTOKEN_GROUPS SidsToDisable,
        PTOKEN_PRIVILEGES PrivilegesToDelete,
        PTOKEN_GROUPS RestrictedSids,
        ULONG DisableUserClaimsCount,
        PUNICODE_STRING UserClaimsToDisable,
        ULONG DisableDeviceClaimsCount,
        PUNICODE_STRING DeviceClaimsToDisable,
        PTOKEN_GROUPS DeviceGroupsToDisable,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedUserAttributes,
        PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedDeviceAttributes,
        PTOKEN_GROUPS RestrictedDeviceGroups,
        PHANDLE NewTokenHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ExistingTokenHandle);
}
