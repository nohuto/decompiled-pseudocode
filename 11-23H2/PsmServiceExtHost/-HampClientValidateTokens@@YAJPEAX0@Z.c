/*
 * XREFs of ?HampClientValidateTokens@@YAJPEAX0@Z @ 0x18004E9E4
 * Callers:
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E6A0 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 * Callees:
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 */

__int64 __fastcall HampClientValidateTokens(void *a1, void *a2)
{
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-E8h] BYREF
  PSID TokenInformation; // [rsp+40h] [rbp-D8h] BYREF
  int v6; // [rsp+48h] [rbp-D0h]
  PSID Sid2; // [rsp+A0h] [rbp-78h] BYREF
  int v8; // [rsp+A8h] [rbp-70h]

  NtQueryInformationToken(a1, TokenIntegrityLevel, &TokenInformation, 0x58u, ReturnLength);
  NtQueryInformationToken(a2, TokenIntegrityLevel, &Sid2, 0x58u, ReturnLength);
  if ( RtlEqualSid(TokenInformation, Sid2) )
    return v8 != v6 ? 0xC00002A0 : 0;
  else
    return 3221226144LL;
}
