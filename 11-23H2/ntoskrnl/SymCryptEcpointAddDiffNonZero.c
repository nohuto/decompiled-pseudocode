/*
 * XREFs of SymCryptEcpointAddDiffNonZero @ 0x140402C70
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x1403FE8B0 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x1403FEF40 (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAddDiffNonZero(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006988[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1, a2);
}
