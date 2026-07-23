/*
 * XREFs of SymCryptSha256Result @ 0x1403F50F0
 * Callers:
 *     SymCryptSha256 @ 0x1403F365C (SymCryptSha256.c)
 *     HashpHashMemory @ 0x140A772CC (HashpHashMemory.c)
 * Callees:
 *     SymCryptSha256AppendBlocks @ 0x1403F37B0 (SymCryptSha256AppendBlocks.c)
 *     SymCryptWipe @ 0x1403F66E8 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptSha256Result(unsigned int *a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned int v5; // ecx
  __int64 *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v10 = 0LL;
  v3 = *a1;
  *((_BYTE *)a1 + v3 + 32) = 0x80;
  v5 = v3 + 1;
  if ( v5 > 0x38 )
  {
    SymCryptWipe((char *)a1 + v5 + 32, 64 - v5);
    SymCryptSha256AppendBlocks((__int64)(a1 + 24), (__int64)(a1 + 8), 64LL, (__int64)&v10);
    v5 = 0;
  }
  SymCryptWipe((char *)a1 + v5 + 32, 64 - v5);
  *((_QWORD *)a1 + 11) = _byteswap_uint64(8LL * *((_QWORD *)a1 + 2));
  SymCryptSha256AppendBlocks((__int64)(a1 + 24), (__int64)(a1 + 8), 64LL, (__int64)&v10);
  v6 = (__int64 *)(a1 + 24);
  v7 = 4LL;
  do
  {
    v8 = *v6++;
    *a2++ = _byteswap_uint64(__ROL8__(v8, 32));
    --v7;
  }
  while ( v7 );
  result = SymCryptWipe(a1, 128LL);
  *((_OWORD *)a1 + 6) = xmmword_140013898;
  *((_OWORD *)a1 + 7) = xmmword_1400138A8;
  return result;
}
