/*
 * XREFs of SymCryptIntGetValueLsbits32 @ 0x1403F9404
 * Callers:
 *     SymCryptRsakeySetValue @ 0x1403F7B0C (SymCryptRsakeySetValue.c)
 *     SymCryptEcurveAllocate @ 0x1403F80AC (SymCryptEcurveAllocate.c)
 *     SymCryptCrtGenerateForTwoCoprimes @ 0x1403FDB60 (SymCryptCrtGenerateForTwoCoprimes.c)
 *     SymCryptIntExtendedGcd @ 0x1403FDD64 (SymCryptIntExtendedGcd.c)
 *     SymCryptFdefDecideModulusType @ 0x140403D90 (SymCryptFdefDecideModulusType.c)
 *     SymCryptFdefModInvGeneric @ 0x1404044E0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140409254 (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptFixedWindowRecoding @ 0x140409A28 (SymCryptFixedWindowRecoding.c)
 *     SymCryptWidthNafRecoding @ 0x140409B84 (SymCryptWidthNafRecoding.c)
 * Callees:
 *     SymCryptFdefIntGetValueLsbits32 @ 0x1403F8868 (SymCryptFdefIntGetValueLsbits32.c)
 */

__int64 __fastcall SymCryptIntGetValueLsbits32(__int64 a1)
{
  return SymCryptFdefIntGetValueLsbits32(a1);
}
