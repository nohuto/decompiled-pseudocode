/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14041C0D0
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x1405EDAF0 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
