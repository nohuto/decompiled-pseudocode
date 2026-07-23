/*
 * XREFs of SymCryptSha256Init @ 0x1403F50C0
 * Callers:
 *     SymCryptSha256 @ 0x1403F365C (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1403F5D14 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403F5FC0 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x140A7790C (HashpInitHash.c)
 * Callees:
 *     <none>
 */

void __fastcall SymCryptSha256Init(__int64 a1)
{
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_140013898;
  *(_OWORD *)(a1 + 112) = xmmword_1400138A8;
}
