/*
 * XREFs of ZwQuerySecurityObject @ 0x14041DA20
 * Callers:
 *     RtlIsUntrustedObject @ 0x140200EE0 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x1405F56A0 (DifZwQuerySecurityObjectWrapper.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14068C0AC (CmpQueryFileSecurityDescriptor.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14087EB00 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x140A0A518 (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x140A101B4 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A698 (_RegRtlCopyTreeInternal.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, *(_QWORD *)&SecurityInformation);
}
