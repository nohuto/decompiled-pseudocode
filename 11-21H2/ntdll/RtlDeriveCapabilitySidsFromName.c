/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18004A1A0
 * Callers:
 *     RtlCapabilityCheck @ 0x180012560 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x18000F280 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     SHA256Final @ 0x180012A6C (SHA256Final.c)
 *     SHA256Update @ 0x180013F84 (SHA256Update.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x18004A360 (RtlEqualUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlDeriveCapabilitySidsFromName(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v6; // xmm0
  unsigned int v7; // edi
  unsigned int v8; // esi
  __int128 v9; // xmm0
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-69h] BYREF
  _DWORD v11[28]; // [rsp+30h] [rbp-59h] BYREF
  __int128 v12; // [rsp+A0h] [rbp+17h] BYREF
  __int128 v13; // [rsp+B0h] [rbp+27h]

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
    v11[8] = 0;
    v11[9] = 0;
    v11[0] = 1779033703;
    v11[1] = -1150833019;
    v11[2] = 1013904242;
    v11[3] = -1521486534;
    v11[4] = 1359893119;
    v11[5] = -1694144372;
    v11[6] = 528734635;
    v11[7] = 1541459225;
    SHA256Update((__int64)v11, (_OWORD *)UnicodeString.Buffer, UnicodeString.Length);
    SHA256Final(v11, (__int64)&v12);
    RtlInitializeSid(a2, (__int64)&RtlpNtAuthority, 9u);
    v6 = v12;
    *(_DWORD *)(a2 + 8) = 32;
    *(_OWORD *)(a2 + 12) = v6;
    *(_OWORD *)(a2 + 28) = v13;
    v7 = 0;
    while ( 1 )
    {
      v8 = v7 + 1;
      if ( (unsigned __int8)RtlEqualUnicodeString(
                              &UnicodeString,
                              (char *)&RtlpLegacyApplicationCapabilityNames + 16 * v7,
                              0LL) )
        break;
      ++v7;
      if ( v8 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(a3, (__int64)&RtlpAppPackageAuthority, 2u);
    *(_DWORD *)(a3 + 8) = 3;
    *(_DWORD *)(a3 + 12) = v8;
LABEL_8:
    RtlFreeUnicodeString(&UnicodeString);
    if ( v7 == 12 )
    {
      RtlInitializeSid(a3, (__int64)&RtlpAppPackageAuthority, 0xAu);
      v9 = v12;
      *(_DWORD *)(a3 + 8) = 3;
      *(_DWORD *)(a3 + 12) = 1024;
      *(_OWORD *)(a3 + 16) = v9;
      *(_OWORD *)(a3 + 32) = v13;
    }
    return 0LL;
  }
  return result;
}
