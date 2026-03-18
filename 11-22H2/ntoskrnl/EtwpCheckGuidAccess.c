/*
 * XREFs of EtwpCheckGuidAccess @ 0x140782074
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x14077FEF8 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x14078149C (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckNotificationAccess @ 0x140782008 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x1408262CC (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1F34 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409EE89C (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409EECE0 (EtwpLogFileNameRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x1406C04DC (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0FAC (EtwpGetSecurityDescriptorByGuid.c)
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
