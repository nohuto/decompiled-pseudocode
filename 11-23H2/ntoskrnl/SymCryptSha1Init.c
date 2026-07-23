/*
 * XREFs of SymCryptSha1Init @ 0x1403FD280
 * Callers:
 *     SymCryptSha1Result @ 0x1403FD2B0 (SymCryptSha1Result.c)
 *     HashpInitHash @ 0x140A7790C (HashpInitHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha1Init(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140014210;
  result = 3285377520LL;
  *(_DWORD *)(a1 + 112) = -1009589776;
  return result;
}
