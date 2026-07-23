/*
 * XREFs of sub_1403CE4A4 @ 0x1403CE4A4
 * Callers:
 *     sub_140847FF0 @ 0x140847FF0 (sub_140847FF0.c)
 * Callees:
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x14078ED30 (RtlAddAccessAllowedAce.c)
 *     sub_1409B8050 @ 0x1409B8050 (sub_1409B8050.c)
 *     sub_1409CF1A0 @ 0x1409CF1A0 (sub_1409CF1A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

void sub_1403CE4A4()
{
  ACL *v0; // rbx
  ULONG v1; // ebp
  ACL *Pool2; // rax
  ACL *v3; // rdi
  ACL *v4; // rsi
  NTSTATUS Acl; // eax
  __int64 v6; // rdx
  int v7; // r9d
  ULONG v8; // ebp
  ACL *v9; // rax
  ACL *v10; // rsi

  v0 = 0LL;
  if ( qword_140D3CCC0 )
  {
    ExFreePoolWithTag(qword_140D3CCC0, 0);
    qword_140D3CCC0 = 0LL;
  }
  if ( dword_140D3B104 )
  {
    v1 = 4 * *((unsigned __int8 *)qword_140C5AFA8 + 1) + 24;
    Pool2 = (ACL *)ExAllocatePool2(
                     256LL,
                     4 * (unsigned int)*((unsigned __int8 *)qword_140C5AFA8 + 1) + 64,
                     1683187027LL);
    v3 = Pool2;
    if ( Pool2 )
    {
      v4 = Pool2 + 5;
      Acl = RtlCreateAcl(Pool2 + 5, v1, 2u);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = sub_1409B8050(v4, v6, (unsigned int)dword_140D3B104);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlCreateSecurityDescriptor(v3, 1u);
      if ( Acl < 0 )
        goto LABEL_20;
      Acl = RtlSetSaclSecurityDescriptor(v3, 1u, v4, 0);
      if ( Acl < 0 )
        goto LABEL_20;
      qword_140D3CCC0 = v3;
      v7 = *((unsigned __int8 *)Group + 1)
         + *((unsigned __int8 *)qword_140D3CAE0 + 1)
         + *((unsigned __int8 *)qword_140D3CB20 + 1)
         + *((unsigned __int8 *)qword_140D3CBA8 + 1);
      v8 = 4 * v7 + 72;
      v9 = (ACL *)ExAllocatePool2(256LL, (unsigned int)(4 * v7 + 112), 1683187027LL);
      v0 = v9;
      if ( v9 )
      {
        v10 = v9 + 5;
        Acl = RtlCreateAcl(v9 + 5, v8, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, Group);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, qword_140D3CAE0);
            if ( Acl >= 0 )
            {
              Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, qword_140D3CB20);
              if ( Acl >= 0 )
              {
                Acl = RtlAddAccessAllowedAce(v10, 2u, 1u, qword_140D3CBA8);
                if ( Acl >= 0 )
                {
                  Acl = RtlCreateSecurityDescriptor(v0, 1u);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlSetDaclSecurityDescriptor(v0, 1u, v10, 0);
                    if ( Acl >= 0 )
                    {
                      qword_140D3CF10 = (__int64)v0;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_20;
      }
    }
    Acl = -1073741670;
LABEL_20:
    sub_1409CF1A0((unsigned int)Acl);
    if ( v3 )
    {
      ExFreePoolWithTag(v3, 0);
      qword_140D3CCC0 = 0LL;
    }
    if ( v0 )
    {
      ExFreePoolWithTag(v0, 0);
      qword_140D3CF10 = 0LL;
    }
  }
}
