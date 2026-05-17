/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18002ACE0
 * Callers:
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 * Callees:
 *     SHA256Update @ 0x18000C760 (SHA256Update.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     SHA256Final @ 0x18000EA2C (SHA256Final.c)
 *     RtlUpcaseUnicodeString @ 0x18000FF50 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  unsigned int v9; // edi
  unsigned int v10; // r14d
  __int128 v11; // xmm1
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-89h] BYREF
  __int128 v13; // [rsp+30h] [rbp-79h]
  _DWORD v14[28]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v15; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v16; // [rsp+C0h] [rbp+17h]

  if ( !a1 || !a2 || !a3 )
    __fastfail(5u);
  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_OWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_DWORD *)(a2 + 40) = 0;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v14[8] = 0;
    v14[9] = 0;
    v14[0] = 1779033703;
    v14[1] = -1150833019;
    v14[2] = 1013904242;
    v14[3] = -1521486534;
    v14[4] = 1359893119;
    v14[5] = -1694144372;
    v14[6] = 528734635;
    v14[7] = 1541459225;
    SHA256Update((__int64)v14, (_OWORD *)UnicodeString.Buffer, UnicodeString.Length);
    SHA256Final(v14, (__int64)&v15);
    RtlInitializeSid(a2, (__int64)&RtlpNtAuthority, 9u);
    v7 = v15;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v7;
    v13 = v7;
    v8 = v16;
    *(_OWORD *)(a2 + 28) = v16;
    v9 = 0;
    v15 = v8;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( RtlEqualUnicodeString(&UnicodeString.Length, (__int64)&RtlpLegacyApplicationCapabilityNames + 16 * v9, 0) )
        break;
      ++v9;
      if ( v10 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(a3, (__int64)&RtlpAppPackageAuthority, 2u);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v10;
LABEL_8:
    RtlFreeUnicodeString(&UnicodeString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(a3, (__int64)&RtlpAppPackageAuthority, 0xAu);
      *(_DWORD *)(a3 + 8) = 3;
      *(_DWORD *)(a3 + 12) = RtlPrefixUnicodeString(word_180133088, (__int64)a1, 1) != 0 ? 0x10000 : 1024;
      v11 = v15;
      *(_OWORD *)(a3 + 16) = v13;
      *(_OWORD *)(a3 + 32) = v11;
    }
    return 0LL;
  }
  return result;
}
