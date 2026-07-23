/*
 * XREFs of ZwQuerySecurityObject @ 0x14041DDB0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200EE0 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x1405F5C10 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068C0AC (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087ED40 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140A0A7C8 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140A10464 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A948 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
