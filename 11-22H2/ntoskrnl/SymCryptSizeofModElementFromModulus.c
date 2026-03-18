/*
 * XREFs of SymCryptSizeofModElementFromModulus @ 0x1403F9428
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1403F738C (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcDsaVerify @ 0x1403F9530 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreEnc @ 0x1403F9AB4 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x1403F9C44 (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1403FF360 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1403FF780 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x1403FFC50 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x1403FFF90 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14040050C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryIsEqual @ 0x1404006B0 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x1404007E0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140408BF4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140408D20 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x1403F81A8 (SymCryptFdefSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptSizeofModElementFromModulus(__int64 a1)
{
  return SymCryptFdefSizeofModElementFromModulus(a1);
}
