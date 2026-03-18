/*
 * XREFs of IsKeyboardIVEnabled @ 0x1C00A8664
 * Callers:
 *     NtMITSynthesizeKeyboardInput @ 0x1C0009460 (NtMITSynthesizeKeyboardInput.c)
 *     RIMInitialize @ 0x1C00A7FE0 (RIMInitialize.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C004FE94 (UseVelocityToEnableIV.c)
 */

char IsKeyboardIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( UseVelocityToEnableIV() || isChildPartition() && byte_1C02908A7 )
    return 1;
  return v0;
}
