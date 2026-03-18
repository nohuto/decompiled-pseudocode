/*
 * XREFs of ?IsAppModelFeatureEnabled@@YA_NK@Z @ 0x1C0159BEC
 * Callers:
 *     EditionSetAdditionalForegroundBoostProcesses @ 0x1C0159C70 (EditionSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsAppModelFeatureEnabled(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  _BYTE *ProcessPeb; // rbx

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessPeb = (_BYTE *)PsGetProcessPeb(CurrentProcess);
  ProbeForRead(ProcessPeb, 0x7D0uLL, 1u);
  return ProcessPeb[832] & 1;
}
