/*
 * XREFs of WdipAccessCheck @ 0x1405FB898
 * Callers:
 *     WdiUpdateSem @ 0x1405FB878 (WdiUpdateSem.c)
 * Callees:
 *     SeAccessCheck @ 0x140231630 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140736A80 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736B20 (RtlCreateAcl.c)
 *     SeCaptureSubjectContext @ 0x1407380C0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     RtlInitializeSid @ 0x140782560 (RtlInitializeSid.c)
 *     RtlLengthRequiredSid @ 0x1407D1BF0 (RtlLengthRequiredSid.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF9B0 (RtlAddAccessAllowedAce.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 WdipAccessCheck()
{
  ACL *v0; // rbx
  ULONG v1; // eax
  _DWORD *Pool2; // rax
  _DWORD *v3; // rdi
  unsigned __int8 *v5; // rax
  unsigned int v6; // r14d
  ACL *v7; // rax
  ACL *v8; // rsi
  NTSTATUS AccessStatus; // [rsp+58h] [rbp-9h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+5Ch] [rbp-5h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+64h] [rbp+3h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp+7h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+88h] [rbp+27h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v0 = 0LL;
  GenericMapping.GenericRead = 131073;
  GrantedAccess = 0;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericAll = 2031617;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v1 = RtlLengthRequiredSid(6u);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v1, 1934181463LL);
  v3 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  AccessStatus = RtlInitializeSid(Pool2, &IdentifierAuthority, 6u);
  if ( AccessStatus >= 0 )
  {
    v5 = (unsigned __int8 *)SeLocalSystemSid;
    v3[2] = 80;
    v3[3] = -1324354722;
    v3[4] = 78537857;
    v3[5] = 698502321;
    v3[6] = 558674196;
    v3[7] = 1451644582;
    v6 = 4 * (*((unsigned __int8 *)v3 + 1) + *((unsigned __int8 *)SeAliasAdminsSid + 1) + v5[1]) + 108;
    v7 = (ACL *)ExAllocatePool2(256LL, v6, 1934181463LL);
    v0 = v7;
    if ( v7 )
    {
      v8 = v7 + 5;
      AccessStatus = RtlCreateSecurityDescriptor(v7, 1u);
      if ( AccessStatus >= 0 )
      {
        AccessStatus = RtlCreateAcl(v8, v6 - 40, 2u);
        if ( AccessStatus >= 0 )
        {
          AccessStatus = RtlAddAccessAllowedAce(v8, 2u, 1u, SeAliasAdminsSid);
          if ( AccessStatus >= 0 )
          {
            AccessStatus = RtlAddAccessAllowedAce(v8, 2u, 1u, SeLocalSystemSid);
            if ( AccessStatus >= 0 )
            {
              AccessStatus = RtlAddAccessAllowedAce(v8, 2u, 1u, v3);
              if ( AccessStatus >= 0 )
              {
                AccessStatus = RtlSetDaclSecurityDescriptor(v0, 1u, v8, 0);
                if ( AccessStatus >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  SeAccessCheck(v0, &SubjectContext, 0, 1u, 0, 0LL, &GenericMapping, 1, &GrantedAccess, &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                }
              }
            }
          }
        }
      }
    }
    else
    {
      AccessStatus = -1073741670;
    }
  }
  ExFreePoolWithTag(v3, 0);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)AccessStatus;
}
