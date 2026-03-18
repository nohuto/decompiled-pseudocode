/*
 * XREFs of SymCryptModElementGetValue @ 0x1403F9684
 * Callers:
 *     SymCryptRsaCoreEnc @ 0x1403FA114 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointGetValue @ 0x1403FF0D0 (SymCryptEcpointGetValue.c)
 * Callees:
 *     SymCryptFdefModElementGetValue @ 0x1404041E8 (SymCryptFdefModElementGetValue.c)
 */

__int64 __fastcall SymCryptModElementGetValue(int a1, int a2, int a3, int a4, int a5, __int64 a6, __int64 a7)
{
  return SymCryptFdefModElementGetValue(a1, a2, a3, a4, a5, a6, a7);
}
