/*
 * XREFs of LdrpGenSecurityCookie @ 0x18002D17C
 * Callers:
 *     LdrInitSecurityCookie @ 0x18002B654 (LdrInitSecurityCookie.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A14D0 (NtQueryPerformanceCounter.c)
 */

unsigned __int64 __fastcall LdrpGenSecurityCookie(__int64 a1)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = LODWORD(NtCurrentTeb()->ClientId.UniqueThread) ^ LODWORD(NtCurrentTeb()->ClientId.UniqueProcess) ^ MEMORY[0x7FFE0014] ^ (unsigned __int64)MEMORY[0x7FFE0018] ^ (unsigned int)((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24) ^ ((MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24 << 24);
  NtQueryPerformanceCounter(&v4, 0LL);
  return a1 ^ v2 ^ v4 ^ ((unsigned __int64)(unsigned int)v4 << 32);
}
