/*
 * XREFs of MiIsProcessXfgEnabled @ 0x140A43F0C
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x140642AB0 (MiDisableXfgOnPatchedFunctions.c)
 *     MiValidateXfgUserCallTarget @ 0x140656C10 (MiValidateXfgUserCallTarget.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x140A43F38 (MiValidateUserCallTarget.c)
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
