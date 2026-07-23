/*
 * XREFs of ZwCreateLowBoxToken @ 0x14041BD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwCreateLowBoxToken(
        PHANDLE TokenHandle,
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PSID PackageSid,
        ULONG CapabilityCount,
        PSID_AND_ATTRIBUTES Capabilities,
        ULONG HandleCount,
        HANDLE *Handles)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TokenHandle);
}
