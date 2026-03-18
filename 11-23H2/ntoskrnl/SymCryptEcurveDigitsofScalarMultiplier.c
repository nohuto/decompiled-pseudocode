/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x1403F8814
 * Callers:
 *     SymCryptEckeyCreate @ 0x1403F88C8 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x1403F8F1C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaVerify @ 0x1403F9B90 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x14040012C (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140400B6C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x1404024DC (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x1403F9240 (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
