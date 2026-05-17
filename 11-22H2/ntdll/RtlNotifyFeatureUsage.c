/*
 * XREFs of RtlNotifyFeatureUsage @ 0x1800AECC0
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1800D7C4C (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x180070F10 (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x18007130C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcSendFeatureUsageNotifications @ 0x1800AF8B6 (RtlpFcSendFeatureUsageNotifications.c)
 */

__int64 __fastcall RtlNotifyFeatureUsage(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // eax
  __int64 v4; // rdi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  if ( byte_1801843C8 )
  {
    return (unsigned int)-1073741058;
  }
  else
  {
    v3 = RtlpFcReferenceFeatureConfigurationBuffers(a1, 1, &v7, &v6);
    v4 = v6;
    v2 = v3;
    if ( v3 >= 0 )
      v2 = RtlpFcSendFeatureUsageNotifications(a1, *(_QWORD *)(v6 + 56), *(_QWORD *)(v6 + 64));
    if ( v4 )
      RtlpFcBufferManagerDereferenceBuffers(qword_180182DE8, v4);
  }
  return v2;
}
