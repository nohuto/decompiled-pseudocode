/*
 * XREFs of IoVerifierInit @ 0x140AC0CAC
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D18 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140ADC388 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x1405563EC (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140AC0BF0 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
