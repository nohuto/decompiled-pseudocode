/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x14037046C
 * Callers:
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x140227970 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x140227A60 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlQueryInformationAcl @ 0x140736140 (RtlQueryInformationAcl.c)
 *     RtlCreateAcl @ 0x140736620 (RtlCreateAcl.c)
 *     RtlAddAce @ 0x140736740 (RtlAddAce.c)
 *     RtlAddAccessAllowedAce @ 0x1407EF430 (RtlAddAccessAllowedAce.c)
 *     SepExpandDynamic @ 0x1407F126C (SepExpandDynamic.c)
 *     SepFreeDefaultDacl @ 0x1407F1354 (SepFreeDefaultDacl.c)
 *     SepAppendDefaultDacl @ 0x1407F13A0 (SepAppendDefaultDacl.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, unsigned __int8 *a2)
{
  ACL *v3; // rsi
  int AclSize; // ebx
  NTSTATUS Acl; // edi
  ULONG v7; // r15d
  ACL *Pool2; // rax
  ACL *v9; // rbp
  ULONG v10; // ebx
  ULONG AclRevision; // [rsp+30h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-40h]

  Ace = 0LL;
  AclRevision = 0;
  v3 = *(ACL **)(a1 + 184);
  v14 = 0LL;
  v15 = 0;
  if ( !v3 || RtlFindAceBySid((__int64)v3, a2, 0LL) )
  {
    return 0;
  }
  else
  {
    AclSize = v3->AclSize;
    Acl = RtlQueryInformationAcl(v3, &AclRevision, 4LL);
    if ( Acl >= 0 )
    {
      Acl = RtlQueryInformationAcl(v3, &v14, 12LL);
      if ( Acl >= 0 )
      {
        v7 = (AclSize + 4 * a2[1] + 19) & 0xFFFFFFFC;
        Pool2 = (ACL *)ExAllocatePool2(256LL, v7, 1665230163LL);
        v9 = Pool2;
        if ( Pool2 )
        {
          v10 = AclRevision;
          Acl = RtlCreateAcl(Pool2, v7, AclRevision);
          if ( Acl >= 0 )
          {
            Acl = RtlGetAce(v3, 0, &Ace);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAce(v9, v10, 0, Ace, HIDWORD(v14) - 8);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v9, v10, 0x10000000u, a2);
                if ( Acl >= 0 )
                {
                  Acl = SepExpandDynamic(
                          a1,
                          (v7 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
                  if ( Acl >= 0 )
                  {
                    SepFreeDefaultDacl(a1);
                    SepAppendDefaultDacl(a1, v9);
                  }
                }
              }
            }
          }
          ExFreePoolWithTag(v9, 0);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)Acl;
}
