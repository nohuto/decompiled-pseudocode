/*
 * XREFs of SymCryptEcpointNegate @ 0x14040A6E8
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140405BF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140406130 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointNegate(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006E28[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1);
}
