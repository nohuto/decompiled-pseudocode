/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14096EBB0
 * Callers:
 *     MiCfgMarkValidEntries @ 0x140753C58 (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x14096EC0C (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsProcessCfgExportSuppressionEnabled(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) && (*(_DWORD *)(a1 + 2512) & 2) != 0;
}
