/*
 * XREFs of SeAuditingHardLinkEventsWithContext @ 0x1406EAAB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 */

BOOLEAN __stdcall SeAuditingHardLinkEventsWithContext(
        BOOLEAN AccessGranted,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext)
{
  __int16 v3; // ax
  PSECURITY_SUBJECT_CONTEXT v4; // r9
  __int64 v6; // rax
  char *v7; // rax

  v3 = *((_WORD *)SecurityDescriptor + 1);
  v4 = SubjectSecurityContext;
  if ( (v3 & 0x10) == 0 )
    return 0;
  if ( v3 >= 0 )
  {
    v7 = (char *)*((_QWORD *)SecurityDescriptor + 3);
  }
  else
  {
    v6 = *((unsigned int *)SecurityDescriptor + 3);
    if ( !(_DWORD)v6 )
      return 0;
    v7 = (char *)SecurityDescriptor + v6;
  }
  if ( !v7 )
    return 0;
  if ( !*((_WORD *)v7 + 2) )
    return 0;
  LOBYTE(SecurityDescriptor) = AccessGranted;
  LOBYTE(SubjectSecurityContext) = AccessGranted == 0;
  return (unsigned __int8)sub_140724320(116LL, SecurityDescriptor, SubjectSecurityContext, v4) != 0;
}
