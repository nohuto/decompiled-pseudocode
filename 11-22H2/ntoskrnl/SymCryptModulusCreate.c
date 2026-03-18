/*
 * XREFs of SymCryptModulusCreate @ 0x1403F93E0
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7204 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F738C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x140404C3C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
