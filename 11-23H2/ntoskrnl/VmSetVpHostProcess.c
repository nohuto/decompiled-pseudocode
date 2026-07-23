/*
 * XREFs of VmSetVpHostProcess @ 0x1409DCCC0
 * Callers:
 *     <none>
 * Callees:
 *     PsSetVmProcessorHostProcess @ 0x1409B0CB8 (PsSetVmProcessorHostProcess.c)
 */

void __fastcall VmSetVpHostProcess(_QWORD *a1)
{
  PsSetVmProcessorHostProcess(a1);
}
