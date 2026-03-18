/*
 * XREFs of MiIsProcessXfgEnabled @ 0x140A43C5C
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x140642560 (MiDisableXfgOnPatchedFunctions.c)
 *     MiValidateXfgUserCallTarget @ 0x1406566C0 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1407A474C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43C88 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiIsProcessXfgEnabled(__int64 a1)
{
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 432LL) )
    return (*(_DWORD *)(a1 + 2516) >> 25) & 1;
  else
    return 0LL;
}
