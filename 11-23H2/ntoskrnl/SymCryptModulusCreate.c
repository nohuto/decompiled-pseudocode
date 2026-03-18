/*
 * XREFs of SymCryptModulusCreate @ 0x1403F9A40
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7864 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F79EC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x14040529C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
