/*
 * XREFs of EtwpCheckGuidAccess @ 0x140781D54
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFE0 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x14077FBD8 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14078117C (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckNotificationAccess @ 0x140781CE8 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140825A70 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E2114 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409EEA7C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409EEEC0 (EtwpLogFileNameRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1406BDC0C (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x1406C04BC (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0F8C (EtwpGetSecurityDescriptorByGuid.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(unsigned int *a1, ACCESS_MASK a2, struct _SECURITY_SUBJECT_CONTEXT *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  LODWORD(a3) = EtwpAccessCheck(SecurityDescriptor, a2, a3);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return (unsigned int)a3;
}
