/*
 * XREFs of AdtpIsSDValidSelfRelative @ 0x1406711DC
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x14066FDD0 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlGetControlSecurityDescriptor @ 0x14069E2C0 (RtlGetControlSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1407B52C0 (RtlValidSecurityDescriptor.c)
 */

__int64 __fastcall AdtpIsSDValidSelfRelative(PSECURITY_DESCRIPTOR SecurityDescriptor, bool *a2)
{
  NTSTATUS ControlSecurityDescriptor; // ebx
  WORD Control; // [rsp+40h] [rbp+8h] BYREF
  ULONG Revision; // [rsp+50h] [rbp+18h] BYREF

  ControlSecurityDescriptor = 0;
  if ( !SecurityDescriptor )
    return 3221225485LL;
  if ( !RtlValidSecurityDescriptor(SecurityDescriptor) )
    return 3221225593LL;
  if ( a2 )
  {
    Control = 0;
    ControlSecurityDescriptor = RtlGetControlSecurityDescriptor(SecurityDescriptor, &Control, &Revision);
    if ( ControlSecurityDescriptor >= 0 )
      *a2 = (Control & 0x8000u) != 0;
  }
  return (unsigned int)ControlSecurityDescriptor;
}
