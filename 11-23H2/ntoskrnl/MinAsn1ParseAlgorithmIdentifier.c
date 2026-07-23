/*
 * XREFs of MinAsn1ParseAlgorithmIdentifier @ 0x140A705C4
 * Callers:
 *     MinCryptDecodeHashAlgorithmIdentifier @ 0x140A6F428 (MinCryptDecodeHashAlgorithmIdentifier.c)
 *     MinCryptDecodeSignatureAlgorithmIdentifier @ 0x140A6F4D0 (MinCryptDecodeSignatureAlgorithmIdentifier.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x140A71AB4 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParseAlgorithmIdentifier(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 3;
  result = MinAsn1ExtractValues(
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)a1,
             (unsigned int)&v4,
             (unsigned int)&qword_14000B370,
             4,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
