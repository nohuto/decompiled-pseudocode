/*
 * XREFs of NtOpenSection @ 0x1800A4750
 * Callers:
 *     LdrpFindKnownDll @ 0x18004C948 (LdrpFindKnownDll.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     LdrGetKnownDllSectionHandle @ 0x18008AA50 (LdrGetKnownDllSectionHandle.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl NtOpenSection(PHANDLE SectionHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  NTSTATUS result; // eax

  result = 55;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
