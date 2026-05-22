/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x1801007F4
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x1801005A0 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_180220D0A )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_180220D08, 2u, 0LL);
    v1 = byte_180220D0A;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_180220D0A = v1;
  }
  return (unsigned __int8)byte_180220D08;
}
