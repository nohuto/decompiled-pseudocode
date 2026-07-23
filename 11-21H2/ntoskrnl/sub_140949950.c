/*
 * XREFs of sub_140949950 @ 0x140949950
 * Callers:
 *     sub_140949890 @ 0x140949890 (sub_140949890.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14078ED60 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14078EDC0 (RtlSetOwnerSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140949950(void *Src, BOOLEAN *a2)
{
  ULONG v4; // ebx
  ACL *Pool2; // rax
  ACL *v6; // rdi
  int Acl; // ebx
  ACL *v8; // rsi
  NTSTATUS AccessStatus; // [rsp+50h] [rbp-9h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-5h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+58h] [rbp-1h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp+1Fh] BYREF

  GrantedAccess = 0;
  AccessStatus = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 2031617;
  *a2 = 0;
  v4 = 3 * (RtlLengthSid(Src) + 20);
  Pool2 = (ACL *)ExAllocatePool2(256LL, v4, 538996816LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v8 = Pool2 + 5;
    RtlCreateSecurityDescriptor(Pool2, 1u);
    RtlSetOwnerSecurityDescriptor(v6, Src, 0);
    RtlSetGroupSecurityDescriptor(v6, Src, 0);
    Acl = RtlCreateAcl(v8, v4 - 40, 2u);
    if ( Acl >= 0 )
    {
      Acl = sub_1407B4900(v8, 2u, 0, 1, (unsigned __int8 *)Src, 0);
      if ( Acl >= 0 )
      {
        Acl = RtlSetDaclSecurityDescriptor(v6, 1u, v8, 0);
        if ( Acl >= 0 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          *a2 = SeAccessCheck(
                  v6,
                  &SubjectContext,
                  0,
                  1u,
                  0,
                  0LL,
                  &GenericMapping,
                  *((_BYTE *)KeGetCurrentThread() + 562),
                  &GrantedAccess,
                  &AccessStatus);
          SeReleaseSubjectContext(&SubjectContext);
          Acl = 0;
        }
      }
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
