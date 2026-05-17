/*
 * XREFs of NtOpenSection @ 0x1800A4750
 * Callers:
 *     LdrpFindKnownDll @ 0x18004C948 (LdrpFindKnownDll.c)
 *     CsrpConnectToServer @ 0x180079664 (CsrpConnectToServer.c)
 *     LdrGetKnownDllSectionHandle @ 0x18008AA50 (LdrGetKnownDllSectionHandle.c)
 * Callees:
 *     <none>
 */

__int64 NtOpenSection()
{
  __int64 result; // rax

  result = 55LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
