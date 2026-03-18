/*
 * XREFs of SymCryptEcpointScalarMul @ 0x140402E40
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x1403F897C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x1403F8A98 (SymCryptEckeySetValue.c)
 *     SymCryptEcpointGenericSetRandom @ 0x1403FE2D0 (SymCryptEcpointGenericSetRandom.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointScalarMul(__int64 a1, __int64 a2, __int64 a3)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64))qword_1400069A0[12 * (*(_DWORD *)(a1 + 4) & 3)])(
           a1,
           a2,
           a3);
}
