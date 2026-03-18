/*
 * XREFs of SymCryptSha256Init @ 0x1403F4EE0
 * Callers:
 *     SymCryptSha256 @ 0x1403F347C (SymCryptSha256.c)
 *     SymCryptParallelSha256Init @ 0x1403F5B34 (SymCryptParallelSha256Init.c)
 *     SymCryptParallelSha256ResultDone @ 0x1403F5DE0 (SymCryptParallelSha256ResultDone.c)
 *     HashpInitHash @ 0x140A7765C (HashpInitHash.c)
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
