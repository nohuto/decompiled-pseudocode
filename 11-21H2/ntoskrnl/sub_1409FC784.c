/*
 * XREFs of sub_1409FC784 @ 0x1409FC784
 * Callers:
 *     sub_1406C9754 @ 0x1406C9754 (sub_1406C9754.c)
 *     sub_1406DC9F0 @ 0x1406DC9F0 (sub_1406DC9F0.c)
 *     sub_1406DCB10 @ 0x1406DCB10 (sub_1406DCB10.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwQueryInformationToken @ 0x14041BB80 (ZwQueryInformationToken.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     sub_1409FB924 @ 0x1409FB924 (sub_1409FB924.c)
 */

bool __fastcall sub_1409FC784(int a1)
{
  int v1; // ecx
  BOOLEAN IsMember[4]; // [rsp+30h] [rbp-D0h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ReturnLength; // [rsp+3Ch] [rbp-C4h] BYREF
  HANDLE TokenInformation; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING v8; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING v9; // [rsp+68h] [rbp-98h] BYREF
  __int128 Sid; // [rsp+78h] [rbp-88h] BYREF
  __int64 v11; // [rsp+88h] [rbp-78h]
  __int64 v12; // [rsp+90h] [rbp-70h] BYREF
  int v13; // [rsp+98h] [rbp-68h]
  __int16 v14; // [rsp+9Ch] [rbp-64h]
  _OWORD v15[4]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v16; // [rsp+E0h] [rbp-20h]
  __int16 v17; // [rsp+E8h] [rbp-18h]
  _OWORD v18[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v19; // [rsp+130h] [rbp+30h]
  int v20; // [rsp+138h] [rbp+38h]

  TokenInformation = 0LL;
  ReturnLength = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v11 = 0LL;
  v13 = 7536751;
  v14 = 0;
  v9.Buffer = (wchar_t *)&v12;
  v15[1] = xmmword_1408726C0;
  v17 = 0;
  v15[3] = xmmword_1408726E0;
  v8.Buffer = (wchar_t *)v15;
  v18[1] = xmmword_140872750;
  v20 = 121;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_QWORD *)&v9.Length = 917516LL;
  *(_QWORD *)&v8.Length = 4849736LL;
  v18[3] = xmmword_140872770;
  *(_QWORD *)&CapabilityName.Length = 4980810LL;
  CapabilityName.Buffer = (wchar_t *)v18;
  Sid = 0LL;
  v12 = 0x690062006D0073LL;
  v15[0] = xmmword_1408726B0;
  v15[2] = xmmword_1408726D0;
  v16 = 0x79007700650079LL;
  v18[0] = xmmword_140872740;
  v18[2] = xmmword_140872760;
  v19 = 0x77006500790078LL;
  if ( !a1 )
    return sub_1409FB924(&v9);
  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 != 1 )
      return 0;
    goto LABEL_4;
  }
  if ( !sub_1409FB924(&v8) )
  {
LABEL_4:
    if ( !sub_1409FB924(&CapabilityName) )
      return 0;
  }
  if ( *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2170LL) != 0x81 )
  {
    RtlRunOnceExecuteOnce(&stru_140CF69A0, (PRTL_RUN_ONCE_INIT_FN)sub_140377310, 0LL, 0LL);
    if ( !byte_140C11664 )
      return 0;
  }
  IsMember[0] = 0;
  RtlInitializeSid(&Sid, &IdentifierAuthority, 2u);
  *RtlSubAuthoritySid(&Sid, 0) = 32;
  *RtlSubAuthoritySid(&Sid, 1u) = 544;
  return ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenLinkedToken, &TokenInformation, 8u, &ReturnLength) >= 0
      && ReturnLength == 8
      && RtlCheckTokenMembershipEx(TokenInformation, &Sid, 1u, IsMember) >= 0
      && IsMember[0];
}
