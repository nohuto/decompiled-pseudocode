/*
 * XREFs of SymCryptParallelSha256Init @ 0x1403F5D14
 * Callers:
 *     KeComputeParallelSha256 @ 0x14056C8D0 (KeComputeParallelSha256.c)
 * Callees:
 *     SymCryptSha256Init @ 0x1403F50C0 (SymCryptSha256Init.c)
 */

void __fastcall SymCryptParallelSha256Init(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi

  if ( a2 )
  {
    v2 = a2;
    do
    {
      SymCryptSha256Init(a1);
      a1 += 128LL;
      --v2;
    }
    while ( v2 );
  }
}
