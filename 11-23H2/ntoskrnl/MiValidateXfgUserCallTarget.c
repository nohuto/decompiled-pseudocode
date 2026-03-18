/*
 * XREFs of MiValidateXfgUserCallTarget @ 0x1406566C0
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x140642560 (MiDisableXfgOnPatchedFunctions.c)
 *     MiCfgMarkValidEntries @ 0x1407A474C (MiCfgMarkValidEntries.c)
 * Callees:
 *     CfgAddressToBitState @ 0x14065667C (CfgAddressToBitState.c)
 *     MiIsProcessXfgEnabled @ 0x140A43C5C (MiIsProcessXfgEnabled.c)
 */

_BOOL8 __fastcall MiValidateXfgUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  return (unsigned int)CfgAddressToBitState(a1, *a2) == 2 && (unsigned int)MiIsProcessXfgEnabled(Process) != 0;
}
