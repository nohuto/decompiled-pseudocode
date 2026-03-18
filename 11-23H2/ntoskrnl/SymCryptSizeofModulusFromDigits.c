/*
 * XREFs of SymCryptSizeofModulusFromDigits @ 0x1403F9AA0
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7864 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F79EC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptSizeofRsakeyFromParams @ 0x1403F801C (SymCryptSizeofRsakeyFromParams.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefSizeofModulusFromDigits @ 0x14040549C (SymCryptFdefSizeofModulusFromDigits.c)
 */

__int64 SymCryptSizeofModulusFromDigits()
{
  return SymCryptFdefSizeofModulusFromDigits();
}
