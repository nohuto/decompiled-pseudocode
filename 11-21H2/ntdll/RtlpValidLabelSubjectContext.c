/*
 * XREFs of RtlpValidLabelSubjectContext @ 0x1800F3758
 * Callers:
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlSidDominates @ 0x18000EE00 (RtlSidDominates.c)
 *     RtlInitializeSid @ 0x1800128B0 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     ZwPrivilegeCheck @ 0x1800A6820 (ZwPrivilegeCheck.c)
 */

char __fastcall RtlpValidLabelSubjectContext(HANDLE ClientToken, _BYTE *Sid2, char a3, NTSTATUS *a4)
{
  _BYTE *v8; // rdi
  NTSTATUS InformationToken; // eax
  _BYTE *v10; // rax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  BOOLEAN v13; // cl
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-D0h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Sid[8]; // [rsp+60h] [rbp-A0h] BYREF
  int v20; // [rsp+68h] [rbp-98h]
  PSID TokenInformation[12]; // [rsp+B0h] [rbp-50h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 4096;
  Dominates[0] = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v20 = 0x2000;
  v8 = Sid;
  if ( Sid2 )
    v8 = Sid2;
  InformationToken = NtQueryInformationToken(
                       ClientToken,
                       0x19u,
                       TokenInformation,
                       0x54u,
                       (PULONG)IdentifierAuthority.Value);
  *a4 = InformationToken;
  if ( InformationToken < 0 )
    return 0;
  if ( (a3 & 8) != 0 )
  {
    if ( RtlSidDominates(v8, Sid, Dominates) < 0 )
      return 0;
    v10 = v8;
    v8 = Sid;
    if ( Dominates[0] )
      v8 = v10;
  }
  v11 = RtlSidDominates(TokenInformation[0], v8, Dominates);
  *a4 = v11;
  if ( v11 < 0 )
    return 0;
  if ( !Dominates[0] )
  {
    v17 = 32LL;
    RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
    RequiredPrivileges.PrivilegeCount = 1;
    RequiredPrivileges.Control = 1;
    RequiredPrivileges.Privilege[0].Attributes = 0;
    v12 = ZwPrivilegeCheck(ClientToken, &RequiredPrivileges, Dominates);
    v13 = Dominates[0];
    if ( v12 < 0 )
      v13 = 0;
    if ( !v13 )
    {
      *a4 = -1073740730;
      return 0;
    }
  }
  return 1;
}
