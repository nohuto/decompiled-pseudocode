/*
 * XREFs of I_MinCryptGetCertificateEKUs @ 0x140A6FA20
 * Callers:
 *     I_MinCryptFindIssuerCertificateByName @ 0x140A6F820 (I_MinCryptFindIssuerCertificateByName.c)
 *     MinCryptVerifyCertificateWithPolicy2 @ 0x140A6FB08 (MinCryptVerifyCertificateWithPolicy2.c)
 * Callees:
 *     MinAsn1ParseOIDSequence @ 0x140A70798 (MinAsn1ParseOIDSequence.c)
 *     MinAsn1ParseSingleExtensionValue @ 0x140A709F8 (MinAsn1ParseSingleExtensionValue.c)
 */

__int64 __fastcall I_MinCryptGetCertificateEKUs(_DWORD *a1, _DWORD *a2, __int64 a3)
{
  unsigned int v5; // ebx
  _OWORD v7[2]; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0;
  v8 = 0;
  v7[0] = 0LL;
  if ( *a1 )
  {
    if ( (int)MinAsn1ParseSingleExtensionValue(&qword_140A78A10, a1, &v8, v7) > 0 )
    {
      if ( v8 )
      {
        if ( (int)MinAsn1ParseOIDSequence(v7, a2, a3) <= 0 )
          return (unsigned int)-1073740760;
      }
      else
      {
        *a2 = 0;
      }
    }
    else
    {
      return (unsigned int)-1073740760;
    }
  }
  else
  {
    *a2 = 0;
  }
  return v5;
}
