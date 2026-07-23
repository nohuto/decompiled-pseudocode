/*
 * XREFs of EtwpUserInAdminOrLogUsersGroup @ 0x1409E520C
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1409BC11C (RtlAllocateAndInitializeSidEx.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

bool EtwpUserInAdminOrLogUsersGroup()
{
  UCHAR v0; // dl
  bool result; // al
  NTSTATUS v2; // ebx
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp+20h] BYREF
  PSID Sid; // [rsp+50h] [rbp+28h] BYREF
  ULONG SubAuthorities; // [rsp+58h] [rbp+30h] BYREF
  int v7; // [rsp+5Ch] [rbp+34h]

  *(_DWORD *)IdentifierAuthority.Value = 0;
  Sid = 0LL;
  IsMember = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) >= 0 && IsMember )
    return 1;
  SubAuthorities = 32;
  v7 = 558;
  result = RtlAllocateAndInitializeSidEx(&IdentifierAuthority, v0, &SubAuthorities, &Sid) >= 0
        && (v2 = RtlCheckTokenMembership(0LL, Sid, &IsMember), ExFreePoolWithTag(Sid, 0), v2 >= 0)
        && IsMember != 0;
  return result;
}
