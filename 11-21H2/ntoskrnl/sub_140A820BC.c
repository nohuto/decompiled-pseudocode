/*
 * XREFs of sub_140A820BC @ 0x140A820BC
 * Callers:
 *     sub_140A81DB4 @ 0x140A81DB4 (sub_140A81DB4.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

PSECURITY_DESCRIPTOR sub_140A820BC()
{
  void *Pool2; // rax
  void *v1; // rdi
  ULONG v2; // ebx
  ACL *v3; // rax
  ACL *v4; // rsi
  NTSTATUS Acl; // ebx

  if ( !qword_140D576D8 )
  {
    if ( Group )
    {
      Pool2 = (void *)ExAllocatePool2(256LL, 0x28uLL, 0x55667256u);
      v1 = Pool2;
      if ( Pool2 )
      {
        if ( RtlCreateSecurityDescriptor(Pool2, 1u) < 0 )
          goto LABEL_12;
        v2 = RtlLengthSid(Group) + 20;
        v3 = (ACL *)ExAllocatePool2(256LL, v2, 0x55667256u);
        v4 = v3;
        if ( !v3 )
          goto LABEL_12;
        Acl = RtlCreateAcl(v3, v2, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v4, 2u, 1u, Group);
          if ( Acl >= 0 )
          {
            Acl = RtlSetDaclSecurityDescriptor(v1, 1u, v4, 0);
            if ( Acl >= 0 )
            {
              if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140D576D8, (signed __int64)v1, 0LL) )
                return qword_140D576D8;
              Acl = -1073741595;
            }
          }
        }
        ExFreePoolWithTag(v4, 0x55667256u);
        if ( Acl < 0 )
LABEL_12:
          ExFreePoolWithTag(v1, 0x55667256u);
      }
    }
  }
  return qword_140D576D8;
}
