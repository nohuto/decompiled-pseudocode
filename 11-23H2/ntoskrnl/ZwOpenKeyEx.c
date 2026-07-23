/*
 * XREFs of ZwOpenKeyEx @ 0x14041D610
 * Callers:
 *     DifZwOpenKeyExWrapper @ 0x1405F20B0 (DifZwOpenKeyExWrapper.c)
 *     _RegRtlOpenKeyTransacted @ 0x1406CEDA0 (_RegRtlOpenKeyTransacted.c)
 *     MfgInitSystem @ 0x140B75414 (MfgInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
