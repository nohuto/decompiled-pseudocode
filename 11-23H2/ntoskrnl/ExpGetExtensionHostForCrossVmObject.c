/*
 * XREFs of ExpGetExtensionHostForCrossVmObject @ 0x140A05CC8
 * Callers:
 *     ExpAcquireCrossVmMutant @ 0x140A059BC (ExpAcquireCrossVmMutant.c)
 *     ExpObCloseCrossVmEvent @ 0x140A05D20 (ExpObCloseCrossVmEvent.c)
 *     ExpObCloseCrossVmMutant @ 0x140A05D90 (ExpObCloseCrossVmMutant.c)
 *     ExpObDeleteCrossVmEvent @ 0x140A05E00 (ExpObDeleteCrossVmEvent.c)
 *     ExpObDeleteCrossVmMutant @ 0x140A05E50 (ExpObDeleteCrossVmMutant.c)
 *     ExpPulseCrossVmEvent @ 0x140A05E94 (ExpPulseCrossVmEvent.c)
 *     ExpQueryCrossVmEvent @ 0x140A05EF0 (ExpQueryCrossVmEvent.c)
 *     ExpReleaseCrossVmMutant @ 0x140A05F5C (ExpReleaseCrossVmMutant.c)
 *     ExpResetCrossVmEvent @ 0x140A05FB8 (ExpResetCrossVmEvent.c)
 *     ExpSetCrossVmEvent @ 0x140A06014 (ExpSetCrossVmEvent.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
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
