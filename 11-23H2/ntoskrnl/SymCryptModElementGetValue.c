/*
 * XREFs of SymCryptModElementGetValue @ 0x1403F9864
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1403FA2F4 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGetValue @ 0x1403FF2B0 (SymCryptEcpointGetValue.c)
 * Callees:
 *     SymCryptFdefModElementGetValue @ 0x1404043C8 (SymCryptFdefModElementGetValue.c)
 */

__int64 __fastcall SymCryptModElementGetValue(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  return SymCryptFdefModElementGetValue(a1, a2, a3, a4, a5, a6, a7);
}
