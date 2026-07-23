/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1800AECC0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D7C4C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180070F10 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007130C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x1800AF8B6 (RtlpFcSendFeatureUsageNotifications.c)
 */

NTSTATUS __cdecl RtlNotifyFeatureUsage(PRTL_FEATURE_USAGE_REPORT FeatureUsageReport)
{
  __int64 v1; // rdx
  NTSTATUS v3; // ebx
  int v4; // eax
  __int64 v5; // rdi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( byte_1801843C8 )
    return -1073741058;
  LOBYTE(v1) = 1;
  v4 = RtlpFcReferenceFeatureConfigurationBuffers((__int64)FeatureUsageReport, v1, &v8, &v7);
  v5 = v7;
  v3 = v4;
  if ( v4 >= 0 )
    v3 = RtlpFcSendFeatureUsageNotifications(FeatureUsageReport, *(_QWORD *)(v7 + 56), *(_QWORD *)(v7 + 64));
  if ( v5 )
    RtlpFcBufferManagerDereferenceBuffers(qword_180182DE8, v5);
  return v3;
}
