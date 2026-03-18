/*
 * XREFs of IoVerifierInit @ 0x140AC1CAC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC3CE8 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140ADD358 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14055648C (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140AC1BF0 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
