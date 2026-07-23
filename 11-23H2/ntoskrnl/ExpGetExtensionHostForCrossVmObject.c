/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140A05F58
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x140A05C4C (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140A05FB0 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140A06020 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140A06090 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140A060E0 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140A06124 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x140A06180 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x140A061EC (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140A06248 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140A062A4 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA6D0 (ExGetExtensionTable.c)
 */

unsigned __int64 __fastcall ExpGetExtensionHostForCrossVmObject(__int64 a1, __int64 *a2)
{
  unsigned __int64 result; // rax
  __int64 v4; // rcx

  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostRoot);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostRoot;
LABEL_3:
    *a2 = v4;
    return result;
  }
  result = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpCrossVmIntExtensionHostGuest);
  if ( result )
  {
    v4 = ExpCrossVmIntExtensionHostGuest;
    goto LABEL_3;
  }
  return result;
}
