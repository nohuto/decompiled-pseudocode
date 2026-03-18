/*
 * XREFs of SymCryptModSetRandom @ 0x1403F9964
 * Callers:
 *     SymCryptEcpointGenericSetRandom @ 0x1403FE2D0 (SymCryptEcpointGenericSetRandom.c)
 * Callees:
 *     SymCryptFdefModSetRandomGeneric @ 0x140404E4C (SymCryptFdefModSetRandomGeneric.c)
 */

void __fastcall __noreturn SymCryptModSetRandom(int a1, int a2, int a3, int a4, __int64 a5)
{
  SymCryptFdefModSetRandomGeneric(a1, a2, a3, a4, a5);
}
