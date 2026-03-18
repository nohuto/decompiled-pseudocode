/*
 * XREFs of SymCryptIntGetValueLsbits32 @ 0x1403F8DA4
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F74AC (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F7A4C (SymCryptEcurveAllocate.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FD500 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FD704 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDecideModulusType @ 0x140403730 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140408BF4 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptFixedWindowRecoding @ 0x1404093C8 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140409524 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1403F8208 (SymCryptFdefIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptIntGetValueLsbits32(__int64 a1)
{
  return SymCryptFdefIntGetValueLsbits32(a1);
}
