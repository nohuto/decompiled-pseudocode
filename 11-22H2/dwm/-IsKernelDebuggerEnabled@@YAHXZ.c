/*
 * XREFs of ?IsKernelDebuggerEnabled@@YAHXZ @ 0x14000E2E0
 * Callers:
 *     ?MilInstrumentationBreak@@YAXK_N@Z @ 0x14000E3AC (-MilInstrumentationBreak@@YAXK_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 IsKernelDebuggerEnabled(void)
{
  NTSTATUS SystemInformation; // eax
  char v1; // cl

  if ( !byte_14001A562 )
  {
    SystemInformation = NtQuerySystemInformation(SystemKernelDebuggerInformation, &byte_14001A560, 2u, 0LL);
    v1 = byte_14001A562;
    if ( SystemInformation >= 0 )
      v1 = 1;
    byte_14001A562 = v1;
  }
  return (unsigned __int8)byte_14001A560;
}
