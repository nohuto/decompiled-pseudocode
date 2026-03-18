/*
 * XREFs of ZwQuerySecurityObject @ 0x14041E3C0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     DifZwQuerySecurityObjectWrapper @ 0x140625950 (DifZwQuerySecurityObjectWrapper.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140678874 (PiDevCfgGetKeySecurityDescriptor.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140742D8C (CmpQueryFileSecurityDescriptor.c)
 *     CmpSaveBootControlSet @ 0x14090BC6C (CmpSaveBootControlSet.c)
 *     CmpCloneHwProfile @ 0x14091DBC4 (CmpCloneHwProfile.c)
 *     _RegRtlCopyTreeInternal @ 0x140A2D248 (_RegRtlCopyTreeInternal.c)
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
