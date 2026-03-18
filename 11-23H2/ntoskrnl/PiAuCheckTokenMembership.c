/*
 * XREFs of PiAuCheckTokenMembership @ 0x14095B710
 * Callers:
 *     PiAuCheckClientInteractive @ 0x14095B650 (PiAuCheckClientInteractive.c)
 * Callees:
 *     RtlLengthSid @ 0x140227A40 (RtlLengthSid.c)
 *     SeAccessCheck @ 0x140231650 (SeAccessCheck.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1406BD500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x140735270 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x140736580 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140736620 (RtlCreateAcl.c)
 *     SeReleaseSubjectContext @ 0x140737BC0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140737C70 (SeCaptureSubjectContext.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140781FF0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x1407EF0C0 (RtlSetGroupSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiAuCheckTokenMembership(void *Src, BOOLEAN *a2)
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
      Acl = RtlpAddKnownAce((__int64)v8, 2u, 0, 1, (unsigned __int8 *)Src, 0);
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
                  KeGetCurrentThread()->PreviousMode,
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
