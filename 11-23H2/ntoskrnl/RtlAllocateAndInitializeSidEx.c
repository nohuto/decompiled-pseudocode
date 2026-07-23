/*
 * XREFs of RtlAllocateAndInitializeSidEx @ 0x1409BC11C
 * Callers:
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1409E520C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

NTSTATUS __cdecl RtlAllocateAndInitializeSidEx(
        PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
        UCHAR SubAuthorityCount,
        PULONG SubAuthorities,
        PSID *Sid)
{
  char *Pool2; // rax
  __int64 v9; // rcx
  signed __int64 v10; // r8

  Pool2 = (char *)ExAllocatePool2(65LL, 16LL, 1649439826LL);
  if ( !Pool2 )
    return -1073741801;
  *Pool2 = 1;
  v9 = 2LL;
  *(_DWORD *)(Pool2 + 2) = *(_DWORD *)IdentifierAuthority->Value;
  v10 = Pool2 - (char *)SubAuthorities;
  *((_WORD *)Pool2 + 3) = *(_WORD *)&IdentifierAuthority->Value[4];
  Pool2[1] = 2;
  do
  {
    *(PULONG)((char *)SubAuthorities + v10 + 8) = *SubAuthorities;
    ++SubAuthorities;
    --v9;
  }
  while ( v9 );
  *Sid = Pool2;
  return 0;
}
