/*
 * XREFs of SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x14055E274
 * Callers:
 *     SecureDump_Init @ 0x1403B0EC8 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x14055EB78 (SecureDump_ReInitialize.c)
 * Callees:
 *     BCryptCloseAlgorithmProvider @ 0x140374C94 (BCryptCloseAlgorithmProvider.c)
 *     SecureDump_LogErrorEvent @ 0x14055EB48 (SecureDump_LogErrorEvent.c)
 *     BCryptDestroyKey @ 0x1405B7C3C (BCryptDestroyKey.c)
 *     BCryptEncrypt @ 0x1405B7C94 (BCryptEncrypt.c)
 *     BCryptGetProperty @ 0x1407620D0 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140810CA4 (BCryptOpenAlgorithmProvider.c)
 *     BCryptImportKeyPair @ 0x1409C9224 (BCryptImportKeyPair.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 SecureDump_EncryptSymmetricKeyWithPublicKey()
{
  UCHAR *v0; // rsi
  unsigned int v1; // edi
  void *v2; // rdx
  NTSTATUS Property; // ebx
  UCHAR *Pool2; // rax
  const WCHAR *v5; // r8
  ULONG v6; // r9d
  ULONG pcbResult; // [rsp+28h] [rbp-50h]
  ULONG dwFlags; // [rsp+30h] [rbp-48h]
  BCRYPT_ALG_HANDLE phAlgorithm; // [rsp+50h] [rbp-28h] BYREF
  _QWORD pPaddingInfo[4]; // [rsp+58h] [rbp-20h] BYREF
  ULONG cbInput; // [rsp+B0h] [rbp+38h] BYREF
  int pbOutput; // [rsp+B8h] [rbp+40h] BYREF
  ULONG v14; // [rsp+C0h] [rbp+48h] BYREF
  BCRYPT_KEY_HANDLE phKey; // [rsp+C8h] [rbp+50h] BYREF

  pPaddingInfo[0] = L"SHA256";
  cbInput = 0;
  v0 = 0LL;
  phAlgorithm = 0LL;
  phKey = 0LL;
  v1 = 1;
  pPaddingInfo[1] = 0LL;
  pPaddingInfo[2] = 0LL;
  pbOutput = 0;
  v14 = 0;
  dword_140C64D1C = 2;
  Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", 0LL, 0, &cbInput, 0);
  if ( Property >= 0 )
  {
    Pool2 = (UCHAR *)ExAllocatePool2(64LL, cbInput, 1886217299LL);
    v0 = Pool2;
    if ( !Pool2 )
    {
LABEL_3:
      Property = -1073741670;
      goto LABEL_14;
    }
    Property = BCryptExportKey(hObject, 0LL, L"KeyDataBlob", Pool2, cbInput, &cbInput, 0);
    if ( Property >= 0 )
    {
      Property = BCryptOpenAlgorithmProvider(&phAlgorithm, L"RSA", 0LL, 1u);
      if ( Property >= 0 )
      {
        Property = BCryptImportKeyPair(
                     phAlgorithm,
                     v2,
                     v5,
                     &phKey,
                     *((PUCHAR *)&xmmword_140C64CD8 + 1),
                     ::dwFlags,
                     dwFlags);
        if ( Property < 0
          || (Property = BCryptGetProperty(phKey, L"KeyLength", (PUCHAR)&pbOutput, v6, &v14, pcbResult), Property < 0) )
        {
          v1 = 3;
        }
        else if ( pbOutput == 2048 )
        {
          Property = BCryptEncrypt(phKey, v0, cbInput, pPaddingInfo, 0LL, 0, 0LL, 0, &::pcbResult, 4u);
          if ( Property >= 0 )
          {
            qword_140C64CF8 = (PVOID)ExAllocatePool2(64LL, ::pcbResult, 1886217299LL);
            if ( !qword_140C64CF8 )
              goto LABEL_3;
            Property = BCryptEncrypt(
                         phKey,
                         v0,
                         cbInput,
                         pPaddingInfo,
                         0LL,
                         0,
                         (PUCHAR)qword_140C64CF8,
                         ::pcbResult,
                         &::pcbResult,
                         4u);
          }
        }
        else
        {
          v1 = 4;
          Property = -1073741823;
        }
      }
    }
  }
LABEL_14:
  if ( phAlgorithm )
    BCryptCloseAlgorithmProvider(phAlgorithm, (ULONG)v2);
  if ( phKey )
    BCryptDestroyKey(phKey);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  if ( Property < 0 )
    SecureDump_LogErrorEvent(v1);
  return (unsigned int)Property;
}
