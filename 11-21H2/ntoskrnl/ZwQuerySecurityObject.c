/*
 * XREFs of ZwQuerySecurityObject @ 0x14041E3C0
 * Callers:
 *     RtlIsUntrustedObject @ 0x140206A00 (RtlIsUntrustedObject.c)
 *     sub_140625950 @ 0x140625950 (sub_140625950.c)
 *     sub_140678874 @ 0x140678874 (sub_140678874.c)
 *     sub_140742D8C @ 0x140742D8C (sub_140742D8C.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_140A2D248 @ 0x140A2D248 (sub_140A2D248.c)
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
  return sub_140433F80(Handle, *(_QWORD *)&SecurityInformation);
}
