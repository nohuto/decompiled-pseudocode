/*
 * XREFs of RtlCreateVirtualAccountSid @ 0x18000BD90
 * Callers:
 *     <none>
 * Callees:
 *     RtlUpcaseUnicodeString @ 0x18000F280 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     A_SHAFinal @ 0x180012BA0 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x180012D10 (A_SHAUpdate.c)
 *     RtlFreeUnicodeString @ 0x180048810 (RtlFreeUnicodeString.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlCreateVirtualAccountSid(__int64 a1, int a2, _DWORD *a3, unsigned int *a4)
{
  _DWORD *v4; // rbx
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // r8
  int v9; // eax
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v11[64]; // [rsp+30h] [rbp-39h] BYREF
  int v12; // [rsp+70h] [rbp+7h]
  int v13; // [rsp+74h] [rbp+Bh]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  int v16; // [rsp+80h] [rbp+17h]
  int v17; // [rsp+84h] [rbp+1Bh]
  int v18; // [rsp+88h] [rbp+1Fh]
  int v19; // [rsp+90h] [rbp+27h]
  int v20; // [rsp+94h] [rbp+2Bh]
  int v21; // [rsp+98h] [rbp+2Fh]
  int v22; // [rsp+9Ch] [rbp+33h]
  int v23; // [rsp+A0h] [rbp+37h]

  v4 = a3;
  if ( !a1 || !a4 || (unsigned int)(a2 - 80) > 0x1F )
    return 3221225485LL;
  v6 = *a4;
  *a4 = 32;
  if ( v6 < 0x20 )
    return 3221225507LL;
  LOBYTE(a3) = 1;
  result = RtlUpcaseUnicodeString(&UnicodeString, a1, a3);
  if ( (int)result >= 0 )
  {
    v17 = 0;
    v18 = 0;
    v12 = 1732584193;
    v13 = -271733879;
    v14 = -1732584194;
    v15 = 271733878;
    v16 = -1009589776;
    A_SHAUpdate(v11, UnicodeString.Buffer, UnicodeString.Length);
    A_SHAFinal(v11);
    RtlFreeUnicodeString(&UnicodeString);
    LOBYTE(v8) = 6;
    RtlInitializeSid(v4, &RtlpNtAuthority, v8);
    v9 = v19;
    v4[2] = a2;
    v4[3] = v9;
    v4[4] = v20;
    v4[5] = v21;
    v4[6] = v22;
    v4[7] = v23;
    return 0LL;
  }
  return result;
}
