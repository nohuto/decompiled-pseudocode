/*
 * XREFs of sub_14074F2EC @ 0x14074F2EC
 * Callers:
 *     sub_14074F220 @ 0x14074F220 (sub_14074F220.c)
 * Callees:
 *     RtlSetSaclSecurityDescriptor @ 0x1406CCBA0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlAddMandatoryAce @ 0x1406CCC10 (RtlAddMandatoryAce.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall sub_14074F2EC(PSECURITY_DESCRIPTOR SecurityDescriptor, int a2, ACL **a3, int *a4)
{
  char v4; // di
  int v8; // edx
  int v9; // edx
  ACL *v10; // rbx
  NTSTATUS result; // eax
  int v12; // edx
  int v13; // edx
  unsigned __int16 v14; // bp
  ACL *Pool2; // rax
  ACL *v16; // r15
  int v17; // ecx

  v4 = 0;
  v8 = a2 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = Acl;
      goto LABEL_4;
    }
    v12 = v9 - 1;
    if ( !v12 )
    {
      v10 = qword_140D3CBA0;
      goto LABEL_10;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v10 = qword_140D3CB48;
LABEL_10:
      v4 = 1;
      goto LABEL_4;
    }
    if ( v13 != 1 )
      return -1073741811;
    v10 = SeSystemDefaultDacl;
  }
  else
  {
    v10 = SePublicDefaultDacl;
  }
LABEL_4:
  RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( v4 == 1 )
  {
    v14 = 4 * (*((unsigned __int8 *)Sid + 1) + 6);
    Pool2 = (ACL *)ExAllocatePool2(256LL, v14, 1699966793LL);
    v16 = Pool2;
    if ( !Pool2 )
      return -1073741670;
    RtlCreateAcl(Pool2, v14, 2u);
    RtlAddMandatoryAce(v16, 2u, 0, Sid, 0x11u, 1u);
    RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, v16, 0);
    *a3 = v16;
  }
  result = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v10, 0);
  if ( a4 )
  {
    v17 = *a4 | 4;
    *a4 = v17;
    if ( v4 )
      *a4 = v17 | 0x10;
  }
  return result;
}
