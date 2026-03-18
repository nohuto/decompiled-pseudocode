/*
 * XREFs of VmSetVpHostProcess @ 0x1409DCAC0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1409B0AB8 (PsSetVmProcessorHostProcess.c)
 */

void __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  PsSetVmProcessorHostProcess(a1);
}
