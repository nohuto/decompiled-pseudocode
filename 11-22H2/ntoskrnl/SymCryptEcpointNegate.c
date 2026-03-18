/*
 * XREFs of SymCryptEcpointNegate @ 0x140402778
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FDD40 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE250 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointNegate(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006998[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1);
}
