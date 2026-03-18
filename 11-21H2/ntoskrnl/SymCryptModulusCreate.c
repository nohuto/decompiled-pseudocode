/*
 * XREFs of SymCryptModulusCreate @ 0x140401320
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403FF10C (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403FF298 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403FF93C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x14040CC4C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
