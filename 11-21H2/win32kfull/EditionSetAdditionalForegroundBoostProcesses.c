/*
 * XREFs of EditionSetAdditionalForegroundBoostProcesses @ 0x1C0159C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsAppModelFeatureEnabled@@YA_NK@Z @ 0x1C0159BEC (-IsAppModelFeatureEnabled@@YA_NK@Z.c)
 */

__int64 __fastcall EditionSetAdditionalForegroundBoostProcesses(__int64 a1, __int64 a2)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  LOBYTE(v3) = 8;
  if ( (int)PsCheckProcessFileSigningLevel(CurrentProcess, v3) >= 0 || IsAppModelFeatureEnabled(v5, v4) )
    return 0LL;
  else
    return 5LL;
}
