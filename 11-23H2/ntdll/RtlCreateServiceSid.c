/*
 * XREFs of RtlCreateServiceSid @ 0x1800100C0
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D66B0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     A_SHAFinal @ 0x18000EB60 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000ECD0 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x18000FF50 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateServiceSid(unsigned __int16 *a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v4; // eax
  __int64 result; // rax
  __int64 v6; // r8
  int v7; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v9[24]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v10[6]; // [rsp+90h] [rbp+37h] BYREF

  if ( !a1 || !a3 )
    return 3221225485LL;
  v4 = *a3;
  *a3 = 32;
  if ( v4 < 0x20 )
    return 3221225507LL;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, 1);
  if ( (int)result >= 0 )
  {
    v9[21] = 0;
    v9[22] = 0;
    v9[16] = 1732584193;
    v9[17] = -271733879;
    v9[18] = -1732584194;
    v9[19] = 271733878;
    v9[20] = -1009589776;
    A_SHAUpdate((__int64)v9, (char *)UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v9, (__int64)v10);
    RtlFreeUnicodeString(&UnicodeString);
    LOBYTE(v6) = 6;
    RtlInitializeSid(a2, &RtlpNtAuthority, v6);
    v7 = v10[0];
    a2[2] = 80;
    a2[3] = v7;
    a2[4] = v10[1];
    a2[5] = v10[2];
    a2[6] = v10[3];
    a2[7] = v10[4];
    return 0LL;
  }
  return result;
}
