/*
 * XREFs of SymCryptEcpointIsEqual @ 0x140402ED8
 * Callers:
 *     SymCryptEckeySetValue @ 0x1403F8C78 (SymCryptEckeySetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsEqual(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006968[12 * (*(_DWORD *)(a1 + 4) & 3)])(a1, a2);
}
