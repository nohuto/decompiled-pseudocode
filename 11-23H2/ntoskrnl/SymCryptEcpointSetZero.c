/*
 * XREFs of SymCryptEcpointSetZero @ 0x140402E98
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FE3A0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointSetZero(__int64 a1)
{
  return ((__int64 (*)(void))SymCryptEcurveAllFunctionPointers[12 * (*(_DWORD *)(a1 + 4) & 3)])();
}
