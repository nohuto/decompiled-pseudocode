/*
 * XREFs of NtOpenSection @ 0x1800A1590
 * Callers:
 *     LdrpFindKnownDll @ 0x18002C3C4 (LdrpFindKnownDll.c)
 *     CsrpConnectToServer @ 0x18004B0BC (CsrpConnectToServer.c)
 *     LdrGetKnownDllSectionHandle @ 0x180087120 (LdrGetKnownDllSectionHandle.c)
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
