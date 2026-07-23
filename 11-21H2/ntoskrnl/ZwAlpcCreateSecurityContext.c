/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14041C740
 * Callers:
 *     sub_14061D5A0 @ 0x14061D5A0 (sub_14061D5A0.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return sub_140433F80(PortHandle, *(_QWORD *)&Flags);
}
