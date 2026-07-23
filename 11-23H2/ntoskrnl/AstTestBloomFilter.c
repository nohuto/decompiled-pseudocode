/*
 * XREFs of AstTestBloomFilter @ 0x1407AE340
 * Callers:
 *     IopXxxControlFile @ 0x1406E5510 (IopXxxControlFile.c)
 * Callees:
 *     AstGetHashedBitNumbers @ 0x1407AE3D0 (AstGetHashedBitNumbers.c)
 */

bool __fastcall AstTestBloomFilter(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-10h]

  v4 = 0LL;
  v5 = 0;
  AstGetHashedBitNumbers(&v4, a2, a2, a3);
  return ((*(char *)(((unsigned __int64)(unsigned int)v4 >> 3) + qword_140C5D6C8) >> (v4 & 7)) & 1) != 0
      && ((*(char *)(((unsigned __int64)HIDWORD(v4) >> 3) + qword_140C5D6C8) >> (BYTE4(v4) & 7)) & 1) != 0
      && ((*(char *)(((unsigned __int64)v5 >> 3) + qword_140C5D6C8) >> (v5 & 7)) & 1) != 0;
}
