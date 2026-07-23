/*
 * XREFs of sub_14064C900 @ 0x14064C900
 * Callers:
 *     sub_14064B46C @ 0x14064B46C (sub_14064B46C.c)
 * Callees:
 *     RtlGetControlSecurityDescriptor @ 0x140678850 (RtlGetControlSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x140726610 (RtlValidSecurityDescriptor.c)
 */

__int64 __fastcall sub_14064C900(PSECURITY_DESCRIPTOR SecurityDescriptor, bool *a2)
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
