/*
 * XREFs of ZwAlpcCreateSecurityContext @ 0x14041B680
 * Callers:
 *     DifZwAlpcCreateSecurityContextWrapper @ 0x1405ED610 (DifZwAlpcCreateSecurityContextWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwAlpcCreateSecurityContext(HANDLE PortHandle, ULONG Flags, PALPC_SECURITY_ATTR SecurityAttribute)
{
  _disable();
  __readeflags();
  return KiServiceInternal(PortHandle);
}
