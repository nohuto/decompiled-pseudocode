/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x1403F9C80
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7A44 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F7BCC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F81FC (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14040567C (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
