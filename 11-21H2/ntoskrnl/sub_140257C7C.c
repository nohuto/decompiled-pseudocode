/*
 * XREFs of sub_140257C7C @ 0x140257C7C
 * Callers:
 *     sub_14078DDF0 @ 0x14078DDF0 (sub_14078DDF0.c)
 * Callees:
 *     RtlGetAce @ 0x1402A4750 (RtlGetAce.c)
 *     sub_1402A47B0 @ 0x1402A47B0 (sub_1402A47B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlQueryInformationAcl @ 0x140724B00 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x140724BB0 (RtlAddAce.c)
 *     sub_1407531C4 @ 0x1407531C4 (sub_1407531C4.c)
 *     sub_1407532AC @ 0x1407532AC (sub_1407532AC.c)
 *     sub_1407532F8 @ 0x1407532F8 (sub_1407532F8.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140257C7C(__int64 a1, unsigned __int8 *a2)
{
  ACL *v3; // rsi
  int AclSize; // ebx
  NTSTATUS Acl; // edi
  ULONG v7; // r15d
  ACL *Pool2; // rax
  ACL *v9; // rbp
  ULONG v10; // ebx
  ULONG AclInformation; // [rsp+30h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-40h]

  Ace = 0LL;
  AclInformation = 0;
  v3 = *(ACL **)(a1 + 184);
  v14 = 0LL;
  v15 = 0;
  if ( !v3 || sub_1402A47B0(v3, a2, 0LL) )
  {
    return 0;
  }
  else
  {
    AclSize = v3->AclSize;
    Acl = RtlQueryInformationAcl(v3, &AclInformation, 4u, AclRevisionInformation);
    if ( Acl >= 0 )
    {
      Acl = RtlQueryInformationAcl(v3, &v14, 0xCu, AclSizeInformation);
      if ( Acl >= 0 )
      {
        v7 = (AclSize + 4 * a2[1] + 19) & 0xFFFFFFFC;
        Pool2 = (ACL *)ExAllocatePool2(256LL, v7, 1665230163LL);
        v9 = Pool2;
        if ( Pool2 )
        {
          v10 = AclInformation;
          Acl = RtlCreateAcl(Pool2, v7, AclInformation);
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
                  Acl = sub_1407531C4(
                          a1,
                          (v7 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
                  if ( Acl >= 0 )
                  {
                    sub_1407532AC(a1);
                    sub_1407532F8(a1, v9);
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
