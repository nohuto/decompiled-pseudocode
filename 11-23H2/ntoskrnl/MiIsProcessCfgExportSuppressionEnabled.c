/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x140A43C34
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1407A474C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43C88 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsProcessCfgExportSuppressionEnabled(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) )
    return (*(_DWORD *)(a1 + 2512) >> 1) & 1;
  else
    return 0LL;
}
