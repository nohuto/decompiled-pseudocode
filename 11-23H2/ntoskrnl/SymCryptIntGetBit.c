/*
 * XREFs of SymCryptIntGetBit @ 0x1403F93D4
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140400E40 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefIntGetBit @ 0x1404033DC (SymCryptFdefIntGetBit.c)
 */

__int64 SymCryptIntGetBit()
{
  return SymCryptFdefIntGetBit();
}
