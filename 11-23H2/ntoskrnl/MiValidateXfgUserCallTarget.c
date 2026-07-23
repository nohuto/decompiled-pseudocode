/*
 * XREFs of MiValidateXfgUserCallTarget @ 0x140656C10
 * Callers:
 *     MiDisableXfgOnPatchedFunctions @ 0x140642AB0 (MiDisableXfgOnPatchedFunctions.c)
 *     MiCfgMarkValidEntries @ 0x1407A493C (MiCfgMarkValidEntries.c)
 * Callees:
 *     CfgAddressToBitState @ 0x140656BCC (CfgAddressToBitState.c)
 *     MiIsProcessXfgEnabled @ 0x140A43F0C (MiIsProcessXfgEnabled.c)
 */

_BOOL8 __fastcall MiValidateXfgUserCallTarget(unsigned __int64 a1, const signed __int64 **a2)
{
  _KPROCESS *Process; // rbx

  Process = KeGetCurrentThread()->ApcState.Process;
  return (unsigned int)CfgAddressToBitState(a1, *a2) == 2 && (unsigned int)MiIsProcessXfgEnabled(Process) != 0;
}
