/*
 * XREFs of ZwConnectPort @ 0x1800A22E0
 * Callers:
 *     CsrpConnectToServer @ 0x18004B0BC (CsrpConnectToServer.c)
 * Callees:
 *     <none>
 */

__int64 ZwConnectPort()
{
  __int64 result; // rax

  result = 162LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
