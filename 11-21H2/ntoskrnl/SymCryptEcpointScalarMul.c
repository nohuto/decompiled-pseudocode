/*
 * XREFs of SymCryptEcpointScalarMul @ 0x14040A750
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140400210 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140400318 (SymCryptEckeySetValue.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140405B20 (SymCryptEcpointGenericSetRandom.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointScalarMul(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_140006E30[12 * (*(_DWORD *)(a1 + 4) & 3)])(
           a1,
           a2,
           a3);
}
