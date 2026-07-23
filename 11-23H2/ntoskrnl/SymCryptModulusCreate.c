/*
 * XREFs of SymCryptModulusCreate @ 0x1403F9C20
 * Callers:
 *     SymCryptRsakeyCreate @ 0x1403F7A44 (SymCryptRsakeyCreate.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F7BCC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveAllocate @ 0x1403F828C (SymCryptEcurveAllocate.c)
 * Callees:
 *     SymCryptFdefModulusCreate @ 0x14040547C (SymCryptFdefModulusCreate.c)
 */

__int64 SymCryptModulusCreate()
{
  return SymCryptFdefModulusCreate();
}
