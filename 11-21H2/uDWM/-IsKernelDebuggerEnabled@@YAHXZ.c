/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x180107A30
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x180107B50 (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_180142D52 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_1801462E0, 2u, 0LL);
    v1 = byte_180142D52;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_180142D52 = v1;
  }
  return (unsigned __int8)byte_1801462E0;
}
