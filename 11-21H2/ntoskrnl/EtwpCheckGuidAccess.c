/*
 * XREFs of EtwpCheckGuidAccess @ 0x140790CA8
 * Callers:
 *     EtwpNotifyGuid @ 0x1406EF64C (EtwpNotifyGuid.c)
 *     EtwpCheckNotificationAccess @ 0x14078EE9C (EtwpCheckNotificationAccess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140790C44 (EtwpCheckProviderLoggingAccess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140864164 (EtwpCheckSystemTraceAccess.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 *     EtwpCheckGuidAccessAndDoRundown @ 0x1409E9E48 (EtwpCheckGuidAccessAndDoRundown.c)
 *     EtwpLogFileNameRundown @ 0x1409EA280 (EtwpLogFileNameRundown.c)
 *     EtwpCheckCurrentUserGuidAccess @ 0x1409EB7FC (EtwpCheckCurrentUserGuidAccess.c)
 * Callees:
 *     EtwpAccessCheck @ 0x140794404 (EtwpAccessCheck.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140797BD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14079805C (EtwpFreeSecurityDescriptor.c)
 */

__int64 __fastcall EtwpCheckGuidAccess(__int64 a1, ACCESS_MASK a2)
{
  unsigned int v3; // ebx
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+48h] [rbp+20h] BYREF

  SecurityDescriptor = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, &SecurityDescriptor);
  v3 = EtwpAccessCheck(SecurityDescriptor, a2);
  EtwpFreeSecurityDescriptor(&SecurityDescriptor);
  return v3;
}
