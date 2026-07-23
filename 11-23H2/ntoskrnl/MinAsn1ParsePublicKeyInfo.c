/*
 * XREFs of MinAsn1ParsePublicKeyInfo @ 0x140A70878
 * Callers:
 *     SecureDump_ConvertToRsaBlob @ 0x14055E1B0 (SecureDump_ConvertToRsaBlob.c)
 *     MinCryptIsKeyPresent @ 0x140677BEC (MinCryptIsKeyPresent.c)
 *     MinCryptVerifySignedHash2 @ 0x140A6F5E0 (MinCryptVerifySignedHash2.c)
 * Callees:
 *     MinAsn1ExtractValues @ 0x140A71AB4 (MinAsn1ExtractValues.c)
 */

__int64 __fastcall MinAsn1ParsePublicKeyInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = 3;
  result = MinAsn1ExtractValues(
             *(_QWORD *)(a1 + 8),
             *(_DWORD *)a1,
             (unsigned int)&v4,
             (unsigned int)&qword_14000B300,
             4,
             a2);
  if ( (int)result > 0 )
    return *(unsigned int *)(a2 + 16);
  return result;
}
