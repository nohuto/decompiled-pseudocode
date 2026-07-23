/*
 * XREFs of SmCrEncStart @ 0x1409DAA2C
 * Callers:
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140343D70 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 * Callees:
 *     SSHSupportAllocateNonPaged @ 0x14032D5E4 (SSHSupportAllocateNonPaged.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SmCrGenRandom @ 0x1405CE1FC (SmCrGenRandom.c)
 *     BCryptGetProperty @ 0x1407620D0 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140810CA4 (BCryptOpenAlgorithmProvider.c)
 *     BCryptGenerateSymmetricKey @ 0x1409C9184 (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x1409C92AC (BCryptSetProperty.c)
 */

NTSTATUS __fastcall SmCrEncStart(__int64 a1, const void *a2, unsigned int a3)
{
  size_t v4; // rsi
  NTSTATUS result; // eax
  ULONG v7; // r9d
  _DWORD *v8; // rdi
  void *NonPaged; // rax
  __int64 v10; // r8
  ULONG v11; // r9d
  __int64 v12; // rcx
  void *v13; // rax
  ULONG v14; // r9d
  void *v15; // rax
  ULONG pcbResult; // [rsp+20h] [rbp-38h]
  ULONG cbSecret; // [rsp+28h] [rbp-30h]
  ULONG cbSecreta; // [rsp+28h] [rbp-30h]
  ULONG v19; // [rsp+30h] [rbp-28h]
  ULONG dwFlags; // [rsp+60h] [rbp+8h] BYREF
  ULONG pbOutput; // [rsp+78h] [rbp+20h] BYREF

  dwFlags = 0;
  pbOutput = 0;
  v4 = a3;
  result = BCryptOpenAlgorithmProvider((BCRYPT_ALG_HANDLE *)a1, L"AES", 0LL, 1u);
  if ( result >= 0 )
  {
    v8 = (_DWORD *)(a1 + 8);
    result = BCryptGetProperty(*(BCRYPT_HANDLE *)a1, L"BlockLength", (PUCHAR)(a1 + 8), v7, &dwFlags, cbSecret);
    if ( result >= 0 )
    {
      if ( !*v8 || ((*v8 - 1) & *v8) != 0 )
      {
        return -1073741453;
      }
      else
      {
        NonPaged = (void *)SSHSupportAllocateNonPaged((unsigned int)v4, 0x52436D73u);
        *(_QWORD *)(a1 + 16) = NonPaged;
        if ( !NonPaged )
          return -1073741670;
        if ( a2 )
        {
          memmove(NonPaged, a2, v4);
        }
        else
        {
          result = SmCrGenRandom((PUCHAR)NonPaged, v4, v10, v11);
          if ( result < 0 )
            return result;
        }
        v12 = (unsigned int)*v8;
        *(_DWORD *)(a1 + 24) = v4;
        v13 = (void *)SSHSupportAllocateNonPaged(v12, 0x52436D73u);
        *(_QWORD *)(a1 + 48) = v13;
        if ( !v13 )
          return -1073741670;
        memset(v13, 0, (unsigned int)*v8);
        result = BCryptGetProperty(*(BCRYPT_HANDLE *)a1, L"ObjectLength", (PUCHAR)&pbOutput, v14, &dwFlags, cbSecreta);
        if ( result >= 0 )
        {
          v15 = (void *)SSHSupportAllocateNonPaged(pbOutput, 0x52436D73u);
          *(_QWORD *)(a1 + 40) = v15;
          if ( !v15 )
            return -1073741670;
          memset(v15, 0, pbOutput);
          result = BCryptSetProperty(
                     *(BCRYPT_HANDLE *)a1,
                     L"ChainingMode",
                     (PUCHAR)L"ChainingModeCCM",
                     0x20u,
                     pcbResult);
          if ( result >= 0 )
          {
            result = BCryptGenerateSymmetricKey(
                       *(BCRYPT_ALG_HANDLE *)a1,
                       (BCRYPT_KEY_HANDLE *)(a1 + 32),
                       *(PUCHAR *)(a1 + 40),
                       pbOutput,
                       *(PUCHAR *)(a1 + 16),
                       *(_DWORD *)(a1 + 24),
                       v19);
            if ( result >= 0 )
              return 0;
          }
        }
      }
    }
  }
  return result;
}
