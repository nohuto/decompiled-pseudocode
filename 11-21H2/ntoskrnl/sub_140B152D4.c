/*
 * XREFs of sub_140B152D4 @ 0x140B152D4
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402D0E30 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     SeAssignSecurity @ 0x140719100 (SeAssignSecurity.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140B156F8 @ 0x140B156F8 (sub_140B156F8.c)
 */

__int64 sub_140B152D4()
{
  int v0; // ebx
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+40h] [rbp-28h] BYREF
  PSECURITY_DESCRIPTOR ExplicitDescriptor; // [rsp+70h] [rbp+8h] BYREF

  ExplicitDescriptor = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v0 = SeConvertStringSecurityDescriptorToSecurityDescriptor(
         (__int64)L"O:SYG:SYD:(A;;GA;;;SY)(A;;GA;;;BA)",
         1,
         (__int64)&ExplicitDescriptor,
         0LL);
  if ( v0 >= 0 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v0 = SeAssignSecurity(0LL, ExplicitDescriptor, &NewDescriptor, 0, &SubjectContext, &stru_140C0BB38, PagedPool);
    SeReleaseSubjectContext(&SubjectContext);
    if ( v0 >= 0 )
    {
      v0 = sub_140B156F8();
      if ( v0 >= 0 )
        v0 = 0;
    }
  }
  if ( ExplicitDescriptor )
    ExFreePoolWithTag(ExplicitDescriptor, 0);
  return (unsigned int)v0;
}
