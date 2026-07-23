/*
 * XREFs of RtlInitializeSidEx @ 0x1403689F0
 * Callers:
 *     RtlCheckTokenMembershipEx @ 0x14031D480 (RtlCheckTokenMembershipEx.c)
 * Callees:
 *     RtlInitializeSid @ 0x140782240 (RtlInitializeSid.c)
 */

NTSTATUS RtlInitializeSidEx(PSID Sid, PSID_IDENTIFIER_AUTHORITY IdentifierAuthority, UCHAR SubAuthorityCount, ...)
{
  unsigned int v3; // ebx
  NTSTATUS result; // eax
  UCHAR *v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // r8
  UCHAR v9; // [rsp+60h] [rbp+18h] BYREF

  v9 = SubAuthorityCount;
  v3 = SubAuthorityCount;
  result = RtlInitializeSid(Sid, IdentifierAuthority, SubAuthorityCount);
  if ( result >= 0 )
  {
    if ( (_BYTE)v3 )
    {
      v6 = &v9;
      v7 = (char *)Sid + 8;
      v8 = v3;
      do
      {
        v6 += 8;
        *v7++ = *(_DWORD *)v6;
        --v8;
      }
      while ( v8 );
    }
    return 0;
  }
  return result;
}
