/*
 * XREFs of IoVerifierInit @ 0x140AC0C9C
 * Callers:
 *     VfInitSystemNoRebootNeeded @ 0x140AC2D08 (VfInitSystemNoRebootNeeded.c)
 *     ViIovInitialization @ 0x140ADC378 (ViIovInitialization.c)
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140556AAC (IopUpdateFunctionPointers.c)
 *     IoVerifierCheckForSettingsChange @ 0x140AC0BE0 (IoVerifierCheckForSettingsChange.c)
 */

void __fastcall IoVerifierInit(char a1)
{
  if ( (MmVerifierData & 0x10) != 0 )
  {
    IopUpdateFunctionPointers(1, 1, 0);
    IoVerifierCheckForSettingsChange(a1);
  }
}
