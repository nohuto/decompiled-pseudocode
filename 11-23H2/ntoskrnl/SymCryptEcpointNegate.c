/*
 * XREFs of SymCryptEcpointNegate @ 0x140402DD8
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x1403FE3A0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointNegate(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006998[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1);
}
