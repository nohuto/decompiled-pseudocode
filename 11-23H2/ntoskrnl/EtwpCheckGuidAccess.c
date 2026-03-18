/*
 * XREFs of EtwpCheckGuidAccess @ 0x140781B64
 * Callers:
 *     EtwpStartLogger @ 0x1406BBFB0 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x14077F9E8 (EtwpNotifyGuid.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140780F8C (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckNotificationAccess @ 0x140781AF8 (EtwpCheckNotificationAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140825770 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409E1E84 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409EE7EC (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409EEC30 (EtwpLogFileNameRundown.c)
 * Callees:
 *     EtwpAccessCheck @ 0x1406BDBDC (EtwpAccessCheck.c)
 *     EtwpFreeSecurityDescriptor @ 0x1406C048C (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0F5C (EtwpGetSecurityDescriptorByGuid.c)
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
